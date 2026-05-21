public class App {
    public static void main(String[] args) throws Exception {
        Veiculo veiculo = new Veiculo("rosa", "fiat");
        Veiculo carro = new Carro("preto", "gol");
        Veiculo caminhao = new Caminhao("verde", "RAM");
        Veiculo moto = new Moto("vermelho", "BMW");

        veiculo.lugares();
        carro.lugares();
        caminhao.lugares();
        moto.lugares();
    }
}
