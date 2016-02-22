program ExercicioTeste1;
// O programa inverte os caracteres do string

uses crt;
var a:string;
    tam:integer;
    i:integer;
    b:string;

begin

  write('Digite um nome: ');
  read(a);

  writeln('O inverso eh: ');
  tam := length(a);

  for i:= tam downto 1 do begin
      b := concat(b,copy(a,i,1));
      writeln(b);
  end;

  writeln (b);
  readkey;
end.

