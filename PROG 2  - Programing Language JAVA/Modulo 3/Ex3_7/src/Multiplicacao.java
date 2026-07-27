public class Multiplicacao implements OperacaoMatematica{
    @Override
    public double calcular(double a, double b){
        System.out.println("Multiplicação: ");
        return a * b;
    }
}
