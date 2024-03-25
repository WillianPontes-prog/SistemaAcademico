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

	Willian.InfoAluno();
}
