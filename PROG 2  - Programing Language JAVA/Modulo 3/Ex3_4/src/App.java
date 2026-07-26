import java.util.Map;
import java.util.HashMap;

public class App {
    public static void main(String[] args) throws Exception {
        CacheResultadosMatematicos cacheResultadosMatematicos = CacheResultadosMatematicos.getInstancia();

        long f1 = cacheResultadosMatematicos.calculaFatorial(1);
        System.out.println(f1);
        long f1_2 = cacheResultadosMatematicos.calculaFatorial(1);
        System.out.println(f1_2);
        
        long f3 = cacheResultadosMatematicos.calculaFatorial(3);
        System.out.println(f3);
        long f6 = cacheResultadosMatematicos.calculaFatorial(6);
        System.out.println(f6);
    }
}
