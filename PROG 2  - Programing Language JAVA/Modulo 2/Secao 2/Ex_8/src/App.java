public class App {
    public static void main(String[] args) throws Exception {
        FuncionarioCLT funcionarioCLT = new FuncionarioCLT("Camilla", "MG2020202", 5000.0, 100);
        PrestadorServico prestadorServico = new PrestadorServico( 20, 20.0, 8, "Amanda", "MG909090");
        PrestadorServico prestadorServico2 = new PrestadorServico();
        prestadorServico2.nome = "João";
        prestadorServico2.valorHora = 25.0;
        prestadorServico2.horasTrabalhadas = 8;

        System.out.println(funcionarioCLT.nome + " ganha R$" + funcionarioCLT.calcularRendimentoLiquido() + "por mês");
        System.out.println(prestadorServico.nome + " ganha R$" + prestadorServico.calcularRendimentoLiquido() + " por dia");
        System.out.println(prestadorServico2.nome + " ganha R$" + prestadorServico2.calcularRendimentoLiquido() + " por dia");
    }
}
