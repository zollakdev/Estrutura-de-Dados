#include <iostream>

using namespace std;

typedef struct {
   int matricula;
   float notas[3];
} Aluno;

void LeAluno(Aluno &aluno) {
    cout << "coloque a sua matricula: ";
    cin >> aluno.matricula;

    cout << "Digite suas 3 notas: ";
    for (int i = 0; i < 3; i++) {
        cin >> aluno.notas[i];
    }
}


float CalculaMediaAluno(const Aluno &aluno) {
    float md = 0;
    for (int i = 0; i < 3; i++) {
        md += aluno.notas[i];
    }
    return md / 3.0;
}


void ImprimeTurma(const Aluno Turma[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Aluno " << Turma[i].matricula << " - Media = " << CalculaMediaAluno(Turma[i]) << endl;
    }
}

int main() {
    Aluno Turma[5];

    for (int i = 0; i < 5; i++) {
        LeAluno(Turma[i]);
    }

    ImprimeTurma(Turma, 5);

    return 0;
}
