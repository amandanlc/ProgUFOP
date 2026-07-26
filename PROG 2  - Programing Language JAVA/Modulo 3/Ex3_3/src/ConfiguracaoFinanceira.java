public class ConfiguracaoFinanceira {
    private static ConfiguracaoFinanceira instancia;
    private double taxaSelic;

    private ConfiguracaoFinanceira(){
        taxaSelic = 0.1;
    }

    public static ConfiguracaoFinanceira getInstancia(){
        if (instancia == null) {
            instancia = new ConfiguracaoFinanceira();
        }
        return instancia;
    }

    public double getTaxaSelic(){
        return taxaSelic;
    }

}
