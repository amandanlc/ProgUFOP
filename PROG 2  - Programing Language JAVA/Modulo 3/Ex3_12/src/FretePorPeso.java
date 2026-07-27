public class FretePorPeso implements CalculadorFrete {
    @Override
    public double calcularFrete(double peso){
        return peso * 2.5;
    }
}
