#include <iostream>

using namespace std;

float mediaPond(float p[], float t[], int);

int main() {
    const int tamanhoVetor = 10;
    float notasProva[tamanhoVetor];
    float notasTrab[tamanhoVetor];

    for(int i=0; i< tamanhoVetor; i++){
    cout << "Digite a nota da prova"<< i + 1 << ":";
    cin >> notasProva[i];
    
    cout << "Digite a nota do trabalho"<< i + 1 << ":";
    cin >> notasTrab[i];
	}


	cout << "\nMédia: " << mediaPond(notasProva, notasTrab, tamanhoVetor) << "\n\n";
    return 0;
	
}

float mediaPond(float p[], float t[], int tamanho) {
    float mdp = 0;
    
    for (int i = 0; i < tamanho; ++i) {
        mdp += (p[i] * 6 + t[i] * 4) / 10;
    }
    
    return mdp / tamanho;
}

