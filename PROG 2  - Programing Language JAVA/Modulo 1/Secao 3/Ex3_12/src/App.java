public class App {
    public static void main(String[] args) throws Exception {
        Gerente gerente = new Gerente();
        gerente.exibirResultados();
        Gerente gerente2 = new Gerente("Amanda", 1600.0, 500.0);
        gerente2.exibirResultados();
    }
}
