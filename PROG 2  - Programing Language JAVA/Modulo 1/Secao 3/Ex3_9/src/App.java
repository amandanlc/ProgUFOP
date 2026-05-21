public class App {
    public static void main(String[] args) throws Exception {
        ContaBancaria contaBancaria = new ContaBancaria();

        System.out.println("Nome Titular: " + contaBancaria.getNomeTitular() + "\nNúmero Conta: " + contaBancaria.getNumConta() + "\nSaldo: " + contaBancaria.getSaldo());

        contaBancaria.depositar(1000);
        System.out.println( "\nSaldo: " + contaBancaria.getSaldo());
        
        contaBancaria.sacar(100);
        System.out.println( "\nSaldo: " + contaBancaria.getSaldo());
        
        contaBancaria.sacar(1000);
        
        contaBancaria.setNomeTitular("Julia");
        contaBancaria.setNumConta(3);

        System.out.println("Nome Titular: " + contaBancaria.getNomeTitular() + "\nNúmero Conta: " + contaBancaria.getNumConta() + "\nSaldo: " + contaBancaria.getSaldo());
    }
}
