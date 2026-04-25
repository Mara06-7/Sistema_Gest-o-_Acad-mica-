#include <iostream>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int opcao;
	string nome[1000], curso[1000];
	double numero_matricula[1000], nota_final[1000];
	int numero_alunos=0, contador=0;
	
	do{
		cout<<"\n=================Menu=================\n";
		cout<<"1. Cadastrar aluno.\n";
		cout<<"2. Listar alunos cadastrados.\n";
		cout<<"3. Sair do programa.\n";
		cout<<"========================================\n";
		cout<<"Escolha um opcao: ";
		cin>>opcao;
		if(opcao==1){
			cout<<"Informa o numero de Alunos: ";
			cin>> numero_alunos;
			if(contador+numero_alunos<=5){//usamos a soma do contador mais o numero de alunos para definir um limite de cadastramento.
				for(int i=0; i<numero_alunos; i++){
					cout<<"\nInforma o numero da Matricula do aluno: ";
					cin>>numero_matricula[contador];
					cin.ignore();//usamos o cin.ignore() para limpar o buffer de entrada do cin.
					cout<<"Informa o nome do aluno: ";
					getline(cin, nome[contador]);// usamos o gitline() para permitir o uso de nomes mais extensos e com espaços entre eles.
					cout<<"Informa o Curso: ";
					getline(cin, curso[contador]);
					cout<<"Informa a nota final do aluno: ";
					cin>>nota_final[contador];
					contador++;// usamos o contador para controlar e armazenar os dados 
				}
				if(numero_alunos==0){
				cout<<"\nNenhum Aluno foi Cadastrado!\n";
			}else{
				cout<<"Aluno(s) Cadastrado(s) com sucesso!\n";
				}
			}else{
				cout<<"\nLimite de Alunos Atingido!!!\n";
				}
		}else if(opcao==2){
				if(contador+numero_alunos==0){
					cout<<"\nNenhum aluno foi Cadastrado!!!\n";
					} else if(contador+numero_alunos>5){
						cout<<"\nNenhum aluno foi Cadastrado!!!\n";
					}else{
						cout<<"\n========================================Alunos Cadastrados====================================\n";
						cout<<"Matricula\t"<<"Nome Completo\t\t    "<<"\t Curso\t\t "<<"\t\t  Nota Final\n";
						cout<<"************************************************************************************************\n";
						for(int i=0; i<contador; i++){
							cout<<numero_matricula[i]<<"\t\t"<<nome[i]<<"\t\t\t"<<curso[i]<<" \t\t\t"<<nota_final[i]<<"\n";
						}
						cout<<"*********************************************************************************************\n";	
					}
				}else if(opcao==3){
					cout<<"Saindo do programa...\n";
				}else{
					cout<<"\n+++++++++OPCAO INVALIDA!+++++++\nSelecione uma das Opcoes Listadas.\n";
				}
}while(opcao!=3);
	
	return 0;
}
