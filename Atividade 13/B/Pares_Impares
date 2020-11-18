#include <iostream>
#include <cstdlib>
#include <conio.h>

int learn() {
	int n;
	
	printf("\n\nDigite o valor de N: ");
	scanf("%d", &n);
	
	printf("\n");
	
	return n;
}

int calpar(int n) {
	int par = 0;
	
	for(int cont = 0; cont < n; cont++) {
		if(cont % 2 == 0) {
			par++;
		}
	}
	
	return par;
}

int calimpar(int n) {
	int impar = 0;
	
	for(int cont = 0; cont < n; cont++) {
		if(cont % 2 == 0) {
			impar++;
		}
	}
	
	return impar;
}

void exibir(int n, int par, int impar) {
	printf("\n\nValor de N: %d", n);
	printf("\nTotal de números pares: %d", par);
	printf("\nTotal de números impares: %d", impar);
	printf("\n\n");
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "PORTUGUESE");
	
	int n, totpar, totimpar;
	char tecla;
	
	MENU:
		printf("Pressione ESC para continuar o programa!");
		tecla = getch();
		
		if(tecla != 27) {
			system("pause");
			return 0;
		} else {
			printf("\n\n");
			
			printf("MENU");
			printf("\n1 - Ler");
			printf("\n2 - Calcular");
			printf("\n3 - Exibir");
			printf("\n4 - Sair");
				
			tecla = getch();
		}
		
	switch(tecla) {
		case '1':
			n = learn();
			
			goto MENU;
			break;
		case '2':
			totpar = calpar(n);
			totimpar = calimpar(n);
			
			printf("\n\n");
			goto MENU;
			break;
		case '3':
			exibir(n, totpar, totimpar);
			
			goto MENU;
			break;
	}
		
	return 0;
}
