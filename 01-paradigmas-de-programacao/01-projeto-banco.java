import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Banco {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int saldo = 0;
        boolean executando = true;
        while (executando) {
            System.out.println("Digite a operação desejada:");
            System.out.println("1 - Depósito");
            System.out.println("2 - Saque");
            System.out.println("3 - Saldo");
            System.out.println("4 - Sair");
            int opcao = scanner.nextInt();
            switch (opcao) {
                case 1:
                    System.out.println("Digite o valor do depósito:");
                    int valorDeposito = scanner.nextInt();
                    saldo += valorDeposito;
                    System.out.println("Depósito realizado com sucesso!");
                    break;
                case 2:
                    System.out.println("Digite o valor do saque:");
                    int valorSaque = scanner.nextInt();
                    if (valorSaque <= saldo) {
                        saldo -= valorSaque;
                        System.out.println("Saque realizado com sucesso!");
                    } else {
                        System.out.println("Saldo insuficiente!");
                    }
                    break;
                case 3:
                    System.out.println("Saldo atual: " + saldo);
                    break;
                case 4:
                    executando = false;
                    System.out.println("Obrigado por utilizar nosso banco!");
                    break;
                default:
                    System.out.println("Opção inválida!");
                    break;
            }
        }
    }
    
    public static aspect LoggingAspect {
        private FileWriter fileWriter;
        
        pointcut operacaoRealizada() : execution(* Banco.*(..));
        
        after() returning : operacaoRealizada() {
            try {
                if (fileWriter == null) {
                    fileWriter = new FileWriter("log.txt");
                }
                fileWriter.write(new java.util.Date() + " - Operação realizada\n");
                fileWriter.flush();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        
        after() : execution(public static void main(String[])) {
            try {
                if (fileWriter != null) {
                    fileWriter.close();
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}
