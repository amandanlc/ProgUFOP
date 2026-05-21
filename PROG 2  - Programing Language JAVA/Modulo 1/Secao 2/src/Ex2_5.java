import java.util.Scanner;

public class Ex2_5 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        String frase, letra1, letra2;

        System.out.print("Digite uma frase: ");
        frase = scan.nextLine();

        System.out.print("Digite uma letra da frase que queira alterar: ");
        letra1 = scan.nextLine();

        System.out.print("Digite a letra para alterar: ");
        letra2 = scan.nextLine();

        frase = frase.replace(letra1, letra2);
        System.out.print("Frase alterada: " + frase);

        scan.close();        
    }
}
