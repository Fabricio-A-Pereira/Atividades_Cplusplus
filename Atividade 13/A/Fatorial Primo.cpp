#include <iostream>
#include <cstdlib>

using namespace std;

void impar(int a, int b) {
	int soma = 0;
	
	for(a; a <= b; a++) {
		if(a % 2 == 1) {
			soma += a;
		}
	}
	
	cout << "\nA soma de todos os números impares é " << soma;
	cout << "\n\n\n";
}

void fatorial(int num) {
	int fat;
	
	for(fat = 1; num > 1; num--) {
		fat = fat * num;
	}
		
	cout << "\nO resultado do fatorial é igual a " << fat;
	cout << "\n\n\n";
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "PORTUGUESE");
	
	int a, b;
	int num;
	int opcao;
	
	MENU:
		cout << "MENU";
		cout << "\n1 - Número Ímpar";
		cout << "\n2 - Fatorial";
		cout << "\n3 - Sair";
		
		cout << "\n\nOpção: ";
		cin >> opcao;
		
	switch(opcao) {
		case 1:
			cout << "\n\nNúmero Ímpar";
			do {
				cout << "\n\nDigite o primeiro número: ";
				cin >> a;
				cout << "Digite o segundo número: ";
				cin >> b;
			} while(a > b);
			
			impar(a, b);
			
			goto MENU;
			break;
		case 2:
			cout << "\n\nFatorial";
			do {
				cout << "\n\nDigite o valor para o fatorial: ";
				cin >> num;
			} while(num < 0);
			
			fatorial(num);
			
			goto MENU;
			break;
		case 3:
			system("pause");
			break;
	}
	
	return 0;
}
