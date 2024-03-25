#include "ListAluno.h"

ListAluno::ListAluno(){
	alunoAtual = NULL;
	prox = NULL;
	ante = NULL;
}

ListAluno::~ListAluno(){
}

void ListAluno::AddAluno(Aluno* a){

	if (alunoAtual == NULL) {
		alunoAtual = a;
	}
	else {
		if (prox == NULL) {
			prox = new ListAluno();
		}

		prox->AddAluno(a);
	}
}

void ListAluno::PrintAlunos(){
	if (alunoAtual != NULL) {
		alunoAtual->InfoAluno();
	}

	if (prox != NULL) {
		prox->PrintAlunos();
		cout << endl;
	}
}


