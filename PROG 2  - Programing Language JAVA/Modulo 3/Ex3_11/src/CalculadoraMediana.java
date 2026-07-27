public class CalculadoraMediana implements Calculadora{
    @Override
    public double calcular(double[] vetor){
        if (vetor.length % 2 == 0) {
            int n = vetor.length / 2;
            return (vetor[n-1] + vetor[n]) / 2;
        } else {
            int n = (vetor.length + 1) / 2;
            return vetor[n - 1];
        }
    }
}
