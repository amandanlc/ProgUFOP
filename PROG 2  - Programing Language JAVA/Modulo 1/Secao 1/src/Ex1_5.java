import java.util.Scanner;

public class Ex1_5 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int[] idade = new int[5];
        String[] nome = new String[5];

        for (int i = 0; i < 5; i++) {
            System.out.print("Digite o nome " + (i+1) + ": ");
            nome[i] = scan.nextLine();

            System.out.print("Digite a idade " + (i+1) + ": ");
            idade[i] = scan.nextInt();

            System.out.println();
        }

        for (int i = 0; i < 5; i++) {
            System.out.println("Pessoa " + (i+1));
            System.out.println("Nome: " + nome[i]);
            System.out.println("Idade: " + idade[i]);
            System.out.println();
        }

        System.out.println("Maiores de idade: ");
        for (int i = 0; i < 5; i++) {
            if (idade[i] >= 18) {
                System.out.println(nome[i]);
            }
        }

        scan.close();
    }
}
