public class Funcionario {
    public String nome;
    public Double salarioBase;
    protected Double bonus;
    
    public Funcionario(){
        this.nome = "";
        this.salarioBase = 0.0;
        this.bonus = 0.0;
    }
    
    public Funcionario(String nome, Double salarioDouble, Double bonus){
        this.nome = nome;
        this.salarioBase = salarioDouble;
        this.bonus = bonus;
    }
     
}
