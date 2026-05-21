public class ContaBancaria {
    private int numeroConta;
    private Double saldo;
    private String nomeTilular;

    public ContaBancaria(){
        this.numeroConta = 1;
        this.saldo = 0.0;
        this.nomeTilular = "Desconhecido";
    }

    public void depositar(double valor){
        this.saldo = this.saldo + valor;
    }

    public void sacar(double valor){
        if (valor <= this.saldo) {
            this.saldo = this.saldo - valor;
        }else{
            System.out.println("Saldo insuficiente");
        }
    }
    
    public Double getSaldo(){
        return this.saldo;
    }

    public int getNumConta(){
        return this.numeroConta;
    }

    public void setNumConta(int numC){
        this.numeroConta = numC;
    }
    
    public String getNomeTitular(){
        return this.nomeTilular;
    }

    public void setNomeTitular(String nomeT){
        this.nomeTilular = nomeT;
    }
}
