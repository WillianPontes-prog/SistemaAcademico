#include "Universidade.h"

Universidade::Universidade(string nome){
	nomeU = nome;
}

Universidade::~Universidade()
{
}

string Universidade::GetNome()
{
	return nomeU;
}
