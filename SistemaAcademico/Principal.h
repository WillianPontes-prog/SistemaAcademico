#pragma once

#include "includes.h"

#include "Pessoa.h"
#include "Universidade.h"
#include "Aluno.h"
#include "ListAluno.h"

class Principal {
private:
	int diaAtual;
	int mesAtual;
	int anoAtual;

	Aluno Willian;

	ListAluno teste;

	Universidade UTFPR;

public:
	Principal();
	~Principal();

	void Executar();
};