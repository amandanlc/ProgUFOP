public class App {
    public static void main(String[] args) throws Exception {
        ModuloEmprestimo moduloEmprestimo = new ModuloEmprestimo();
        ModuloPoupanca moduloPoupanca = new ModuloPoupanca();

        System.out.println("Emprestimo: " + moduloEmprestimo.getJurosEmprestimo()); 
        System.out.println("Poupanca: " + moduloPoupanca.getJurosPoupanca());  
    } 
}
