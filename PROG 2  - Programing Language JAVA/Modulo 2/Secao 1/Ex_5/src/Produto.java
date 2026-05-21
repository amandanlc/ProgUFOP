public class Produto {
    private Double preco;

    public void setPrecoProd(Double preco){
        this.preco = preco;
    }

    public Double calculaDesconto(){
        return this.preco * 0.15;
    }

    public Double calculaDesconto(Boolean clienteVIP){
        if (clienteVIP == true) {
            return this.preco * 0.35;            
        }else{
            return calculaDesconto();
        }
    }

}