public class Main{
	public static void main(String[] args){
		
		String s1;
		s1 = MyIO.readLine();//primeira leitura
		
		while(s1.compareTo("FIM")!=0){
			StringBuilder sb = new StringBuilder(s1);
			sb.reverse();
			String s2 = sb.toString();
			MyIO.println(s2);
			s1 = MyIO.readLine();//nova leitura
		}
	}
}
