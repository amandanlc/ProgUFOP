import java.util.HashMap;
import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        HashMap<Integer, String> produto = new HashMap<>();
        produto.put(1, "bola");
        produto.put(2, "borracha");
        produto.put(3, "lapis");

        Scanner scan = new Scanner(System.in);
        System.out.println("Digite o código do produto: ");

        if (scan.hasNextInt()) {
            int codigo = scan.nextInt();
            if (produto.containsKey(codigo)) {
                System.out.println("Produto encontrado: " + produto.get(codigo));
            }else{
                System.out.println("Código não encontrado.");
            }
        }else{
            System.out.println("Digite um número inteiro");
        }

        scan.close();
    }
}
