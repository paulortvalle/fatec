program Exercicio2;
// Alunos: Afabio Gumercindo Lima Junior (1511001)
//         Paulo Rogério Teruel Valle (1511031)

uses crt;

var media: real;
    ampli: integer;

    ordenar:array[1..4] of integer;
    aux: integer;
    i: integer;
    j: integer;

begin

    // Recebe as variaveis em um vetor;
    write('Digite o primeiro numero: ');
    read (ordenar[1]);

    write('Digite o segundo numero: ');
    read (ordenar[2]);

    write('Digite o terceiro numero: ');
    read (ordenar[3]);

    write('Digite o quarto numero: ');
    read (ordenar[4]);

    // Executa a ordenação do vetor
    for i:=1 to 4 do
      begin
         for j:= i to 4 do
           begin
           if (ordenar[i] > ordenar[j]) then
              begin
                  aux := ordenar[j];
                  ordenar[j] := ordenar[i];
                  ordenar[i] := aux;
              end;

           end;
      end;

    // Maior Número
    writeln('1 - O maior numero eh: ', ordenar[4]);


    // Menor Número
    writeln('2 - O menor numero eh: ', ordenar[1]);


    // Média dos numeros
    media := (ordenar[1]+ordenar[2]+ordenar[3]+ordenar[4])/4;
    writeln('3 - A media entre os numeros eh: ', media:0:2);


    // Amplitude dos numeros
    ampli := ordenar[4] - ordenar[1];
    writeln('4 - A amplitude entre os numeros eh: ', ampli);


    // Ordenar os numeros
    Writeln('5 - A ordem dos numeros eh: ');
    Write(ordenar[1], ', ', ordenar[2], ', ', ordenar[3], ' e ', ordenar[4]);

    readkey;
end.

