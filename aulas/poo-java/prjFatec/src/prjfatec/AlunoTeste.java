package prjfatec;

public class AlunoTeste {

    public static void main(String[] args) {
        
        // Definir um aluno
        Aluno aluno1 = new Aluno();
        aluno1.codigo = 1;
        aluno1.nome = "José da Silva";
        aluno1.idade = 35;
        aluno1.email = "ze@gmail.com";
                
        //Invocando os métodos
        aluno1.matricular();
        aluno1.trancarMatricula();
        aluno1.listarDados();
        
    }
    
}
