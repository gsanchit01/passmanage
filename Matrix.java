import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class Matrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of rows : ");
        int rows = sc.nextInt();
        System.out.print("Enter no of columns : ");
        int columns = sc.nextInt();
        int[][] arr1 = new int[rows][columns];
        int[][] arr2 = new int[rows][columns];
        int[][] result = new int[rows][columns];
        for(int i = 0;i < rows;i++){
            for(int j = 0;j < columns;j++){
                System.out.print("Enter the "+(i+1)+" th row "+"and "+(j+1)+" th column element of 1 st matrix : ");
                arr1[i][j] = sc.nextInt();
            }
        }
        System.out.print("1st matrix : ");
        System.out.println(Arrays.deepToString(arr1));
        for(int i = 0;i < rows;i++){
            for(int j = 0;j < columns;j++){
                System.out.print("Enter the "+(i+1)+" th row "+"and "+(j+1)+" th column element for 2nd matrix : ");
                arr2[i][j] = sc.nextInt();
            }
        }
        System.out.print("2nd matrix : ");
        System.out.println(Arrays.deepToString(arr2));
        int sum = 0;
        for(int i = 0;i < rows;i++){
            for(int j = 0;j < columns;j++){
                sum = arr1[i][j] + arr2[i][j];
                result[i][j] = sum;
            }
        }
        System.out.print("Matrix after summation : ");
        System.out.println(Arrays.deepToString(result));
        int subtract = 0;
        for(int i = 0;i < rows;i++){
            for(int j = 0;j < columns;j++){
                subtract = arr1[i][j] - arr2[i][j];
                result[i][j] = subtract;
            }
        }
        System.out.print("Matrix after subtraction : ");
        System.out.println(Arrays.deepToString(result));
        for(int i = 0;i < rows;i++){
            for(int j = 0;j < columns;j++){
                result[i][j] = 0;
                for(int k = 0;k < rows;k++){
                    result[i][j] = result[i][j] + (arr1[i][k] * arr2[k][j]);
                }
            }
        }
        System.out.print("Matrix after multiplication : ");
        System.out.println(Arrays.deepToString(result));
    }
}
