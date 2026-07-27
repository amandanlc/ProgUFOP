public class JurosSimples implements CalculoJuros{
    @Override
    public double calcular(double capital, double taxa, int meses){
        return capital * taxa * meses;
    }
}
