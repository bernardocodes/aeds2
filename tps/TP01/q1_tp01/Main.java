
public class Main {
	public static void main(String[] args){

		String s1;
		s1 = MyIO.readLine();//primeira leitura
			
		if(s1.compareTo("FIM")!=0){
			
			do{
				StringBuilder sb = new StringBuilder(s1);
				sb.reverse();//inverte

				String s2 = sb.toString();

				if(s1.compareTo(s2)==0){//verifica pali
					MyIO.println("SIM");
				}else{
					MyIO.println("NAO");
				}	

				s1 = MyIO.readLine();//nova leitura

			}while(s1.compareTo("FIM")!=0);	
		}
	}
}
