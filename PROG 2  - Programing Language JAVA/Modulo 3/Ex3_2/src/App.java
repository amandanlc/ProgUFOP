public class App {
    public static void main(String[] args) throws Exception {
        int cont1 = GerenciadorContadores.getInstancia().incrementar();
        int cont2 = GerenciadorContadores.getInstancia().incrementar();
        int cont3 = GerenciadorContadores.getInstancia().incrementar();
        int cont4 = GerenciadorContadores.getInstancia().incrementar();

        System.out.println(cont1);
    }
}
