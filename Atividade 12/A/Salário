#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

string leituraSexo();
double leituraSalario();
double mediaMasculino(double saldo, double cont);
double mediaFeminino(double saldo, double cont);
void resultados(double mediaFem, double saldoFem, double mediaMas, double saldoMas, double  contMas, double contFem);

string leituraSexo() {
    string sexo;
	
	while(sexo != "m" && sexo != "f") {
		cout << "\nDigite o sexo do funcionário('m' para masculino ou 'f' para feminino): ";
		cin.ignore();
    	getline(cin, sexo);
    	
    	if(sexo != "m" && sexo != "f") {
    		cout << "\n\nSexo inválido, digite novamente!!!\n\n";
		}
	}
    
    return sexo;
}

double leituraSalario() {
	double salario;
	
	cout << "Digite o salário: ";
	cin >> salario;
	
	cout << "\n";
	
	return salario;
}

double mediaMasculino(double saldo, double cont) {
	double result = saldo / cont;
	return result;
}

double mediaFeminino(double saldo, double cont) {
	double result = saldo / cont;
	return result;
}

void resultados(double mediaFem, double saldoFem, double mediaMas, double saldoMas, double  contMas, double contFem) {
	cout << "\nFuncionários do Sexo Masculino";
	cout << "\nFuncionários: " << contMas;
	cout << "\nSaldo: " << saldoMas;
	cout << "\nMédia: " << mediaMas;
	
	cout << "\n\nFuncionários do Sexo Feminino";
	cout << "\nFuncionários: " << contFem;
	cout << "\nSaldo: " << saldoFem;
	cout << "\nMédia: " << mediaFem;
	
	cout << "\n\n";
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    
    double salario, mediaFem, saldoFem = 0, mediaMas, saldoMas = 0, contMas = 0, contFem = 0;
    string sexo; 
	int opcao;
    
    MENU:
    	cout << "Menu";
    	cout << "\n1 - Leitura";
    	cout << "\n2 - Calcular Saldo e Média";
    	cout << "\n3 - Resultados";
    	cout << "\n4 - Sair";
    	
		cout << "\n\nOpção: ";
		cin >> opcao;
		    
    switch(opcao) {
    	case 1:
    		sexo = leituraSexo();
    		
    		if(sexo == "m") {
    			salario = leituraSalario();
    			saldoMas += salario;
    			
    			contMas++;
			} else if (sexo == "f") {
				salario = leituraSalario();
    			saldoFem += salario;
    			
    			contFem++;
			}
			
    		goto MENU;
    		break;
    	case 2:
    		mediaFem = mediaFeminino(saldoFem, contFem);
    		mediaMas = mediaMasculino(saldoMas, contMas);
    		
    		cout << "\nCálculo realizado com sucesso!\n\n";
    		
    		goto MENU;
    		break;
    	case 3:
    		resultados(mediaFem, saldoFem, mediaMas, saldoMas, contMas, contFem);
    		system("pause");
    		
    		cout << "\n";
    		
    		goto MENU;
    		break;
    	case 4:
    		cout << "\n\nExecução finalizada!\n\n";
    		
    		system("pause");
    		return 0;
    		
			break; 
	}
    
    printf("\n");
    return 0;
}
