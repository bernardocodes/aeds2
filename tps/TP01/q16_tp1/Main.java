
public class Main{

	public static void repete(String s1,String s2){
		if(s1.compareTo("FIM")!=0){//para quando encontrar "FIM"
			StringBuilder sb1 = new StringBuilder(s1);

			sb1.reverse();//inverte

			s2 = sb1.toString();	

			if(s1.compareTo(s2)==0){//pali?
				MyIO.println("SIM");
			}else{
				MyIO.println("NAO");
			}
			s1 = MyIO.readLine();//nova leitura
			
			repete(s1,s2);

		}else{
			return;	
		}
	}

	public static void main(String[] args){
		String s1;
		String s2;

		s1 = MyIO.readLine();//primeira leitura
		
		if(s1.compareTo("FIM")!=0){

			StringBuilder sb1 = new StringBuilder(s1);

			sb1.reverse();//inverter

			s2 = sb1.toString();	

			if(s1.compareTo(s2)==0){//pali?
				MyIO.println("SIM");
			}else{
				MyIO.println("NAO");
			}
			s1 = MyIO.readLine();//segunda leitura
			
			repete(s1,s2);
		}	
	}
}
