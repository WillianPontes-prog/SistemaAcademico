#include "Principal.h"

Principal::Principal() :
	//pessoas
	Willian(14,4,2005,"Willian",&UTFPR),

	//universidades
	UTFPR("UTFPR")
{
	cout << "Dia: ";
	cin >> diaAtual;

	cout << "Mes: ";
	cin >> mesAtual;

	cout << "Ano: ";
	cin >> anoAtual;
	

	Willian.ClaculaIdade(diaAtual,mesAtual,anoAtual);
}

Principal::~Principal(){
}

void Principal::Executar(){

	int quant;
	cout << "Quantidade de que alunos deseja criar: ";
	cin >> quant;


	for (int i = 0; i < quant; i++) {
		
		string name = "";
		cout << "Nome: ";
		cin >> name;

		int dia_ = 0;
		cout << "Dia de nascimento: ";
		cin >> dia_;

		int mes_ = 0;
		cout << "mes de nascimento: ";
		cin >> mes_;

		int ano_ = 0;
		cout << "Ano de nascimento: ";
		cin >> ano_;

		Aluno* aluno_ = new Aluno(dia_, mes_, ano_, name, &UTFPR);
		aluno_->ClaculaIdade(diaAtual, mesAtual, anoAtual);

		teste.AddAluno(aluno_);
	}

	teste.PrintAlunos();
}
