public  class Main{
    public static int somaRecurssiva(int soma,int resto,int quociente,int divisor){
        if(quociente>0){
            quociente = divisor/10;//separar os dígitos e somar um por um
            resto = divisor%10;
            divisor = quociente;
            soma+=resto;
            return somaRecurssiva(soma,resto,quociente,divisor);
        }else{
            return soma;
        }
    }
    public static int converteStr(String str){
        try {
            int n = Integer.parseInt(str);
            return n;
        } catch (NumberFormatException e) {
            return 0;
        }
    }
    public static void main(String[] args){
        String colecaoNum;
        int soma = 0;
        colecaoNum = MyIO.readLine();

        while(colecaoNum.compareTo("FIM")!=0){
            int n =converteStr(colecaoNum);
            soma = somaRecurssiva(0,0,1,n);
            MyIO.println(soma);
            colecaoNum = MyIO.readLine();
        }
    }
}
