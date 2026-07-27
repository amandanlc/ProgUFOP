public class CalculadoraFactory {
    public static OperacaoMatematica criarOperacao(String sinal){
        if (sinal.equals("+")) {
            return new Soma();
        } else if (sinal.equals("*")) {
            return new Multiplicacao();
        } else {
            System.out.println("OPERAÇÃO INVÁLIDA!");
        }
        return null;
    }
}
