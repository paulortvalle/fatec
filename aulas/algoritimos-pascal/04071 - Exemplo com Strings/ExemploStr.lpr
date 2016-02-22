program ExemploStr;
//

uses crt;
var a:string;
    i:real;

begin

  write('Digite um numero: ');
  readln(i);

  str(i:0:2, a);

  writeln('O valor de i: ', i);
  writeln('O valor de a: ', a);

  readkey;

end.
