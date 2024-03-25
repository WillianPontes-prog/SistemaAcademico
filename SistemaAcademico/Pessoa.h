#pragma once
#include "includes.h"

class Pessoa {
protected:
	int diaP;
	int mesP;
	int anoP;

	int idadeP;

	string nomeP;

public:

	Pessoa(int dia = 0, int mes = 0, int ano = 0, string nome = "");
	~Pessoa();

	void ClaculaIdade(int dia, int mes, int ano);

	void InfoPessoa();
};