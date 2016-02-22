#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// define para o máximo de produtos ou itens da comanda
#define MAX 100

// estrutura para produtos
struct Produto {
    int codigo;
    char nome[30];
    float valor_unitario;
};

// vetor de comandas
int comanda[MAX];
int posComanda = 0;

// estrutura para itens da comanda
struct Itens {
    int codComanda;
    int codProduto;
    int quantidade;
    float valor_calc;
};

// ponteiro para estrutura produto
typedef struct Produto *prt_produto;
prt_produto pProduto[MAX];
int posProduto = 0;

// ponteiro para estrutura de itens
typedef struct Itens *prt_itens;
prt_itens pItens[MAX];
int posItens;

// protótipos das funções
void MenuProdutos();
void MenuComandas();

void iniProduto();
void iniItens();

void cadProduto();
void altProduto(int indice);
void excProduto();
int  proProduto(int cod);
void exiProduto(int indice);
void lisProduto();

void abreComanda();
void registraItem();
void alteraItem();
void extornarItem();
void exiComanda(int codcomanda);
void lisComandas();
int  proComanda(int cod);
int  proItem(int codComanda, int codProduto);
void fecharComanda();

void main(){

    int opcT1 = 0;
    iniProduto();
    iniItens();

    while(opcT1 != 9){
        printf("\n\n=== SISTEMA MINIMERCADO FATEC ===\n\n");
        printf("Selecione uma funcao do sistema:\n");
        printf(" 1) Gerenciar Produto \n");
        printf(" 2) Gerenciar Comandas \n");
        printf(" 9) Sair \n\n\n\n");

        fflush(stdin);
        printf("Digite sua opcao: ");
        scanf("%d", &opcT1);

        switch (opcT1){
            case 1:
                system("cls");
                MenuProdutos();
            break;

            case 2:
                system("cls");
                MenuComandas();
            break;

            case 9:
                printf("Ate mais...\n\n\n");
                system("pause");
            break;

            default:
                printf("\n\nOpcao Invalida...\n\n");
                system("pause");
                system("cls");
            break;
        }
    }
}

void MenuProdutos(){
    // função que controla as ações do usuário em produtos
    int opcT2 = 0;

    int codProc;
    int resProc;

    while(opcT2 != 9){
        printf("\n\n=== SISTEMA MINIMERCADO FATEC ===\n");
        printf("=== GERENCIAMENTO DE PRODUTOS ===\n\n");
        printf("Selecione uma funcao para o gerenciamento de produtos:\n");
        printf(" 1) Cadastrar Produtos \n");
        printf(" 2) Alterar Produtos \n");
        printf(" 3) Excluir Produtos \n");
        printf(" 4) Procurar Produtos \n");
        printf(" 5) Listar todos os Produtos \n");
        printf(" 9) Voltar \n\n\n\n");
        printf("Digite sua opcao: ");

        fflush(stdin);
        scanf("%d", &opcT2);

        switch (opcT2){
            case 1:
                cadProduto();
                system("cls");
            break;

            case 2:

                fflush(stdin);
                printf("Digite o codigo que deseja alterar: ");
                scanf("%d", &codProc);
                resProc = proProduto(codProc);
                printf("\n\n");

                if (resProc < 0) {
                    printf("Codigo de Produto nao encontrado!\n\n\n");
                    system("pause");
                } else {
                    exiProduto(resProc);
                    printf("\n\n");
                    altProduto(resProc);
                }

                system("cls");

            break;

            case 3:

                excProduto();
                system("cls");

            break;

            case 4:

                fflush(stdin);
                printf("Digite o codigo que deseja procurar: ");
                scanf("%d", &codProc);
                resProc = proProduto(codProc);
                printf("\n\n");

                if (resProc < 0) {
                    printf("Codigo de Produto nao encontrado!\n\n\n");
                    system("pause");
                } else {
                    exiProduto(resProc);
                    printf("\n\n");
                    system("pause");
                }

                system("cls");

            break;

            case 5:

                lisProduto();
                system("pause");
                system("cls");

            break;

            case 9:
                printf("Voltando ao Menu Principal...\n\n\n");
                system("cls");
            break;
            default:
                printf("\n\nOpcao Invalida...\n\n");
                system("pause");
                system("cls");
            break;
        }
    }

}

