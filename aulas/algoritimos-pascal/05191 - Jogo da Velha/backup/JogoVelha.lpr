program JogoVelha;

uses crt;

var jogador : integer;
    jogada : array [1..9] of integer;
    posicao : integer;
    i : integer;
    j : integer;
    jogar : boolean;
    confjogar : integer;
    vencedor : boolean;
    empate : boolean;

procedure DesenhaItem(item, coluna, linha : integer); begin

  if item = 1 then begin
    gotoxy(coluna,linha);
    write(' ', #219, ' ');
    gotoxy(coluna,linha+1);
    write(#219, ' ', #219);
    gotoxy(coluna,linha+2);
    write(' ', #219, ' ');
  end
  else begin
    gotoxy(coluna,linha);
    write(#219, ' ', #219);
    gotoxy(coluna,linha+1);
    write(' ', #219,' ');
    gotoxy(coluna,linha+2);
    write(#219, ' ', #219);
  end;


end;

begin

  jogar := True;

  while (jogar = True) do begin

    clrscr;

    gotoxy(20,3);
    write('JOGO DA VEIA 1=0 2=X');
    vencedor := false;
    empate := false;
    jogador := 0;
    for i:= 1 to 9 do
        jogada[i] := 0;

    // Seleciona o jogador que inicia o jogo
    while (jogador < 1) OR (jogador > 2) do begin
        gotoxy(1,5);
        writeln('                                 ');
        gotoxy(1,5);
        write ('Qual jogador inicia o jogo ');
        read(jogador);
    end;

    // Desenha o tabuleiro do jogo
    for i:= 1 to 3 do begin
      gotoxy(10,7+i);
      write(#179);
      gotoxy(16,7+i);
      write(#179);
    end;
    gotoxy(5,11);
    for i:= 1 to 17 do
        write(#196);

    for i:= 1 to 3 do begin
      gotoxy(10,11+i);
      write(#179);
      gotoxy(16,11+i);
      write(#179);
    end;
    gotoxy(5,15);
    for i:= 1 to 17 do
        write(#196);

    for i:= 1 to 3 do begin
      gotoxy(10,15+i);
      write(#179);
      gotoxy(16,15+i);
      write(#179);
    end;

    gotoxy(7,9); write('1');
    gotoxy(13,9); write('2');
    gotoxy(19,9); write('3');

    gotoxy(7,13); write('4');
    gotoxy(13,13); write('5');
    gotoxy(19,13); write('6');

    gotoxy(7,17); write('7');
    gotoxy(13,17); write('8');
    gotoxy(19,17); write('9');

    while (vencedor = false) do begin

    posicao := 0;
    // pegar a jogada do jogador
    while (posicao < 1) OR (posicao > 9) do begin
        gotoxy(1,21);
        writeln('                                 ');
        gotoxy(1,21);
        write ('Jogador ', jogador, ' faca sua jogada: ');
        read(posicao);

        if (jogada[posicao] = 0) then
           jogada[posicao] := jogador
        else
           posicao := 0;

    end;

    // procedimento para escrever o item selecionado
    Case posicao of
         1: DesenhaItem(jogador, 6, 8);
         2: DesenhaItem(jogador, 12,8);
         3: DesenhaItem(jogador, 18,8);
         4: DesenhaItem(jogador, 6,12);
         5: DesenhaItem(jogador, 12,12);
         6: DesenhaItem(jogador, 18,12);
         7: DesenhaItem(jogador, 6,16);
         8: DesenhaItem(jogador, 12,16);
         9: DesenhaItem(jogador, 18,16);
    end;

    // verifica quem venceu
    // Verifica as linhas
    for i:= 1 to 3 do begin
        if(jogada[3*(i-1)+1] = jogada[3*(i-1)+2]) AND (jogada[3*(i-1)+2] = jogada[3*(i-1)+3]) AND (jogada[i]>0) then begin
           if (jogada[3*(i-1)+1] > 0) then
              vencedor := true;
        end;
    end;

    // Verifica as colunas
    for i:= 1 to 3 do begin
        if(jogada[3*(i-1)+1] >0) AND (jogada[3*(i-1)+1] = jogada[3*(i-1)+4]) AND (jogada[3*(i-1)+4] = jogada[3*(i-1)+7]) AND (jogada[i]>0) then
            vencedor := true;
    end;

    // Verifica a diagonal 1
    if (jogada[1] = jogada[5]) AND (jogada[5] = jogada[9]) AND (jogada[1]>0) then
       vencedor := true;

    // Verifica a diagonal 2
    if (jogada[3] = jogada[5]) AND (jogada[5] = jogada[7]) AND (jogada[3]>0) then
       vencedor := true;

    // mostra o vencedor
    if (vencedor = true) then begin
       gotoxy(1,21);
       writeln('                                 ');
       gotoxy(1,21);
       write ('O JOGADOR ', jogador, ' EH O VENCEDOR!!!!');
    end;

    // verifica empate
    for i:= 1 to 9 do begin

    end;

    // troca o jogador
    if (jogador = 1) then
       jogador := 2
    else
       jogador := 1;

    end; // do while vencedor


    readkey;
    // Procedimento para jogar novamente
    writeln('');
    write('Deseja jogar novamente (1 = SIM | 2 = NAO) ');
    read(confjogar);

    if (confjogar = 1) then
       jogar := true
    else
       jogar := false;

  end;

end.

