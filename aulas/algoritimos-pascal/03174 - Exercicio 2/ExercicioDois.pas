program ExercicioDois;

uses crt;
var i : integer;

begin
  for i := 1 to 20 do
      begin
           write((i+(4*(i-1))+0):3, 'C= ', (9/5*(i+(4*(i-1))+0)+32):0:1, 'F | ');
           write((i+(4*(i-1))+1):3, 'C= ', (9/5*(i+(4*(i-1))+1)+32):0:1, 'F | ');
           write((i+(4*(i-1))+2):3, 'C= ', (9/5*(i+(4*(i-1))+2)+32):0:1, 'F | ');
           write((i+(4*(i-1))+3):3, 'C= ', (9/5*(i+(4*(i-1))+3)+32):0:1, 'F | ');
           writeln((i+(4*(i-1))+4):3, 'C= ', (9/5*(i+(4*(i-1))+4)+32):0:1, 'F');
      end;


  readkey;
end.

