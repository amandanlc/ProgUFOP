public class App {
    public static void main(String[] args) throws Exception {
        ConversorMoeda dolaraReal = ConversorFactory.converter("USS");
        ConversorMoeda dolParaReal = ConversorFactory.converter("USD");
        System.out.println(dolParaReal.converterParaReal(10));
        ConversorMoeda euroParaReal = ConversorFactory.converter("EUR");
        System.out.println(euroParaReal.converterParaReal(10));

    }
}
