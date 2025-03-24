public class strJ {
    public static void main(String[] args) {
        // .length() - Obtém o tamanho da string
        String str1 = "Hello";
        System.out.println("Tamanho de str1: " + str1.length());

        // .compareTo() - Compara duas strings
        String str2 = "World";
        if (str1.compareTo(str2) == 0) {
            System.out.println("As strings são iguais.");
        } else {
            System.out.println("As strings são diferentes.");
        }

//-------------------------------

        // Copiando uma string (em Java, basta atribuir)
        String str3 = str1; 
        System.out.println("str3 após a cópia: " + str3);

        // concat() - Concatena duas strings
        str3 = str3.concat(str2);
        System.out.println("str3 após concatenação: " + str3);
    }
}
