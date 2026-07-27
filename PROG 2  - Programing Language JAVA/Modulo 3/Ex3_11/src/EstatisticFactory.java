public class EstatisticFactory {
    public static Calculadora calcFac(int tamanhoVetor){
        if (tamanhoVetor < 10 && tamanhoVetor > 1) {
            return new CalculadoraMediaAritmética();
        } else if (tamanhoVetor >= 10) {
            return new CalculadoraMediana();
        } else{
            System.err.println("Tamanho inválido!");
        }
        return null;
    }
}
