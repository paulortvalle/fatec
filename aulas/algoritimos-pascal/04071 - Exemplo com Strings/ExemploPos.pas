program ExemploPos;
// Retorna a posição da primeira string na segunda string
uses crt;
var
  a: string;
  b: string;
  c: integer;

begin

  write('Digite a primeira string: ');
  readln(a);

  write('Digite a segunda string: ');
  readln(b);

  c := pos(a, b);
  write(c);

  readkey;

end.

