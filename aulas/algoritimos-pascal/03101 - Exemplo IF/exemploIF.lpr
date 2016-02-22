program exemploIF;
{
 le um numero qualquer e indica se é par ou impar
 O sistema contará com duas opções de if para ver modificações
 na estrutura de escrita do IF
}

uses crt;
var numero : integer;
    resultado : integer;

begin

  write ('Digite um numero: ');
  readln(numero);

  // primeira maneira de resolver o IF
  resultado := numero mod 2;
  if (resultado = 0) then
      writeln('O numero ', numero, ' eh par!')
  else
      writeln('O numero ', numero, ' eh impar!');

  readkey;

  // segunda maneira de resolver o IF

end.

