program resolveEquacao2;
{
 O programa deve resolver uma equação do segundo grau
 Devo entrar com os valores de A, B e C e dar os resultados de X1 e X2
 Se o A for zero não é equação do segundo grau
 Se o delta for menor que zero não existe raiz real
 Delta = B2 - 4ac; X1 = -b+raiz(delta)/2a; X2 = -b-raiz(delta)/2a;
}

uses crt;
var valA : integer;
    valB : integer;
    valC : integer;
    delta: integer;
    x1 : real;
    x2: real;
    i : integer;

begin

  // le os valores dos numeros
  write ('Digite o valor de numero na posicao A: ');
  readln(valA);

  write ('Digite o valor de numero na posicao B: ');
  readln(valB);

  write ('Digite o valor de numero na posicao C: ');
  readln(valC);

  // apenas uma graça para zuar :)
  writeln('  ');
  writeln('Iniciando a resolucao da equacao!');
  writeln('  ');

  writeln('Verificando se o valor do numero A eh igual a zero...');
  delay(2000);
  // verifica se A = 0
  if (valA = 0) then
       writeln('Nao eh equacao do segundo grau, pois A = 0!')
  else
      begin

        writeln('O valor do numero A não eh zero!');
        delay(300);
        writeln('Iniciando o calculo do delta;');
        delay(300);

        write('delta = B*B - 4AC -> ');
        delay(200);
        write('delta = ',valB, '*', valB, ' - 4*',valA, '*', valC , ' -> ');
        delay(300);
        write('delta = ', valB*valB, ' - ', 4*valA*valB, ' -> ');
        delay(300);

        // encontra o valor de delta
        delta := (valB * valB) - (4 * valA * valC);

        write('delta = ', delta);
        delay(500);


        writeln(' ');
        writeln('Verificando se delta eh menor que zero...');
        delay(2000);

        // verifica se delta é maior que zero
        if (delta < 0) then
           writeln('Nao ha raizes reais para o numero, pois o delta eh menor que zero!')
        else
            begin
              writeln('Delta eh maior que zero, posso calcular os proximos valores!');
              delay(300);

              // realiza o calculo do x1 e do x2
              x1 :=  ((valB*-1) + sqrt(delta))/(2 * valA);
              x2 :=  ((valB*-1) - sqrt(delta))/(2 * valA);

              // mostra os resultados de x1 e x2
              writeln('Parabens!');
              writeln(' ');
              writeln('O valor de X1 eh: ', x1:0:3);
              writeln('O valor de X2 eh: ', x2:0:3);
            end;

      end;



  // primeira maneira de resolver o IF
  {resultado := numero mod 2;
  if (resultado = 0) then
      writeln('O numero ', numero, ' eh par!')
  else
      writeln('O numero ', numero, ' eh impar!');
   }
  readkey;

  // segunda maneira de resolver o IF

end.

