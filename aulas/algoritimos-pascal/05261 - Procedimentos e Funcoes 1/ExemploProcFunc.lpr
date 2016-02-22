program ExemploProcFunc;

uses crt;

var numero : integer;

procedure imprime(valor : integer); begin
   {O var na frente da variavel faz ela funcionar por referência }
   if (valor > 999) then
      valor := 999;
   writeln('*****');
   writeln('*',valor:3,'*');
   writeln('*****');
end;

function aleatorio() : integer; begin
   aleatorio := random(1000);
end;

begin
  randomize();

  {
  numero:=aleatorio();
  imprime(numero);

  numero:=122;
  imprime(numero);

  imprime(2910);

  imprime(aleatorio());  }

  numero := 2000;
  imprime(numero);

  readkey;
end.

