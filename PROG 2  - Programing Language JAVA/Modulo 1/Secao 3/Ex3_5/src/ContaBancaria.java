public class ContaBancaria {
    Double totalConta;

    public ContaBancaria(Double totalC){
        this.totalConta = totalC;
    }
    public void deposito(Double dinheiro){
        totalConta = totalConta + dinheiro;
    }
    public void saque(Double dinheiro){
        if (totalConta >= dinheiro) {
            totalConta = totalConta - dinheiro;
        }else{
            System.err.println("Não foi possível realizar a operação");
        }
    }
    public Double consultaSaldo(){
        return totalConta;
    }
}