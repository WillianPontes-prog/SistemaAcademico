#include "Pessoa.h"

Pessoa::Pessoa(int dia, int mes, int ano, string nome) {
	diaP = dia;
	mesP = mes;
	anoP = ano;

	idadeP = 0;

	nomeP = nome;
}

Pessoa::~Pessoa(){
}

void Pessoa::ClaculaIdade(int dia, int mes, int ano){

	idadeP = ano - anoP;

	if (mesP > mes) {
		idadeP--;
	}
	else if (mes == mesP) {
		if (diaP > dia) {
			idadeP--;
		}
	}

}

void Pessoa::InfoPessoa(){
	
	cout	<< "Nome: "  << nomeP << endl 
			<< "Nascimento: " << diaP << "/" << mesP << "/" << anoP << endl
			<< "Idade: " << idadeP << endl;
}