void MenuComandas(){
    // função que controla as ações do usuário em comandas
    int opcT2 = 0;

    int codCom;
    int resCom;

    while(opcT2 != 9){
        printf("\n\n=== SISTEMA MINIMERCADO FATEC ===\n");
        printf("=== GERENCIAMENTO DE COMANDAS ===\n\n");
        printf("Selecione uma funcao para o gerenciamento de comandas:\n");
        printf(" 1) Abrir Comanda \n");
        printf(" 2) Registrar Itens \n");
        printf(" 3) Alterar Registro de Itens \n");
        printf(" 4) Extornar Itens \n");
        printf(" 5) Ver Comanda \n");
        printf(" 6) Listar todas as Comandas \n");
        printf(" 7) Fechar Comanda \n");
        printf(" 9) Voltar \n\n\n\n");
        printf("Digite sua opcao: ");

        fflush(stdin);
        scanf("%d", &opcT2);

        switch (opcT2){
            case 1:
                abreComanda();
                system("cls");
            break;

            case 2:
                registraItem();
                system("cls");
            break;

            case 3:
                alteraItem();
                system("cls");
            break;

            case 4:
                extornarItem();
                system("cls");
            break;

            case 5:

                fflush(stdin);
                printf("Digite o codigo da comanda que deseja procurar: ");
                scanf("%d", &codCom);
                resCom = proComanda(codCom);
                printf("\n\n");

                if (resCom < 0) {
                    printf("Comanda nao encontrado!\n\n\n");
                    system("pause");
                } else {
                    exiComanda(codCom);
                    printf("\n\n");
                    system("pause");
                }

                system("cls");

            break;

            case 6:
                lisComandas();
                system("pause");
                system("cls");
            break;

            case 7:
                fecharComanda();
                system("cls");
            break;

            case 9:
                printf("Voltando ao Menu Principal...\n\n\n");
                system("cls");
            break;
            default:
                printf("\n\nOpcao Invalida...\n\n");
                system("pause");
                system("cls");
            break;
        }
    }

}


void iniProduto(){
    // setar para null todas as posições do vetor de produtos
    int i;
    for (i=0; i<MAX; i++){
        pProduto[i]=NULL;
    }
}

void iniItens(){
    // setar para null todas as posições do vetor de produtos
    int i;
    for (i=0; i<MAX; i++){
        pItens[i]=NULL;
    }
}

void cadProduto(){

    // aloca o produto e seta o seu endereço de ponteiro
    if (pProduto[posProduto]==NULL){
        pProduto[posProduto]=(struct Produto *)malloc(sizeof(struct Produto));
    }

    int resProd;

    do {
        fflush(stdin);
        printf("Digite o Codigo do Produto: ");
        scanf("%d", &pProduto[posProduto]->codigo);

        resProd = proProduto(pProduto[posProduto]->codigo);
    } while (resProd >= 0);

    fflush(stdin);
    printf("Digite o Nome: ");
    gets(pProduto[posProduto]->nome);

    fflush(stdin);
    printf("Digite o Valor Unitario do Produto: ");
    scanf("%f", &pProduto[posProduto]->valor_unitario);

    printf("\n\nDados incluidos com sucesso\n");
    exiProduto(posProduto);
    printf("\n\n");

    posProduto++;
    system("pause");

}

void altProduto(int indice){

    int resProd;

    do {
        fflush(stdin);
        printf("Digite o Novo Codigo do Produto: ");
        scanf("%d", &pProduto[indice]->codigo);

        resProd = proProduto(pProduto[indice]->codigo);
    } while (resProd >= 0 && resProd != indice);

    fflush(stdin);
    printf("Digite o Novo Nome: ");
    gets(pProduto[indice]->nome);

    fflush(stdin);
    printf("Digite o Novo Valor Unitario do Produto: ");
    scanf("%f", &pProduto[indice]->valor_unitario);

    printf("\n\nDados alterados com sucesso\n");
    exiProduto(indice);
    printf("\n\n");

    system("pause");
    system("cls");
}

void excProduto(){

    int codProc;
    int resProc;
    int confExc;

    int auxcod;

    fflush(stdin);
    printf("Digite o codigo que deseja excluir: ");
    scanf("%d", &codProc);
    resProc = proProduto(codProc);
    printf("\n\n");

    if (resProc < 0) {
        printf("Codigo de Produto nao encontrado!\n\n\n");
    } else {
        exiProduto(resProc);
        printf("\n\n");

        fflush(stdin);
        printf("Confirma e exclusao do produto?\n");
        printf("Esta operacao nao podera ser desfeita no sistema.\n");
        printf("(1) para sim ou (2) para nao: ");
        scanf("%d", &confExc);

        if (confExc == 1){

            pProduto[resProc]->codigo = pProduto[posProduto-1]->codigo;
            strcpy(pProduto[resProc]->nome, pProduto[posProduto-1]->nome);
            pProduto[resProc]->valor_unitario = pProduto[posProduto-1]->valor_unitario;

            posProduto--;

            printf("\n\nProduto excluido com sucesso!\n\n\n");
        } else {
            printf("\n\nOperacao Cancelada!\n\n\n");
        }

    }

    system("pause");
}

