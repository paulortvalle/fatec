#define total 40
#include <stdio.h>
#include <stdlib.h>

void cadastrar();
void listar();

struct Aluno{
    int ra;
    char nome[51];
    char email[61];
} vet_alunos[total];

int countAluno = 0; // contador de aluno

void main()
{
    // construindo o menu
    int opcao = 1;
    while(opcao!=9){
        printf("1.. Cadastrar Aluno\n");
        printf("2.. Buscar Aluno\n");
        printf("3.. Listar Todos\n");
        printf("4.. Alterar Aluno\n");
        printf("5.. Excluir Aluno\n");
        printf("9.. Sair\n\n");

        printf("Digite a sua opcao: ");
        scanf("%d",&opcao);

        switch(opcao){
            case 1:
                cadastrar();
            break;

            case 2:
            break;

            case 3:
                listar();
            break;

            case 4:
            break;

            case 5:
            break;

            case 9:
            break;

            default:
                printf("tchau");
            break;
        }
    }
}

void cadastrar(){
    system("cls");
    fflush(stdin);

    printf("Digite o RA do Aluno: ");
    scanf("%d", &vet_alunos[countAluno].ra);
    fflush(stdin);

    printf("Digite o Nome do Aluno: ");
    gets(vet_alunos[countAluno].nome);
    fflush(stdin);

    printf("Digite o email do Aluno: ");
    gets(vet_alunos[countAluno].email);

    printf("Dados cadastrados com sucesso!\n\n");
    countAluno++;
}

void listar(){
    int i;
    for (i=0; i<countAluno; i++){
        printf("RA    : %d\n", vet_alunos[i].ra );
        printf("NOME  : %s\n", vet_alunos[i].nome );
        printf("EMAIL : %s\n", vet_alunos[i].email);
        printf("==================================================================\n\n");
    }
    system("pause");
}

