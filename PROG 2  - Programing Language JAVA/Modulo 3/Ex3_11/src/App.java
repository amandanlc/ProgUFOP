public class App {
    public static void main(String[] args) throws Exception {
        Calculadora arit = EstatisticFactory.calcFac(9);
        double vetor[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
        System.out.println(arit.calcular(vetor));
        Calculadora mediana = EstatisticFactory.calcFac(11);
        double vetor2[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0};
        System.out.println(mediana.calcular(vetor2));

    }
}
