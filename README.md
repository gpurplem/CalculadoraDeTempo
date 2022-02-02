# CalculadoraDeTempo
Minha resolução do exercício 1061 (Tempo de um Evento) do Beecrowd.

######################################################################

Lógica: 
  Calculei o tempo em segundos de 00:00 do dia 1 até a data inicial do evento.  
  Depois repeti o processo com a data de encerramento do evento.
  Por fim, subtraí ambas e converti para duração.


######################################################################

Exercício proposto: https://www.beecrowd.com.br/judge/pt/problems/view/1061

Entrada
  Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual o evento vai começar. Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do evento.

Saída
  Na saída, deve ser apresentada a duração do evento, no seguinte formato:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)
