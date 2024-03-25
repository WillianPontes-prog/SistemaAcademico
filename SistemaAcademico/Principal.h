#pragma once

#include "includes.h"

#include "Pessoa.h"
#include "Universidade.h"
#include "Aluno.h"

class Principal {
private:
	int diaAtual;
	int mesAtual;
	int anoAtual;

	Aluno Willian;

	Universidade UTFPR;

public:
	Principal();
	~Principal();

	void Executar();
};