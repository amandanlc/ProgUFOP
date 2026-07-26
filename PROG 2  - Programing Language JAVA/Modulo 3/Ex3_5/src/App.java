import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        LogOperacoesMatematicas logOperacoesMatematicas = LogOperacoesMatematicas.getInstancia();
        Scanner scan = new Scanner(System.in);
        String operacao, op;

        logOperacoesMatematicas.exibirLog();

        System.out.println("Escreva uma operação: ");
        operacao = scan.nextLine();

        logOperacoesMatematicas.logString(operacao);
        logOperacoesMatematicas.exibirLog();

        
        System.out.println("Escreva uma operação: ");
        op = scan.nextLine();
        logOperacoesMatematicas.logString(op);
        logOperacoesMatematicas.exibirLog();
    }
}
