public class App {
    public static void main(String[] args) throws Exception {
        Pessoa aluno = new Aluno();
        Pessoa professor = new Professor();

        Aluno aluno1 = new Aluno();
        int notas[] = {4, 9, 10, 10, 5, 8};

        aluno.p();
        professor.p();

        System.out.println("Média das notas: " + aluno1.calculoNotas(notas));
    }
}