int proProduto(int cod){
    int i;
    for (i=0; i<posProduto; i++){
        if (cod == pProduto[i]->codigo){
            return i;
        }
    }
    return -1;
}

void exiProduto(int indice){
    printf("===========================================\n");
    printf("Codigo        :  %d\n", pProduto[indice]->codigo);
    printf("Nome          :  %s\n", pProduto[indice]->nome);
    printf("Valor Unitario:  %1.2f\n", pProduto[indice]->valor_unitario);
}

void lisProduto(){

    int i;

    for (i=0; i<posProduto; i++){
        exiProduto(i);
    }

}

void abreComanda(){

    int resCom;

    do {
        fflush(stdin);
        printf("Digite o Codigo para Abrir a Comanda: ");
        scanf("%d", &comanda[posComanda]);

        resCom = proComanda(comanda[posComanda]);
    } while (resCom >= 0);

    printf("\n\nComanda aberta com sucesso\n");
    printf("\n\n");

    posComanda++;
    system("pause");

}

void registraItem(){

    // aloca o item e seta o seu endereço de ponteiro
    if (pItens[posItens]==NULL){
        pItens[posItens]=(struct Itens *)malloc(sizeof(struct Itens));
    }

    int resComanda;
    do {
        fflush(stdin);
        printf("Digite o Codigo da Comanda: ");
        scanf("%d", &pItens[posItens]->codComanda);

        resComanda = proComanda(pItens[posItens]->codComanda);
    } while (resComanda < 0);

    int resProd;
    do {
        fflush(stdin);
        printf("Digite o Codigo do Produto: ");
        scanf("%d", &pItens[posItens]->codProduto);

        resProd = proProduto(pItens[posItens]->codProduto);
        if (resProd < 0){
            printf("\nCodigo de Produto Invalido!\n\n");
        }
    } while (resProd < 0);

    printf("\n");
    exiProduto(resProd);
    printf("\n");

    int resItem;
    resItem = proItem(pItens[posItens]->codComanda, pItens[posItens]->codProduto);

    int add;
    if (resItem >= 0) {
        printf("\n\nO Produto ja esta resgistrado na comanda!\n");
        fflush(stdin);
        printf("Digite a quantidade que deseja adicionar: ");
        scanf("%d", &add);

        pItens[resItem]->quantidade += add;

        int qtd = pItens[resItem]->quantidade;
        float vunit = pProduto[resProd]->valor_unitario;
        pItens[resItem]->valor_calc = (float)qtd * vunit;
        printf("\n\nProduto registrado com sucesso!\n\n\n");
        system("pause");
        return;
    } else {
        fflush(stdin);
        printf("Digite a quantidade do produto: ");
        scanf("%d", &pItens[posItens]->quantidade);
    }

    int qtd = pItens[posItens]->quantidade;
    float vunit = pProduto[resProd]->valor_unitario;
    pItens[posItens]->valor_calc = (float)qtd * vunit;

    printf("\n\nProduto registrado com sucesso!\n\n\n");

    posItens++;
    system("pause");

}

void alteraItem(){

    int resComanda;
    int codcomanda;
    do {
        fflush(stdin);
        printf("Digite o Codigo da Comanda: ");
        scanf("%d", &codcomanda);

        resComanda = proComanda(codcomanda);
    } while (resComanda < 0);

    exiComanda(codcomanda);

    int resProd;
    int codprod;
    do {
        fflush(stdin);
        printf("Digite o Codigo do Produto: ");
        scanf("%d", &codprod);

        resProd = proProduto(codprod);
        if (resProd < 0){
            printf("\nCodigo de Produto Invalido!\n\n");
        }
    } while (resProd < 0);

    printf("\n");
    exiProduto(resProd);
    printf("\n");

    int resItem;
    resItem = proItem(codcomanda, codprod);

    if (resItem >= 0) {
        fflush(stdin);
        printf("Digite a nova quantidade do produto: ");
        scanf("%d", &pItens[resItem]->quantidade);

        int qtd = pItens[resItem]->quantidade;
        float vunit = pProduto[resProd]->valor_unitario;
        pItens[resItem]->valor_calc = (float)qtd * vunit;
        printf("\n\nProduto alterado com sucesso!\n\n\n");
    } else {
        printf("\n\nO produto nao esta registrado na comanda.\n\n\n");
    }

    system("pause");

}

