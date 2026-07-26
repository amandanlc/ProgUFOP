import java.util.ArrayList;
import java.util.List;

public class LogOperacoesMatematicas {
    private static LogOperacoesMatematicas instancia;
    private List<String> logs;

    private LogOperacoesMatematicas(){
        logs = new ArrayList<>();
    }

    public static LogOperacoesMatematicas getInstancia(){
        if (instancia == null) {
            instancia = new LogOperacoesMatematicas();
        }
        return instancia;
    }

    public void logString(String operacao){
        if (operacao.contains("+") | operacao.contains("-")) {
            logs.add(operacao);
        }else{
            System.out.println("Operação inválida");
        }
    } 

    public void exibirLog(){
        System.out.println("LOG COMPLETO");
        if (logs.isEmpty()) {
            System.out.println("Log vazio!");
        }
        for (int i = 0; i < logs.size(); i++) {
            System.out.println(logs.get(i));
        }
    }
}