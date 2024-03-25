#pragma once
#include "Aluno.h"

class ListAluno {

private: 
	Aluno* alunoAtual;
	ListAluno* prox;
	ListAluno* ante;

public:
	ListAluno();
	~ListAluno();

	void AddAluno(Aluno* a);
	void PrintAlunos();
};