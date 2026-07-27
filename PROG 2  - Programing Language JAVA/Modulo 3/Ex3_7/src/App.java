public class App {
    public static void main(String[] args) throws Exception {
        OperacaoMatematica soma = CalculadoraFactory.criarOperacao("+");
        System.out.println(soma.calcular(2.0, 4.0));
        OperacaoMatematica mult = CalculadoraFactory.criarOperacao("*");
        System.out.println(mult.calcular(2.0, 4.0));
    }
}
