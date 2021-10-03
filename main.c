#include<stdio.h>

int main(){

	//Q1
	char c = 'c';
	int i = 500;
	long l = 10000;
	//Q2
	printf("C address in decimal: %lu \t C address in Hexacimal: %p \n", &c, &c);
	printf("i address in decimal: %lu \t i address Hexadecimal: %p \n", &i, &i);
	printf("l address in decimal: %lu \t l address Hexadecimal: %p \n\n", &l, &l);

	// Q3
	char*cp = &c;
  int *ip = &i;
  long*lp = &l;
	// Q4
	printf("cp: %p \n",cp);
	printf("ip: %p \n",ip);
	printf("lp: %p \n",lp);
	// Q5
	*cp = 't';
	*ip = 50;
	*lp = 13458;
	printf("cp new value: %c \n",*cp);
	printf("ip new value: %i \n",*ip);
	printf("lp new value: %lu \n",*lp);

	// Q6
	unsigned int ui = 40;
	int *uip = &ui;
	char *ucp = &ui;

	// Q7
	printf("uip: %p uip value: %u \n", uip, *uip);
	printf("ucp: %p uc_pointer value: %u \n", ucp, *ucp);

	// Q8
	printf("Decimal: %u Hexadecimal: %x \n", ui, ui);

	// Q9
	int j = 0;
    for (j = 0; j < 4; j++) {
        printf("Decimal byte:%hhu Hexadecimal byte:%hhx\n", *(uip + j), *(uip+ j));
    }
	// Q10
	 for (j = 0; j < 4; j++) {
        (*(ucp + j))++;
        printf("decimal byte: %u hexidecimal byte:%x \n", *uip, *uip);
    }
    for (j = 0; j < 4; j++) {
        printf("decimal byte:%hhu hexidecimal byte:%hhx\n", *(ucp + j), *(ucp + j));
    }
	// Q11
	for (j = 0; j < 4; j++) {
        (*(ucp + j))+=16;
        printf("decimal byte: %u hexidecimal byte:%x \n", *uip, *uip);
    }
    for (j = 0; j < 4; j++) {
        printf("decimal byte:%hhu hexidecimal byte:%hhx\n", *(ucp+j), *(ucp+j));
    }

}
