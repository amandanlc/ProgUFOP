public class JurosCompostos implements CalculoJuros{
    @Override
    public double calcular(double capital, double taxa, int meses){
        return capital * Math.pow((1 + taxa), meses);
    }
}
