public class strBuilder {
    public static void main(String[] args) {
        // Criando um StringBuilder
        StringBuilder sb = new StringBuilder("Hello");
        System.out.println("String inicial: " + sb);

        // length() - Obtém o tamanho
        System.out.println("Tamanho de sb: " + sb.length());

        // append() - Concatena
        sb.append(" World");
        System.out.println("Após append: " + sb);

        // insert() - Insere uma string em uma posição específica
        sb.insert(5, ",");
        System.out.println("Após insert: " + sb);

        // delete() - Remove parte da string
        sb.delete(5, 6);
        System.out.println("Após delete: " + sb);

        // replace() - Substitui parte da string
        sb.replace(6, 11, "Java");
        System.out.println("Após replace: " + sb);

        // reverse() - Inverte
        sb.reverse();
        System.out.println("Após reverse: " + sb);
    }
}
