public class CalculadoraImpostosGlobais {
    private static CalculadoraImpostosGlobais instancia;
    private final double taxaImposto;

    private CalculadoraImpostosGlobais() {
        this.taxaImposto = 0.05;
    }

    public static CalculadoraImpostosGlobais getInstancia() {
        if (instancia == null) {
            instancia = new CalculadoraImpostosGlobais();
        }
        return instancia;
    }

    public double getTaxaImposto() {
        return taxaImposto;
    }
}
