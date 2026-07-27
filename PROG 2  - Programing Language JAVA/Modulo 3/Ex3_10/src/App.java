public class App {
    public static void main(String[] args) throws Exception {
        FormatadorNumerico decimal = FormatadorNumericoFactory.format(1);
        System.out.println(decimal.formatar(100.0));
        FormatadorNumerico porcentagem = FormatadorNumericoFactory.format(2);
        System.out.println(porcentagem.formatar(0.1));
    }
}
