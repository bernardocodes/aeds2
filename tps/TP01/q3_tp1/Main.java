public class Main {

    public static String criptografar(String str, int chave) {

        String strCodificada;
        int tam = str.length();
        int i;

        StringBuilder aux = new StringBuilder(str);//para acessar com comportamento de vetor de char
        StringBuilder encrip = new StringBuilder();

        for (i = 0; i < tam; i++) {//construir a nova str
           char c =  aux.charAt(i);
           char novoC = (char)(c + chave);
           encrip.append(novoC);
        }
        
        strCodificada = encrip.toString();//converte novamente para str
        return strCodificada;
        
    }

    public static void main(String[] args) {

        int chave = 3;
        String str;

        do{
            str = MyIO.readLine();//leitura
            if(str.compareTo("FIM")!=0){//evita printar depois de FIM
                MyIO.println(criptografar(str, chave));
            }
        }while(str.compareTo("FIM")!=0);

    }
}