import java.util.Scanner;

public class Ex1_6 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int[][] mat = new int[3][3];
        int soma = 0;

        System.out.println("Escreva 9 números inteiros da matriz 3x3");

        for (int i = 0; i < mat.length; i++) {
            for (int j = 0; j < mat.length; j++) {                
                System.out.print("Número [" + i + "]" + "[" + j + "]: ");
                mat[i][j] = scan.nextInt();
            }
        }

        for (int i = 0; i < mat.length; i++) {
            for (int j = 0; j < mat.length; j++) {
                System.out.print(mat[i][j] + " ");
            }
            System.out.println();
        }

        for (int i = 0; i < mat.length; i++) {
            for (int j = 0; j < mat.length; j++) {
                soma += mat[i][j];
            }   
        }

        System.err.println("Soma dos elementos = " + soma);

        scan.close();
    }
}
