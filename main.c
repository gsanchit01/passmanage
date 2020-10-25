//password management
#include<stdio.h>
#include<stdlib.h>
#include "head.h"
#include <windows.h>
struct user{
char name[20];
char email[40];
char user[20];
char pass[20];

}a,v[10];
main()
{
	int z,i,e,b,d,m,y,n,x=0;char ch,c,us[20],ps[20],em[40];
	FILE *fp=fopen("data.txt","a");
	if(fp==NULL)	
{system("color c1");
	printf("Error in opening file");
	fclose(fp);
}
else{
here:
		fp=fopen("data.txt","a");
		system("color 1E");
		printf("\n\n\t\t\t\t\t\tWelcome to program\n\t\t\t\t\t\t\t\t\tMade by- Sanchit Gupta\n\n");
		pr_s();
		printf("\n\n\t1. Show All Data\n\t2. Register\n\t3. Login\n\t4. Exit\n\n     Enter Your Choice: ");
		
		z=getche();
		
		if(z=='2')
		{system("color e0");
			system("cls");
			printf("\n\n\t\t\t\t\t\tNew Registration\n\n");
			pr_s();
			printf("\n\n\nEnter your Credentials-\n\n\n");
			printf("\tEnter Name: ");
			gets(a.name);
			abc:
			printf("\n\tEnter email: ");
		  	gets(a.email);
		  	int r=chk_ml(a.email);
			if(r==0)
			goto abc; 
			printf("\n\tEnter Username: ");
			gets(a.user);
			printf("\n\tEnter Password: ");
			for (i=0;1;i++)
			{
			ch=getch();
			if(ch==13)
			{
			break;}
			if (ch==8)
			{
			i=i-2;
			printf("\b \b\b");
			}
			else
			{
			a.pass[i]=ch;
			}printf("*");
			}
			fwrite(&a,sizeof(a),1,fp);
			fclose(fp);
		    memset(a.pass,0,strlen(a.pass));
			system("cls");
		printf("\n\n\t\t\t\tRegesterd Sucessfully");
		goto here;
		}
		else if(z=='1')
		{fp=fopen("data.txt","r");
		system("color 8e");
		system("cls");
		printf("\n\n\t\t\t\t\t\t     Regesterd Users\n\n\n\n");
		pr_s();
		printf("\n\n\tName\t\t\tUsername\t\t\tPassword\t\t\tEmail\n");
		pr_s();
		while(fread(&a,sizeof(a),1,fp)){
			printf("\n\n      %s\t\t\t%s\t\t\t\t",a.name,a.user,a.pass);
			for(m=0;m<strlen(a.pass);m++)
			printf("*");
			printf("\t\t\t\t%s",a.email);
			
			}printf("\tLogin to See Passwords...\n\n\t\t\t\t");
			system("pause");
			system("cls");
fclose(fp);
			goto here;
			
		}
		else if(z=='3'){
		fp=fopen("data.txt","r");
		for(e=0;(fread(&a,sizeof(a),1,fp));e++){
			strcpy(v[e].name,a.name);
			strcpy(v[e].email,a.email);
			strcpy(v[e].user,a.user);
			strcpy(v[e].pass,a.pass);
		}
xyz:
	system("color 5b");
	system("cls");
	printf("\t\t\t\t\t\t\t\tLogin\n\n\n\n");
	pr_s();
	
	printf("\n\n\nEnter your Credentials-\n(Username & Password is Case Sensetive)\n\n");
	printf("Username :  ");
	scanf("%s",us);
	for(b=0;b<e;b++)
	{if(!(strcmp(v[b].user,us)))
		{break;}
		}
	printf("\n\n\npassword :  ");
for (i=0;1;i++)
			{
			ch=getch();
			if(ch==13)
			{
			break;}
			if (ch==8)
			{
			i=i-2;
			printf("\b \b\b");
			}
			else
			{
			ps[i]=ch;
			}printf("*");
			}
if(i==e)
{
printf("\n\n\t\t\t\t\t\t\t\t\t\tInvalid Username\n\n\n\t\t\t");
system("pause");
goto xyz;
}
d=strcmp(ps,v[b].pass);
printf("\n\n\n");
pr_s();
	printf("\n\n\n");
if(d==0)
{
printf("\t\t\t\t\tLogin Sucessfull");
MessageBox(0,"Login Sucessfull", "Login", MB_OK );
system("cls");
system("color 2f");
goto login;}
else
{
printf("\t\t\t\t\tLogin Unsucessfull");
MessageBox(0,"Login Unsucessfull\nWrong Credentials", "Error", MB_OK );
goto xyz;
system("color 4F");}
}
		else if(z=='4')
		exit(1);
		else
		{	
			system("cls");
			printf("\n\n\n\n\n\t\t\t\tWrong Input	\n\n\n\n\n\t\t\t\t");
			system("timeout 5");
			system("cls");
			goto here;
		}
fclose(fp);
login:
		system("cls");
	  	printf("\n\n\t\t\t\t\t\tWelcome %s\n\t\t\t\t\t\t\t\t\t\n\n",v[b].name);
		pr_s();
		printf("\n\n\t1. Show all User Data\n\t2. Change Email\n\t3. Delete record\n\t4. Logout\n\n     Enter Your Choice: ");
	y=getch();
	if(y=='1')
		{fp=fopen("data.txt","r");
		system("cls");
		system("color 09");
		printf("\n\n\t\t\t\t\t\t     Regesterd Users\n\n\n\n");
		pr_s();
		printf("\n\n\tName\t\t\tUsername\t\t\tPassword\t\t\tEmail\n");
		pr_s();
		while(fread(&a,sizeof(a),1,fp)){
			printf("\n\n      %s\t\t\t%s\t\t\t\t%s\t\t\t\t%s",a.name,a.user,a.pass,a.email);
			}printf("\n\n");
			system("pause");
			goto login;
			fclose(fp);}
fclose(fp);
	if(y=='3'){
		fp=fopen("data.txt","r");
		FILE *fp2 = fopen("data2.txt","w");
		system("cls");
		system("color 5e");
		printf("\n\n\t\t\t\t\t\t     Regesterd Users\n\n\n\n");
		pr_s();
		printf("\n\nS.N.\tName\t\t\tUsername\t\t\tPassword\t\t\tEmail\n");
		pr_s();int g=1;
		while(fread(&a,sizeof(a),1,fp)){
			printf("\n\n  %d     %s\t\t\t%s\t\t\t\t%s\t\t\t\t%s",g,a.name,a.user,a.pass,a.email);
			g++;
			}printf("\n\n\tEnter No of record you want to delete: ");
			scanf("%d",&n);
			fseek(fp,0,SEEK_SET);
	while(x<(100*(n-1)))
	{ c=getc(fp);
		putc(c,fp2);
		x++;
	}
int pos=ftell(fp);
	fseek(fp,100,SEEK_CUR);
	while((c=getc(fp))!=EOF)
	{
		putc(c,fp2);
	}
	_fcloseall();
	
	printf("\n\t\tDeleted Sucessfully\n\n\t");

source();	system("pause");
	goto login;
	}
		if(y=='2'){
		fp=fopen("data.txt","r");
		FILE *fp2 = fopen("data2.txt","w");
		system("cls");
		printf("\n\n\t\t\t\t\t\t     Regesterd Users\n\n\n\n");
		pr_s();
		printf("\n\nS.N.\tName\t\t\tUsername\t\t\tPassword\t\t\tEmail\n");
		pr_s();int g=1;
		while(fread(&a,sizeof(a),1,fp)){system("color e5");
			printf("\n\n  %d     %s\t\t\t%s\t\t\t\t%s\t\t\t\t%s",g,a.name,a.user,a.pass,a.email);
			g++;
			}printf("\n\n\tEnter No of record which email id you want to change: ");
			scanf("%d%*c",&n);
			fseek(fp,0,SEEK_SET);
	while(x<((100*(n-1))+20))
	{ c=getc(fp);
		putc(c,fp2);
		x++;
	}
int pos=ftell(fp);

def:
printf("\n\tEnter New Email: ");
gets(em);
int r=chk_ml(em);
			if(r==0)
			goto def;
fwrite(em,sizeof(em),1,fp2);
	fseek(fp,40,SEEK_CUR);
	while((c=getc(fp))!=EOF)
	{
		putc(c,fp2);
	}
	_fcloseall();
	
	printf("\n\t\tChanged Sucessfully\n\n\t");

source();	system("pause");
	goto login;
	}
	else if(y=='4')
	{ system("cls");
		printf("\n\n\t\t\t\tLogout Sucessfully");
		goto here;
	}
}
}



