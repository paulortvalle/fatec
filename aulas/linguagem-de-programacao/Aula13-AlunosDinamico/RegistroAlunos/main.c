#include <stdio.h>
#include <stdlib.h>

// define para o máximo de elementos
#define MAX 100

// estrutura para aluno
struct Aluno {
    int ra;
    char nome[60];
    char email[60];
    float nota;
};

//ponteiro para estrutura aluno
typedef struct Aluno *prt_aluno;

// cria ponteiros para a estrutura em um vetor
prt_aluno alunos[MAX];

// protótipos das funções
void inicializar();
void cadastrar();
void procurar (int ra);
void alterar (int ra);
void listar();

// variavel global para armazenar a posicao
int pos = 0;



void main(){

    int opc = 0;
    int raproc = 0;
    inicializar();

    while(opc != 7){
        printf("=== CADASTRO DE ALUNOS ===\n\n");
        printf(" 1) Cadastrar Alunos \n");
        printf(" 2) Procurar Alunos \n");
        printf(" 3) Alterar Aluno \n");
        printf(" 4) Listar todos os Alunos \n");
        printf(" 7) Sair \n\n\n\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opc);

        switch (opc){
            case 1:
                cadastrar();
            break;
            case 2:
                printf("Procurar por RA: ");
                scanf("%d", &raproc);
                procurar(raproc);
            break;
            case 3:
                printf("Alterar o RA: ");
                scanf("%d", &raproc);
                alterar(raproc);
            break;
            case 4:
                listar();
            break;
            case 7:
                printf("Ate mais...\n\n\n");
                system("pause");
            break;
            default:
                printf("\n\nOpcao Inválida...\n\n");
                system("pause");
                system("cls");
            break;
        }
    }
}


void inicializar(){
    // setar para null todas as posições do vetor
    int i;
    for (i=0; i<MAX; i++){
        alunos[i]=NULL;
    }
}

void cadastrar(){
    // aloca o aluno e seta o endereço do aluno
    printf("posicao atual: %d\n", pos);
    if (alunos[pos]==NULL){
        alunos[pos]=(struct Aluno *)malloc(sizeof(struct Aluno));
    }

    free(alunos[pos]); // apenas para limpar dados de memoria

    fflush(stdin);
    printf("Digite o Ra: ");
    scanf("%d", &alunos[pos]->ra);

    fflush(stdin);
    printf("Digite o Nome: ");
    gets(alunos[pos]->nome);

    fflush(stdin);
    printf("Digite o Email: ");
    gets(alunos[pos]->email);

    fflush(stdin);
    printf("Digite a Nota: ");
    scanf("%f", &alunos[pos]->nota);

    printf("Dados incluidos com sucesso\n");
    system("pause");
    system("cls");
    pos++;
}

void procurar(int ra){
    // busca os ponteiros até encontrar o ra
    int i;
    for (i=0; i<pos; i++){
        if (ra == alunos[i]->ra){
            printf("Aluno Encontrado: \n");
            printf("RA:    %d\n", alunos[i]->ra);
            printf("Nome:  %s\n", alunos[i]->nome);
            printf("Email: %s\n", alunos[i]->email);
            printf("Nota:  %2.2f\n", alunos[i]->nota);
            system("pause");
            system("cls");
            return;
        }
    }
    printf("Aluno nao encontrado!\n");
    system("pause");
    system("cls");
}

void alterar(int ra){
    // busca os ponteiros até encontrar o ra e prepara alteração
    int i;
    for (i=0; i<pos; i++){
        if (ra == alunos[i]->ra){
            printf("Aluno Encontrado para alteração: \n");

            printf("RA:    %d\n", alunos[i]->ra);
            fflush(stdin);
            printf("Digite o novo Ra: ");
            scanf("%d", &alunos[i]->ra);

            printf("Nome:  %s\n", alunos[i]->nome);
            fflush(stdin);
            printf("Digite o novo Nome: ");
            gets(alunos[i]->nome);

            printf("Email: %s\n", alunos[i]->email);
            fflush(stdin);
            printf("Digite o novo Email: ");
            gets(alunos[i]->email);

            printf("Nota:  %2.2f\n", alunos[i]->nota);
            fflush(stdin);
            printf("Digite a Nota: ");
            scanf("%f", &alunos[i]->nota);

            printf("Dados alterados com sucesso\n");
            system("pause");
            system("cls");
            return;
        }
    }
    printf("Aluno nao encontrado!\n");
    system("pause");
    system("cls");
}

void listar(){
    // lista os ponteiros até encontrar o ra
    int i;
    for (i=0; i<pos; i++){
        printf("============================================================: \n");
        printf("RA:    %d\n", alunos[i]->ra);
        printf("Nome:  %s\n", alunos[i]->nome);
        printf("Email: %s\n", alunos[i]->email);
        printf("Nota:  %2.2f\n", alunos[i]->nota);
    }
    system("pause");
    system("cls");
}
