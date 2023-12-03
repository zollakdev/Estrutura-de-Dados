#include <iostream>
#include <string>

const int MAX_ALUNOS = 50;

struct Aluno {
    int Mat;
    char Nome[50];
    float n1;
    float n2;
};


float calcularMedia(struct Aluno aluno) {
    return (aluno.n1 + aluno.n2) / 2.0;
}

int main() {
    struct Aluno turma[MAX_ALUNOS];
    int numAlunos;


    std::cout << "Informe o n�mero de alunos na turma (at� " << MAX_ALUNOS << "): ";
    std::cin >> numAlunos;

    if (numAlunos < 1 || numAlunos > MAX_ALUNOS) {
        std::cout << "N�mero de alunos inv�lido." << std::endl;
        return 1;
    }


    for (int i = 0; i < numAlunos; i++) {
        std::cout << "Informe os dados do aluno " << i + 1 << ":\n";
        turma[i].Mat = i + 1;
        std::cout << "Matr�cula: " << turma[i].Mat << std::endl;
        std::cout << "Nome: ";
        std::cin >> turma[i].Nome;
        std::cout << "Nota 1: ";
        std::cin >> turma[i].n1;
        std::cout << "Nota 2: ";
        std::cin >> turma[i].n2;
    }


    std::cout << "M�dias dos alunos:\n";
    for (int i = 0; i < numAlunos; i++) {
        float media = calcularMedia(turma[i]);
        std::cout << "Aluno " << i + 1 << " - Matr�cula: " << turma[i].Mat
                  << ", Nome: " << turma[i].Nome << ", M�dia: " << media << std::endl;
    }

    return 0;
}

//ALUNO DAVI N MATTOS - 202303559305

