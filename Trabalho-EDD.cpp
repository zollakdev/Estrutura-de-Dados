#include <iostream>
#include <string>
//ALUNO DAVI N MATTOS - 202303559305
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


    std::cout << "Informe o numero de alunos na turma (ate" << MAX_ALUNOS << "): ";
    std::cin >> numAlunos;

    if (numAlunos < 1 || numAlunos > MAX_ALUNOS) {
        std::cout << "Numero de alunos invalido." << std::endl;
        return 1;
    }


    for (int i = 0; i < numAlunos; i++) {
        std::cout << "Informe os dados do aluno " << i + 1 << ":\n";
        turma[i].Mat = i + 1;
        std::cout << "Matricula: " << turma[i].Mat << std::endl;
        std::cout << "Nome: ";
        std::cin >> turma[i].Nome;
        std::cout << "Nota 1: ";
        std::cin >> turma[i].n1;
        std::cout << "Nota 2: ";
        std::cin >> turma[i].n2;
    }


    std::cout << "Medias dos alunos:\n";
    for (int i = 0; i < numAlunos; i++) {
        float media = calcularMedia(turma[i]);
        std::cout << "Aluno " << i + 1 << " - Matricula: " << turma[i].Mat
                  << ", Nome: " << turma[i].Nome << ", Media: " << media << std::endl;
    }

    return 0;
}

//ALUNO DAVI N MATTOS - 202303559305

