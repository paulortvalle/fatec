program Exercicio5;

uses crt;
var i:integer;
  j: integer;
  k: integer;
  l: integer;

begin

  // primeiro for da primeira posição
  for i:= 1 to 3 do
      begin

        //segundo for da segunda posição
        for j:= 1 to 3 do
            begin

              // terceiro for para terceira posição
              for k := 1 to 3 do
                  begin


                    // quarto for para quarta posição
                    for  l := 1 to 3 do
                        begin

                             case i of
                                  1: Write('A');
                                  2: Write('B');
                                  3: Write('C');
                             end;

                             case j of
                                  1: Write('A');
                                  2: Write('B');
                                  3: Write('C');
                             end;

                             case k of
                                  1: Write('A');
                                  2: Write('B');
                                  3: Write('C');
                             end;

                             case l of
                                  1: Writeln('A');
                                  2: Writeln('B');
                                  3: Writeln('C');
                             end;



                        end;

                  end;

            end;

      end;
   readkey;
end.

