public class ConversorDolar implements ConversorMoeda {
    @Override
    public double converterParaReal(double valor){
        System.out.println("USD ");
        return valor * 5.0;
    }
}
