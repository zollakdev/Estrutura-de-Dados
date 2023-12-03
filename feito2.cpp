#include <iostream>

using namespace std;

void alteraNotas(float[], int);

int main() {
    const int tamanhoVetor = 30;
    float notasProva[tamanhoVetor];

    for (int i = 0; i < tamanhoVetor; ++i) {
        cout << "Digite a nota da prova " << i + 1 << ": ";
        cin >> notasProva[i];
    }

    cout << "\nNotas no vetor:\n";
    for (int i = 0; i < tamanhoVetor; ++i) {
        cout << "Prova " << i + 1 << ": " << notasProva[i] << endl;
    }

    alteraNotas(notasProva, tamanhoVetor);

    cout << "\nNotas alteradas no vetor:\n";
    for (int i = 0; i < tamanhoVetor; ++i) {
        cout << "Prova " << i + 1 << ": " << notasProva[i] << endl;
    }

    cout << "\nGostou?\n\n";
    system("pause");

    return 0;
}

void alteraNotas(float notas[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite a nova nota da prova " << i + 1 << ": ";
        cin >> notas[i];
    }
}

