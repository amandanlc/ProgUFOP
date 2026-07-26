import java.util.Map;
import java.util.HashMap;

public class BancoDeDadosCentral {
    private static BancoDeDadosCentral instancia;
    private Map<String,Double> dados;

    private BancoDeDadosCentral(){
        dados = new HashMap<>();
    }

    public static synchronized BancoDeDadosCentral getInstancia(){
        if (instancia == null) {
            instancia = new BancoDeDadosCentral();
        }
        return instancia;
    }

    public void salvarSaldo(String cpf, Double valor){
        dados.put(cpf, valor);
    }

    public Double recuperarSaldo(String cpf){
        if (dados.isEmpty()) {
            System.err.println("Banco de dados vazio");
        }else if (dados.containsKey(cpf)) {            
            return dados.get(cpf);
        } else{
            System.out.println("CPF não encontrado");
        }
        return 0.0;
    }
}
