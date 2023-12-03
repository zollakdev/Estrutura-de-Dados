#include <iostream>
using namespace std;

// Protótipos de funções
void insercao(int vet[], int tam);
void selecao(int vet[], int tam);

int main(int argc, char** argv) {
    int tam;

    cout << "Digite o tamanho do vetor: ";
    cin >> tam;

    int* vetor = new int[tam];

    for (int i = 0; i < tam; i++) {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    selecao(vetor, tam);
    cout << "Ordem por selecao: \n";
    for (int i = 0; i < tam; i++) {
        cout << vetor[i] << endl;
    }

    insercao(vetor, tam);
    cout << "Ordem por insercao (reversa): \n";
    for (int i = tam - 1; i >= 0; i--) {
        cout << vetor[i] << endl;
    }

    delete[] vetor; 

    system("pause");
    return 0;
}



void insercao(int vet[], int tam) {
    int j, i, aux;
    for (i = 1; i < tam; i++) {
        aux = vet[i];
        for (j = i; j > 0 && aux < vet[j - 1]; j--)
            vet[j] = vet[j - 1];
        vet[j] = aux;
    }
}

void selecao(int vet[], int tam) {
    int j, i, aux, temp;
    for (i = 0; i < tam - 1; i++) {
        aux = i;
        for (j = i + 1; j < tam; j++)
            if (vet[aux] > vet[j]) aux = j;
        temp = vet[aux];
        vet[aux] = vet[i];
        vet[i] = temp;
    }
}

