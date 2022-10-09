const questions=[
    {
        'que' : 'Which of the following is a markup language?',
        'a' : 'html',
        'b':'css',
        'c':'js',
        'd':'c++',
        'correct':'a'

    },
    {
        'que' : 'What’s the smallest country in the world?',
        'a' : 'India',
        'b':'China',
        'c':'Russia',
        'd':'The Vatican',
        'correct':'d'

    },
    {
        'que' : 'Name the longest river in the world?',
        'a' : 'Ganga',
        'b':'Bharamhaputa',
        'c':'Nile',
        'd':'Seoul river',
        'correct':'c'

    }

]
let index=0;
let total = questions.length;
let r = 0, w=0;
const quebox = document.getElementById('queBox');
const optionInputs = document.querySelectorAll('.options')

const loadQuestion=() => {
    if(index == total){
        end();
    }else{
reset();
    const data = questions[index]
//console.log(data);
quebox.innerText= `${index+1})  ${data.que}`;
optionInputs[0].nextElementSibling.innerText=data.a;
optionInputs[1].nextElementSibling.innerText=data.b;
optionInputs[2].nextElementSibling.innerText=data.c;
optionInputs[3].nextElementSibling.innerText=data.d;
}
}

const submitQuiz=()=>
{
    const data = questions[index];
    const ans = getAnswer();
    if(ans == data.correct){
        r++;
    }else{
        w++;
    }
    index++;
    loadQuestion();
    return;
}

const getAnswer=()=>{
    let answer;
    optionInputs.forEach(
        (input) => {
           
            if(input.checked){
                
                console.log(input.value);
                answer = input.value;
                
            }
        }
       
    )
    return answer;
}

function reset(){
    optionInputs.forEach(
        (input) => {
        input.checked = false;
        }  
    )
}

function end(){
    document.getElementById('box').innerHTML =
    `
    <h3> Thank You for playing </h3>
    <h2> ${r} / ${total}  are correct.</h2>
    `
}


//initial call
loadQuestion();




