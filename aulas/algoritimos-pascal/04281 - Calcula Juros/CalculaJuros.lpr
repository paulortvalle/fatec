program CalculaJuros;
uses crt;

var juros : real;
    depini : real;
    depmes : real;
    meses : integer;
    saldo : real;
    i : integer;

begin

    Writeln('CALCULADOR DE JUROS');
    Writeln('');

    while (juros <= 0) OR (juros >= 5) do begin
          Write('Digite o valor do juros mensal (entre 0 e 5): ');
          read(juros);
    end;

    while (depini < 1000) do begin
          Write('Digite o valor do deposito inicial (maior que 1000): ');
          read(depini);
    end;

    while (meses < 4) do begin
          Write('Digite o numero de meses (maior que 12): ');
          read(meses);
    end;

    saldo := depini;

    for i := 1 to meses do begin

        depmes := 0;
        while (depmes <= 0) do begin
              write('Digite o valor do deposito mensal (maior que 0): ');
              read(depmes);
        end;
        saldo := saldo + depmes;
        saldo := saldo + ((saldo * juros)/100);

    end;

    writeln('O saldo final eh de: R$ ', saldo:0:2);
    readkey;
end.

