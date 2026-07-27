public class LojaLocal extends LojaVirtual {
    @Override
    public CalculadorFrete criarCalculadorFrete(){
        return new FreteFixo();
    }
}
