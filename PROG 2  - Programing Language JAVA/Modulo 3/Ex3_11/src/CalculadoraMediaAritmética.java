public class CalculadoraMediaAritmética implements Calculadora{
    @Override
    public double calcular(double[] vetor){
        double resultado = 0;
        for (int i = 0; i < vetor.length; i++) {
            resultado += vetor[i];
        }
        return resultado / vetor.length;
    }
}
