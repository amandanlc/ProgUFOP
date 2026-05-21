public class Aluno extends Pessoa{
    private int somaInt = 0;
    private Double somaDouble = 0.0;

    public void p(){
        System.out.println("Sou um aluno!");
    }

    public int calculoNotas(int notas[]){
        for (int i = 0; i < notas.length; i++) {
            somaInt += notas[i];
        }

        return somaInt / notas.length;
    }

    public Double calculoNotas(Double notas[]){
        for (int i = 0; i < notas.length; i++) {
            somaDouble += notas[i];
        }

        return somaDouble / notas.length;
    }
}