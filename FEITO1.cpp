#include <iostream>

using namespace std;

struct NotaAluno {
    float prova;
    float trabalho;
};

float mediaPond(NotaAluno[], int);

int main() {
    const int tamanhoVetor = 10;
    NotaAluno notas[tamanhoVetor];

    for (int i = 0; i < tamanhoVetor; ++i) {
        cout << "Digite a nota da prova " << i + 1 << ": ";
        cin >> notas[i].prova;

        cout << "Digite a nota do trabalho " << i + 1 << ": ";
        cin >> notas[i].trabalho;
    }

    cout << "\nMedia: " << mediaPond(notas, tamanhoVetor) << "\n\n";

    return 0;
}

float mediaPond(NotaAluno notas[], int tamanho) {
    float somaNotas = 0;
    
    for (int i = 0; i < tamanho; ++i) {
        somaNotas += (notas[i].prova * 6 + notas[i].trabalho * 4) / 10;
    }
    
    return somaNotas / tamanho;
}

