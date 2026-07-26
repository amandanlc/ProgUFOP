public class App {
    public static void main(String[] args) throws Exception {
        BancoDeDadosCentral moduloVendas = BancoDeDadosCentral.getInstancia();
        BancoDeDadosCentral moduloAuditoria = BancoDeDadosCentral.getInstancia();

        moduloVendas.recuperarSaldo("12312312312");
        
        moduloVendas.salvarSaldo("70697733661", 300000.0);    
        System.out.println(moduloAuditoria.recuperarSaldo("70697733661"));
        
        moduloVendas.recuperarSaldo("54545454545");

        moduloAuditoria.salvarSaldo("12312312312", 450000.0);
        System.out.println(moduloVendas.recuperarSaldo("12312312312"));
        
    }
}
