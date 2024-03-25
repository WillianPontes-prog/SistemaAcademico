#include "Aluno.h"

Aluno::Aluno(int dia, int mes, int ano, string nome, Universidade* universidadeAssociada):
	Pessoa(dia,mes,ano,nome)
{
	uniP = universidadeAssociada;
}

Aluno::~Aluno(){}

void Aluno::InfoAluno(){
	InfoPessoa();
	cout << "Universidade associada: " << uniP->GetNome() << endl;
}
