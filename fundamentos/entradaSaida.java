import java.util.Scanner;

public class entradaSaida {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite um número inteiro: ");
        int numeroInteiro = scanner.nextInt();

        System.out.print("Digite um número decimal (double): ");
        double numeroDouble = scanner.nextDouble();

        System.out.print("Digite um único caractere: ");
        char caractere = scanner.next().charAt(0);

        System.out.println("\n--- Valores lidos ---");
        System.out.print("Inteiro: " + numeroInteiro + "\n");
        System.out.print("Double: " + numeroDouble + "\n");
        System.out.print("Caractere: " + caractere + "\n");

        scanner.close();
    }
}
