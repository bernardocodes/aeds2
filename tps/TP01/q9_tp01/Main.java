public class Main {
    public static void saoAnagramas(String s1, String s2) {

        StringBuilder sb1 = new StringBuilder(s1);// para usar a função reverse
        sb1.reverse();

        String s1Invertida = sb1.toString();

        if (s2.compareTo(s1Invertida) != 0) {// são inversas?
            MyIO.println("NO");
        } else {
            MyIO.println("YES");
        }

    }

    public static void main(String[] args) {

        String s1;
        String s2;

        s1 = MyIO.readLine();// primeira leitura para entrar no while
        s2 = MyIO.readLine();

        s1.toLowerCase();// todo mundo para minúsculo
        s2.toLowerCase();

        saoAnagramas(s1, s2);

        while (s1.compareTo("FIM") != 0) {
            s1 = MyIO.readLine();
            if (s1.compareTo("FIM") != 0) {// se s1 == FIM interrompe o ciclo sem impressões desnecessárias

                s2 = MyIO.readLine();

                s1.toLowerCase();// todo mundo para minúsculo
                s2.toLowerCase();

                saoAnagramas(s1, s2);
            }
        }
    }
}

/*
problemas:
1) trocar a saida para portugues;
2) quando tem Amor Roma (maiúsculas no meio) ele erra;
3) aparentemente a entrada vai ser uma única str... ent tem que contornar isso;
*/
