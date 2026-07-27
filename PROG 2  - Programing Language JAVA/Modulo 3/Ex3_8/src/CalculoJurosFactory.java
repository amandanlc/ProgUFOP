public class CalculoJurosFactory {
    public static CalculoJuros calculo(String juros){
        if (juros.equalsIgnoreCase("simples")) {
            return new JurosSimples();
        } else if (juros.equalsIgnoreCase("composto")) {
            return new JurosCompostos();
        }
        return null;
    }
}
