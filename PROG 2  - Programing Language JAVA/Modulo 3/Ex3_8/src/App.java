public class App {
    public static void main(String[] args) throws Exception {
        CalculoJuros simples = CalculoJurosFactory.calculo("SIMPLES");
        System.out.println(simples.calcular(1000.0, 0.4, 2));
        CalculoJuros composto = CalculoJurosFactory.calculo("comPosto");
        System.out.println(composto.calcular(2000.0, 0.5, 2));
    }
}
