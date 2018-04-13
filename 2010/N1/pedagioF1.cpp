#include <stdio.h>

int main () {
	int a, b, c, d;
	
	//fflush(stdin);	
	scanf("%d %d\n %d %d", &a, &b, &c, &d);
	
	int pedagios = (a/b) * d;
	int preco = c * a + pedagios;
	
	printf("%d\n", preco); 
	
	return 0;
}

