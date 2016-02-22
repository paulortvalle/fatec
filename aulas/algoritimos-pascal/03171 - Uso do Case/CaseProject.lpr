program CaseProject;

// habilita o comando de digitação
uses crt;

// declaração de variaveis do sistema
var optMenu : integer;
  x1 : integer;
  x2 : integer;

begin

  // pega o valor do x1
  write('Digite o primeiro numero: ');
  readln (x1);

  // pega o valor do x2
  write('Digite o segundo numero: ');
  readln(x2);

  // cria o menu de opções para o usuario
  writeln('');
  writeln('');
  writeln('Menu de Opcoes');
  writeln('1 - Somar');
  writeln('2 - Subtrair');
  writeln('3 - Multiplicar');
  writeln('4 - Dividir');
  writeln('');

  // pega a opcao do meno
  write ('Selecione a opcao desejada: ');
  readln(optMenu);
  writeln('');

  // executa a operação com o case
  case optMenu of
       1: Writeln('Resultado: ', x1, ' + ', x2, ' = ', x1+x2);
       2: Writeln('Resultado: ', x1, ' - ', x2, ' = ', x1-x2);
       3: Writeln('Resultado: ', x1, ' * ', x2, ' = ', x1*x2);
       4: Writeln('Resultado: ', x1, ' / ', x2, ' = ', x1/x2:0:3);
       else Writeln('Engracado voce ein!!! Escolheu uma opcao invalida!! :)');
  end;

  readkey;
end.

