public class ConversorEuro implements ConversorMoeda{
    @Override
    public double converterParaReal(double valor){
        System.out.println("EUR ");
        return valor * 5.5;
    }
}