void extornarItem(){

    int resComanda;
    int codcomanda;
    do {
        fflush(stdin);
        printf("Digite o Codigo da Comanda: ");
        scanf("%d", &codcomanda);

        resComanda = proComanda(codcomanda);
    } while (resComanda < 0);

    exiComanda(codcomanda);

    int resProd;
    int codprod;
    do {
        fflush(stdin);
        printf("Digite o Codigo do Produto para extornar: ");
        scanf("%d", &codprod);

        resProd = proProduto(codprod);
        if (resProd < 0){
            printf("\nCodigo de Produto Invalido!\n\n");
        }
    } while (resProd < 0);

    printf("\n");

    int resItem;
    resItem = proItem(codcomanda, codprod);

    int confExc;
    if (resItem >= 0) {
        fflush(stdin);
        printf("Confirma e exclusao do item da comanda?\n");
        printf("Esta operacao nao podera ser desfeita no sistema.\n");
        printf("(1) para sim ou (2) para nao: ");
        scanf("%d", &confExc);

        if (confExc == 1){

            pItens[resItem]->codComanda = pItens[posItens-1]->codComanda;
            pItens[resItem]->codProduto = pItens[posItens-1]->codComanda;
            pItens[resItem]->quantidade = pItens[posItens-1]->quantidade;
            pItens[resItem]->valor_calc = pItens[posItens-1]->valor_calc;

            posItens--;

            printf("\n\nItem excluido com sucesso!\n\n\n");
        } else {
            printf("\n\nOperacao Cancelada!\n\n\n");
        }
    } else {
        printf("\n\nO produto nao esta registrado na comanda.\n\n\n");
    }

    system("pause");

}

void exiComanda(int codcomanda){

    printf("===============================================================\n");
    printf("   COMANDA N:  %d\n", codcomanda);
    printf("===============================================================\n");

    printf("COD | PRODUTO                        | QTD | UNITARI | TOTAL \n");

    int i;
    int indProduto;
    float TOT=0;
    for (i=0; i<posItens; i++){
        if (pItens[i]->codComanda == codcomanda){
            indProduto = proProduto(pItens[i]->codProduto);
            printf("%3d | ", pProduto[indProduto]->codigo);
            printf("%30s | ", pProduto[indProduto]->nome);
            printf("%3d | ", pItens[i]->quantidade);
            printf("%03.2f | ", pProduto[indProduto]->valor_unitario);
            printf("%03.2f\n", pItens[i]->valor_calc);
            TOT += pItens[i]->valor_calc;
        }
    }

    printf("----------------------------------------------------------------\n");
    printf("   TOTAL DA COMANDA %d: %3.2f\n\n", codcomanda, TOT);

}

void lisComandas(){

    int i;

    for (i=0; i<posComanda; i++){
        exiComanda(comanda[i]);
    }

}

int proComanda(int cod){
    int i;
    for (i=0; i<posComanda; i++){
        if (cod == comanda[i]){
            return i;
        }
    }
    return -1;
}

int proItem(int codComanda, int codProduto){
    int i;
    for (i=0; i<posItens; i++){
        if (codComanda == pItens[i]->codComanda && codProduto == pItens[i]->codProduto){
            return i;
        }
    }
    return -1;
}

void fecharComanda(){

    int resComanda;
    int codcomanda;
    do {
        fflush(stdin);
        printf("Digite o Codigo da Comanda: ");
        scanf("%d", &codcomanda);

        resComanda = proComanda(codcomanda);
    } while (resComanda < 0);

    exiComanda(codcomanda);

    int confExc;
    fflush(stdin);
    printf("Confirma o fechamento da comanda?\n");
    printf("Esta operacao nao podera ser desfeita no sistema.\n");
    printf("(1) para sim ou (2) para nao: ");
    scanf("%d", &confExc);

    if (confExc == 1){

        int i;
        for (i=0; i<posItens; i++){
            if (pItens[i]->codComanda == codcomanda){
                if (i<posItens-1){
                    pItens[i]->codComanda = pItens[posItens-1]->codComanda;
                    pItens[i]->codProduto = pItens[posItens-1]->codComanda;
                    pItens[i]->quantidade = pItens[posItens-1]->quantidade;
                    pItens[i]->valor_calc = pItens[posItens-1]->valor_calc;
                }
                posItens--;
            }
        }

        for (i=0; i<posComanda; i++){
            if (codcomanda == comanda[i]){
                comanda[i] = comanda[posComanda-1];
                posComanda--;
            }
        }

        printf("\n\nComanda fechada com sucesso!\n\n\n");
    } else {
        printf("\n\nOperacao Cancelada!\n\n\n");
    }

    system("pause");

}
