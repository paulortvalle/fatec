program Exercicio8Draw;

uses crt;
var num : integer;
  i, j, k, l : integer;
  aux : integer;

begin

  write('Digite o tamanho do desenho: ');
  readln(num);

  clrscr;

  // primeiro desenho
  for i := 1 to num do begin
    writeln();
    write(i:2,  '     ');
    if ((i = 1) OR (i = num)) then
      for j := 1 to num do begin
        write('8'); delay(50);
      end
    else
      for j := 1 to num do
        if ((j = 1) OR (j = num)) then begin
          write('8'); delay(50);
        end
        else
          write(' ');

  end;

  readkey;
  clrscr;

  // segundo desenho
  for i := 1 to num do begin
    writeln();
    write(i:2,  '     ');
    if ((i = 1) OR (i = num)) then
      for j := 1 to num do
        if ((j = 1) OR (j = num)) then
          write(' ')
        else begin
          write('8'); delay(50);
        end
    else
      for j := 1 to num do
        if ((j = 1) OR (j = num)) then  begin
          write('8'); delay(50);
        end
        else
          write(' ');
  end;

  readkey;
  clrscr;

  // terceiro desenho
  for i := 1 to num do begin
    writeln();
    write(i:2,  '     ');

    for j := 1 to i do
      write('8');

    for j := i to num do begin
      write(' '); delay(50);
    end;
  end;

  readkey;
  clrscr;

  // quarto desenho
  for i := 1 to num do begin
    writeln();
    write(i:2,  '     ');

    for j := i to num do
      write(' ');

    for j := 1 to i do begin
      write('8'); delay(50);
    end;
  end;

  readkey;
  clrscr;

  // quinto desenho
  for i := 1 to num do begin
    writeln();
    write(i:2,  '     ');

    for j := 1 to i do
      write(' ');

    for j := i to num do begin
      write('8'); delay(50);
    end;
  end;

  readkey;
  clrscr;

  // sexto desenho
  for i := 1 to num do begin
    writeln();
    write(i:2,  '     ');

    if (i = ((num div 2)+1)) then
      for j := 1 to num do begin
        write('8'); delay(50);
      end
    else
      for j := 1 to num do
        if (j = ((num div 2)+1)) then begin
          write('8'); delay(50);
        end
        else
          write(' ');
  end;

  readkey;
  clrscr;

  // sétimo desenho
  aux := 0;
  for i := 1 to num do begin
    writeln();
    write(i:2,  '     ');

    for j := (-1*(num div 2)) to (num div 2) do begin

      if ((j = aux) OR (j = (-aux))) then begin
        write('8'); delay(50);
      end
      else
        write(' ');

    end;

    if (i < ((num div 2)+1)) then
      aux += 1
    else
      aux -= 1;
  end;

  readkey;
end.

