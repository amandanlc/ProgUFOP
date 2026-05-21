import java.util.Scanner;

public class Ex1_3 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int[] num = new int[10];
        int soma = 0;

        System.out.println("Escreva 10 números inteiros");

        for (int i = 0; i < num.length; i++) {
            System.out.print("Número " + i+1 + ": ");
            num[i] = scan.nextInt();
        }

        for (int i = 0; i < num.length; i++) {
            if (num[i] % 2 == 0) {
            soma += num[i];                
            }
        }

        System.err.println("Soma dos pares = " + soma);

        scan.close();
    }
}
