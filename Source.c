#include <stdio.h>
#include <string.h>

int main() {
  unsigned int tempo1, tempo2, d, h, m, s, tempoTotal;
	char string[20];
	char c;
	char data[15];

	scanf("%s %u", string, &d);
	scanf("%u %c %u %c %u", &h, &c, &m, &c, &s);

	tempo1 = ((h*3600)+(m*60)+s)+((d-1)*24*3600);

	scanf("%s %u", string, &d);
	scanf("%u %c %u %c %u", &h, &c, &m, &c, &s);

	tempo2 = ((h*3600)+(m*60)+s)+((d-1)*24*3600);

	tempoTotal = tempo2 - tempo1;

	d = tempoTotal / 86400;
	tempoTotal -= d*86400;
	h = tempoTotal / 3600;
	tempoTotal -= h*3600;
	m = tempoTotal / 60;
	tempoTotal -= m*60;
	s = tempoTotal;

	printf("%u dia(s)\n%u hora(s)\n%u minuto(s)\n%u segundo(s)", d, h, m, s);

  return 0;
}
