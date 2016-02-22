program ProcFunc1;

uses crt;

var numero1 : integer;
    numero2 : integer;
    operacao : char;
    resultado : integer;

function CALCULADORA(n1, n2: integer; op : char) : integer;
begin
  case op of
      '+' : CALCULADORA := n1 + n2;
      '-' : CALCULADORA := n1 - n2;
      '*' : CALCULADORA := n1 * n2;
      '/' : CALCULADORA := n1 div n2;
  end;
end;

begin
  write('Digite o primeiro numero:       ');
  readln(numero1);

  write('Digite a operacao (+ - * /) :   ');
  readln(operacao);

  write('Digite o segundo numero:        ');
  readln(numero2);

  resultado := CALCULADORA (numero1, numero2, operacao);
  writeln('O resultado da operacao eh:   ', resultado);

  readkey;
end.

