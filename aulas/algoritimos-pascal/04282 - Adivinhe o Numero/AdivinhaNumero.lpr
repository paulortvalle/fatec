program AdivinhaNumero;
  uses crt;

  var nrand : integer;
      nuser : integer;
      tenta : integer;
      nmenor : integer;
      nmaior : integer;
      rang : integer;
      jogar : integer;


begin
  jogar := 1;

  while (jogar = 1) do begin

  clrscr;
  nmenor := 0;
  nmaior := 10000;
  tenta := 0;

  randomize;
  nrand := random(nmaior) + 1;

  while (nrand <> nuser) do begin

     write ('Digite um numero entre ', nmenor, ' e ', nmaior, ': ');
     read(nuser);

     tenta := tenta + 1;

     if (nrand <> nuser) then begin

         if (nuser < nrand) then begin
            nmenor:=nuser;
            rang := nmaior - nmenor;
            writeln ('Numero muito baixo!!! Suas possibilidades sao : ', rang);
         end;

         if (nuser > nrand) then begin
            nmaior:= nuser;
            rang := nmaior - nmenor;
            writeln ('Numero muito alto!!! Suas possibilidades sao : ', rang);
         end;

     end;

  end;

  case tenta of
   1, 2, 3, 4, 5 : Writeln('Parabens Ninja!!! Voce usou ', tenta, ' tentativas!');
   6, 7 : Writeln ('Muito bom!!! Voce usou ', tenta, ' tentativas!');
   8, 9, 10, 11, 12 : Writeln ('Normal!!! Voce usou ', tenta, ' tentativas!');
   13, 14 : Writeln ('Tah ruim ein!!! Voce usou ', tenta, ' tentativas!')
   else  Writeln ('Parabens asno !!! Voce usou ', tenta, ' tentativas!');
  end;

  writeln ('');

  write ('Deseja jogar novamente? 1 - SIM, 2 - NAO: ');
  read (jogar);
  //jogar := upcase(jogar);

  end;

end.

