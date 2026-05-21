public class Gerente extends Funcionario{

    public Gerente(){
        super("Desconhecido", 0.0, 0.0);
    }

    public Gerente(String nome, Double salBase, Double bonus){
        super(nome, salBase, bonus);
    }

    public Double salTotal(){
        return bonus + salarioBase;
    }

    public void exibirResultados(){
        System.out.println("\nNome: " + nome + "\nSalário base: " + salarioBase + "\nBônus: " + bonus + "\n\nSalário Total: " + salTotal());
    }
}
