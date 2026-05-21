public class App {
    public static void main(String[] args) throws Exception {
        ContaBancaria contaBancaria = new ContaBancaria(1000.0);

        System.out.println("Total Conta Bancária: " + contaBancaria.consultaSaldo());
        contaBancaria.deposito(100.0);
        System.out.println("Total Conta Bancária: " + contaBancaria.consultaSaldo());
        contaBancaria.saque(1200.0);
        System.out.println("Total Conta Bancária: " + contaBancaria.consultaSaldo());
    }
}
