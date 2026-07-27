public class App {
    public static void main(String[] args) throws Exception {
        LojaVirtual local = new LojaLocal();
        double nLocal = local.criarCalculadorFrete().calcularFrete(2);
        System.out.println("Valor frete: " + nLocal);

        LojaVirtual nacional = new LojaNacional();
        double nNacional = nacional.criarCalculadorFrete().calcularFrete(3);
        System.out.println("Valor frete: " + nNacional);
    }
}
