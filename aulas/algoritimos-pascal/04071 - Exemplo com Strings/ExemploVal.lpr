program ExemploVal;
//

uses crt;
var a:string;
    i:real;
    r:integer;

begin

  write('Digite uma string: ');
  readln(a);

  val(a, i, r);

  writeln('O valor de A: ', a);
  writeln('O valor de i: ', i:0:2);
  writeln('O valor de r: ', r);

  if(r <>0) then
    begin
      if (a[r] = ',') then
        a[r] := '.';

      val(a, i, r);

      writeln('O valor de A: ', a);
      writeln('O valor de i: ', i:0:2);
      writeln('O valor de r: ', r);

    end;

  readkey;

end.
