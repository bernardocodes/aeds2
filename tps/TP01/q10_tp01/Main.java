public class Main {

    public static int contaPalavras(StringBuilder aux, int tam) {//palavras = qtdEspaço + 1
        int cont = 0;
        for (int i = 0; i < tam; i++) {
            if (aux.charAt(i) == ' ') {// espaço?
                cont++;
            }
        }

        return cont + 1;
    }

    public static void main(String[] args) {

        int qtdPalavras = -1;
        String frase;
        
        do {
            frase = MyIO.readLine();

            int tam = frase.length();// para setar o for

            StringBuilder aux = new StringBuilder(frase);// para ser possível acessar posições específicas da frase

            qtdPalavras = contaPalavras(aux, tam);

            if(frase.compareTo("FIM") != 0){//para não printar depois de FIM
                MyIO.println(qtdPalavras);
            }
            
        } while (frase.compareTo("FIM") != 0);
    }
}


