program Calculador;
// leia dois números e
// calcule a amplitude entre eles
// calcule a média dos números
// imprima os números e os resulados calculados

Uses crt;

Var num1, num2 : Integer;
    amplitude, media: Real;

begin
  Write('Digite um numero: ');
  Read(num1);
  Write('Digite outro numero: ');
  Read(num2);

  amplitude := num2 - num1;
  media := (num1 + num2)/2;

  WriteLn('----------------------------------------');
  WriteLn('Seu primeiro numero digitado foi: ', num1:0);
  WriteLn('Seu segundo numero digitado foi:  ', num2:0);
  WriteLn('A amplitude entre eles e de:      ', amplitude:0:0);
  WriteLn('A media entre eles e de:          ', media:0:3);
  WriteLn('----------------------------------------');
  WriteLn(':)');

  ReadKey;
end.

