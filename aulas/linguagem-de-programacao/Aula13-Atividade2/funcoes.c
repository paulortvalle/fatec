// 1) Fa�a uma fun��o que retorne 1 se o n�mero passado como argumento
// for positivo e -1 se for negativo e 0 se for ZERO
int verPositividade(int valor) {
    if (valor < 0) return -1;
    if (valor > 0) return 1;
    return 0;
}

// 2) Fa�a uma fun��o que receba dois n�meros inteiros e retorne a soma dos n�meros inteiros existentes
// entre eles. Por exemplo: Para os valores de entrada 2 e 10, a soma ser� 3+4+5+6+7+8+9.
int somarIntervalo(int n1, int n2){
    int i;
    int soma = 0;

    for (i=n1+1;i<n2;i++){
        soma += i;
    }

    return soma;
}

// 3) Fa�a uma fun��o que receba tr�s n�meros inteiros: a, b e c, onde a>1; e retorne a soma de todos os
// n�meros inteiros de b at� c que sejam divis�veis por a. Exemplo: Para os valores de entrada 2 (para a), 5
// (para b) e 10 (para c), a soma ser� 6+8+10= 24.
int somarIntervalorDivisiveis(int a, int b, int c){
    int i;
    int soma = 0;

    for (i=b;i<=c;i++){
        if (i % a == 0)
            soma += i;
    }

    return soma;
}

// 4) Fa�a uma fun��o que receba tr�s notas de um aluno e uma letra como par�metros. Se a letra for A
// (Aritm�tica), a fun��o deve calcular e retornar a m�dia aritm�tica das notas do aluno (p1+p2+p3)/3, e, se
// for P (Ponderada) deve calcular e retornar a m�dia ponderada com pesos 2, 4 e 5.
float calcularMedia1(float nota1, float nota2, float nota3, char letra){
    if (letra == 'A'){
        return (nota1+nota2+nota3)/3;
    }
    if (letra == 'P'){
        return ((nota1*2)+(nota2*4)+(nota3*5))/11;
    }
    return -1;
}

// 5) Fa�a uma fun��o que receba tr�s notas de um aluno e os pesos de cada uma das provas. A, a fun��o deve
// calcular e retornar a m�dia ponderada das notas do aluno.
float calcularMedia2(float n1, float n2, float n3, int p1, int p2, int p3){
    return ((n1*p1)+(n2*p2)+(n3*p3))/(float)(p1+p2+p3);
}

// 6. Fa�a uma fun��o que leia valores N valores entrados pelo usu�rio e imprima o maior e o menor valor. A
// fun��o deve receber como argumento o pr�prio N.

void ler(int n){
    int max, min, valor;
    int i;
    int ini = 0;

    for (i=0; i<n; i++){
        printf("Digite um numero: ");
        scanf("%d", &valor);

        if (ini == 0){
            max = valor;
            min = valor;
            ini = 1;
        }

        if (valor > max) max = valor;
        if (valor < min) min = valor;
    }

    printf("O maior valor digitado eh: %d\n", max);
    printf("O menor valor digitado eh: %d\n", min);

}

// 7. Fa�a uma fun��o que receba tr�s valores inteiros e retorne a somat�ria do quadrado de cada um deles.
int somar(int a, int b, int c){
    return (a*a)+(b*b)+(c*c);
}

// 8. Fa�a uma fun��o que receba por par�metros 3 valores inteiros referentes ao dia, ao m�s e ao ano. Retorne
// 1 se for uma data v�lida e 0 se n�o formar uma data v�lida.
// Lembre-se de verificar os anos bissextos. Regra:
//  + S�o bissextos todos os anos m�ltiplos de 400, p.ex: 1600, 2000, 2400, 2800...
//  + S�o bissextos todos os m�ltiplos de 4 e n�o m�ltiplos de 100, p.ex: 1996, 2004, 2008, 2012, 2016�
//  + N�o s�o bissextos todos os demais anos.
int validarData(int dia, int mes, int ano){

    if (ano < 0) return 0;
    switch(mes){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return (dia <= 31 && dia >= 1) ? 1 : 0;
        break;
        case 4: case 6: case 9: case 11:
            return (dia <= 30 && dia >= 1) ? 1 : 0;
        break;
        case 2:
            if (ano % 400 == 0) {
                return (dia <= 29 && dia >= 1) ? 1 : 0;
            }else{
                if (ano % 4 == 0 && ano % 100 > 0){
                    return (dia <= 29 && dia >= 1) ? 1 : 0;
                } else {
                    return (dia <= 28 && dia >= 1) ? 1 : 0;
                }
            }
        break;
        default:
            return 0;
        break;
    }
}
