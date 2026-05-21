public class App {
    public static void main(String[] args) throws Exception {
        Produto livro = new Livro();
        Produto eletronico = new Eletronico();

        livro.setPrecoProd(100.0);
        System.out.println("Valor desconto: " + livro.calculaDesconto());
        System.out.println("Valor desconto VIP: " + livro.calculaDesconto(true));
        
        eletronico.setPrecoProd(1000.0);
        System.out.println("Valor desconto: " + eletronico.calculaDesconto());
        System.out.println("Valor desconto VIP: " + eletronico.calculaDesconto(true));
    }
}
