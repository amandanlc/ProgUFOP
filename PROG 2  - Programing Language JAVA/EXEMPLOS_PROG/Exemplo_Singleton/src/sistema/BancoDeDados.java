package sistema;

import java.util.ArrayList;
import java.util.List;

public class BancoDeDados {
    private List<Double> dados;
    private static BancoDeDados instancia;
    
    private BancoDeDados(){
    	dados = new ArrayList<>();
    }
    
    public static BancoDeDados getBancoDeDados() {
    	if(instancia == null)
    		instancia = new BancoDeDados();
    	
    	return instancia;
    }
}
