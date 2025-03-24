

public class Main {

    public static class minhaStr{//para passar str por "referência"
        String palavra;
        minhaStr(String palavra){
            this.palavra = palavra;
        }
        void setMinha(String palavra){
            this.palavra = palavra;
        }
    }

    public static class strConcatenada {// para passar str por "referência"
        String str;

        strConcatenada(String str) {
            this.str = str;
        }
    }

    public static void saoAnagramas(String s1, String s2) {

        StringBuilder sb1 = new StringBuilder(s1);// para usar a função reverse
        sb1.reverse();

        String s1Invertida = sb1.toString();

        if (s2.compareTo(s1Invertida) != 0) {// são inversas?
            MyIO.println("NAO");
        } else {
            MyIO.println("SIM");
        }

    }
 
    public static void leituraConcatenada(String palavra, minhaStr palavra1, minhaStr Palavra2) {
        int tam;
        int cont=0;
        int indiceEspaco=0;

        tam = palavra.length();//verifica tam da frase
    
        StringBuilder aux = new StringBuilder(palavra);//para manipular igual vet char
        StringBuilder sb1 = new StringBuilder(palavra1.palavra);
        StringBuilder sb2 = new StringBuilder(Palavra2.palavra);
       
        for(int i=0;i<tam;i++){//encontrar a divisão das palavras (espaço)
            if(aux.charAt(i)==' '){
                indiceEspaco = i;
            }
        }

        for(int i=cont;i<indiceEspaco-1;i++){//guardar a s1 / -1 pra não pegar o espaço
            sb1.setCharAt(i, aux.charAt(i));
            cont++;
        }

        cont+=2;//para setar para a primeira letra da segunda palavra

        for(int i=cont;i<=tam;i++){//guardar a s2 / <= para manipular até a última posição
            sb2.setCharAt(i, aux.charAt(i));
        }

        palavra1.setMinha(sb1.toString());
        Palavra2.setMinha(sb2.toString());
        
        return;
    }

    public static void main(String[] args) {

        //String s1;
        //String s2;

        minhaStr palavra1 = new minhaStr("abcdefghijklmnopqrstuvwxyz");//as duas palavras separadas
        minhaStr palavra2 = new minhaStr("abcdefghijklmnopqrstuvwxyz");

        String palavra = MyIO.readLine();//duas palavras concatenadas com espaço
        strConcatenada frase = new strConcatenada(palavra);

        leituraConcatenada(frase.str,palavra1,palavra2);
        

        MyIO.println(frase.str);
        MyIO.println(palavra1.palavra);
        MyIO.println(palavra2.palavra);

        /*
         * s1 = MyIO.readLine();// primeira leitura para entrar no while
         * s2 = MyIO.readLine();
         * 
         * s1 = s1.toLowerCase();// todo mundo para minúsculo
         * s2 = s2.toLowerCase();
         * 
         * //MyIO.println(s1);
         * //MyIO.println(s2);
         * 
         * saoAnagramas(s1, s2);
         * 
         * while (s1.compareTo("FIM") != 0) {
         * s1 = MyIO.readLine();
         * if (s1.compareTo("FIM") != 0) {// se s1 == FIM interrompe o ciclo sem
         * impressões desnecessárias
         * 
         * s2 = MyIO.readLine();
         * 
         * s1 = s1.toLowerCase();// todo mundo para minúsculo
         * s2 = s2.toLowerCase();
         * 
         * saoAnagramas(s1, s2);
         * }
         * }
         */
    }
}

/*
 * problemas:
 * 1) trocar a saida para portugues; -- ok
 * 2) quando tem Amor Roma (maiúsculas no meio) ele erra; -- ok
 * 3) aparentemente a entrada vai ser uma única str... ent tem que contornar
 * isso; --> use apend()
 */
