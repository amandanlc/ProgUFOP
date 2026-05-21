import java.util.Scanner;

public class Ex2_2 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        String frase;

        System.out.print("Escreva uma frase: ");
        frase = scan.nextLine();

        System.out.println(frase.toUpperCase());

        scan.close();
    }
}
