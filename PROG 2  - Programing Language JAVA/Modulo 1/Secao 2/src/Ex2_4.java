import java.util.Scanner;

public class Ex2_4 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        String frase;
        int count = 0;

        System.out.print("Digite uma frase: ");
        frase = scan.nextLine();

        for (int i = 0; i < frase.length(); i++) {
            if (frase.charAt(i) == ' ') {
                count++;
            }
        }

        if (!frase.isEmpty()) {
            System.out.print("Número de palavras: " + (count + 1));            
        } else{
            System.out.println("Número de palavras: 0");
        }

        scan.close();
    }
}
