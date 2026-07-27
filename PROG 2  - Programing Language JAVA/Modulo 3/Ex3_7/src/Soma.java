public class Soma implements OperacaoMatematica{
    @Override
    public double calcular(double a, double b){
        System.out.println("Soma: ");
        return a + b;
    }
}
