program Exercicio3;
// Alunos: Afabio Gumercindo Lima Junior (1511001)
//         Paulo Rogério Teruel Valle (1511031)

uses crt;

var numero: real;
    opt: integer;

begin

    // Mostra o menu e recebe a opção;
    writeln('SELECIONE UMA OPCAO:');
    writeln('   1) Milhas para Quilometros');
    writeln('   2) Quilometros para Milhas');

    readln(opt);

    // Pega o valor do usuário
    writeln('');
    write('Digite o valor para converter: ');
    readln(numero);

    // Efetua o calculo e mostra na tela
    if (opt = 1) then
       writeln(numero:0:2, ' milhas eh igual a ', (numero * 1.609):0:3,' km' )
    else
       writeln(numero:0:2, ' Km eh igual a ', (numero / 1.609):0:3,' milhas' );

    readkey;
end.

