import java.util.Scanner;

public class Ex2_3 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        String palavra;
        int isPalin = 0;

        System.out.print("Digite uma palavra: ");
        palavra = scan.nextLine();

        int n = palavra.length();

        for (int i = 0; i < n / 2; i++) {
            if (palavra.charAt(i) == palavra.charAt(n - 1 - i)) {
                isPalin = 1;
            } else{
                isPalin = 0;
            }
        }

        if (isPalin == 1) {
            System.out.println("É palíndromo");
        } else{
            System.out.println("Não é palíndromo");
        }

        scan.close();
    }
}
