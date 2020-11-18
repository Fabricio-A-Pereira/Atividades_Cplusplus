#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int leituraIdade();
double leituraSalario();
void resultados(double maiorSalMenor, double menorSalMenor, double maiorSalMaior, double menorSalMaior, double contMenor, double contMaior);

int leituraIdade() {
    int idade;
    
	cout << "\nDigite a idade do funcionário: ";
	cin >> idade;
    
    return idade;
}

double leituraSalario() {
	double salario;
	
	cout << "Digite o salário: ";
	cin >> salario;
	
	cout << "\n";
	
	return salario;
}

void resultados(double maiorSalMenor, double menorSalMenor, double maiorSalMaior, double menorSalMaior, double contMenor, double contMaior) {
	cout << "\nFuncionários Maiores de Idades";
	cout << "\nFuncionários: " << contMaior;
	cout << "\nMaior Salário: " << maiorSalMaior;
	cout << "\nMenor Salário: " << menorSalMaior;
	
	cout << "\n\nFuncionários Menores de Idade";
	cout << "\nFuncionários: " << contMenor;
	cout << "\nMaior Salário: " << maiorSalMenor;
	cout << "\nMenor Salário: " << menorSalMenor;
	
	cout << "\n\n";
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    
    double salario, maiorSalMenor, menorSalMenor, maiorSalMaior, menorSalMaior, contMenor = 0, contMaior = 0;
    int idade; 
	int opcao;
	int i = 1, x = 1;
    
    MENU:
    	cout << "Menu";
    	cout << "\n1 - Leitura";
    	cout << "\n2 - Resultados";
    	cout << "\n3 - Sair";
    	
		cout << "\n\nOpção: ";
		cin >> opcao;
		    
    switch(opcao) {
    	case 1:
    		idade = leituraIdade();
    		
    		if(idade < 18) {
    			salario = leituraSalario();
    			
    			while(i == 1) {
    				menorSalMenor = salario;
    				maiorSalMenor = salario;
    				
    				i++;
				}
				
				if(salario < menorSalMenor) {
					menorSalMenor = salario;
				} else if (salario > maiorSalMenor) {
					maiorSalMenor = salario;
				}
    			
    			contMenor++;
			} else if(idade >= 18) {
				salario = leituraSalario();
    			
    			while(x == 1) {
    				menorSalMaior = salario;
    				maiorSalMaior = salario;
    				
    				x++;
				}
				
				if(salario < menorSalMaior) {
					menorSalMaior = salario;
				} else if (salario > maiorSalMaior) {
					maiorSalMaior = salario;
				}
    			
    			contMaior++;
			}
			
    		goto MENU;
    		break;
    	case 2:
    		resultados(maiorSalMenor, menorSalMenor, maiorSalMaior, menorSalMaior, contMenor, contMaior);
    		
    		goto MENU;
    		break;
    	case 3:
    		cout << "\n\nExecução finalizada!\n\n";
    		
    		system("pause");
    		return 0;
    		
			break;
	}
    
    printf("\n");
    return 0;
}

