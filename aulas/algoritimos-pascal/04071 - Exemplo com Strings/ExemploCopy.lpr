program ExemploCopy;
// Retorna a posição da primeira string na segunda string
uses crt;
var
  a: string;
  b: integer;
  c: string;
  d: integer;

begin

  write('Digite a primeira string: ');
  readln(a);

  write('Digite um numero: ');
  readln(b);

  write('Digite um numero: ');
  readln(d);

  c := copy(a,b,d);
  writeln('#',c,'#');

  readkey;

end.

