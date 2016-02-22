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



int main(){
    inicializar();
    cadastrar();
    return 0;
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
    printf("Aluno não encontrado!");
    system("pause");
    system("cls");
}
