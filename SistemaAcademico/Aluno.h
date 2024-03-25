#pragma once
#include "Pessoa.h"
#include "Universidade.h"

class Aluno : public Pessoa
{
private:
	Universidade* uniP;

public:
	Aluno(int dia = 0, int mes = 0, int ano = 0, string nome = "", Universidade* universidadeAssociada = NULL);
	~Aluno();

	void InfoAluno();

};

