public class GerenciadorContadores {
    private static GerenciadorContadores instancia;
    private int totalOperacoes;

    private GerenciadorContadores(){
        totalOperacoes = 0;

    }

    public static GerenciadorContadores getInstancia(){
        if (instancia == null) {
            instancia = new GerenciadorContadores();
        }
        return instancia;        
    }

    public int incrementar(){
        totalOperacoes++; // isso aqui
        return totalOperacoes; // e isso aqui é a mesma coisa de ++totalOperaçoes
    }
}