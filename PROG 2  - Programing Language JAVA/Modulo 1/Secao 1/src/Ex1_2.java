import java.util.Scanner;

public class Ex1_2 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        System.err.print("Digite um número inteiro: ");
        int num = scan.nextInt();

        if (num % 2 == 0) {
            System.err.println("É par");
        } else{
            System.err.println("É impar");
        }

        scan.close();

    }
}
