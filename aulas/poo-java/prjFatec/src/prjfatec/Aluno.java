package prjfatec;

public class Aluno {
    
    // Definir os atributos
    public int codigo;
    public String nome;
    public int idade;
    public String email;
    
    // Definir os métodos
    public void matricular(){
        System.out.println("Matriculando " + nome + " agora...");
        System.out.println("Matricula Finalizada!");
        System.out.println("----------------------------------------------");
    }
    
    public void trancarMatricula(){
        System.out.println("Matricula Cancelada!");
        System.out.println("Aluno " + nome + " desistiu do curso...");
        System.out.println("----------------------------------------------");
    }
    
    public void listarDados(){
        System.out.println("Dados do aluno: " + codigo);
        System.out.println("Nome do aluno:  " + nome);
        System.out.println("Idade do aluno: " + idade);
        System.out.println("Email do aluno: " + email);
        System.out.println("----------------------------------------------");
    }
    
}