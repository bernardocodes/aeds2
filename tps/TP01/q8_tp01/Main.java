public  class Main{
    public static int somaRecurssiva(int soma,int divisor){//separa e soma os dígitos
        if(divisor>0){
            int resto;
            resto = divisor%10;//pega o dígito da vez, separado
            soma+=resto;
            return somaRecurssiva(soma,(divisor/10));
        }else{
            return soma;
        }
    }
    public static int converteStr(String str){//String é um número?
        try {
            int n = Integer.parseInt(str);
            return n;
        } catch (NumberFormatException e) {
            return 0;
        }
    }
    public static void main(String[] args){
        String colecaoNum;
        
        colecaoNum = MyIO.readLine();

        while(colecaoNum.compareTo("FIM")!=0){//ler múltiplas entradas
            int n =converteStr(colecaoNum);
            int soma = somaRecurssiva(0,n);
            //MyIO.println(soma);
            System.out.println(soma);
            colecaoNum = MyIO.readLine();
        }
    }
}
