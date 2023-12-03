#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


// prototipos funções

void insercao(int vet[], int tam);
void selecao(int vet[], int tam);

int main(int argc, char** argv) {
	int i, vetor[3];
	
	for(i=0; i<3; i++)
	{
	   cout<<"Digite um numero : ";
	   cin >>vetor[i];
	}
	
	selecao(vetor,3);
	cout<<"Ord por selecao \n";
	for(i=0; i<3; i++)
  	{  cout<< vetor[i]<< endl;
	}
	
	insercao(vetor,3);
	cout<<"Ord por insercao \n";
	for(i=0; i<3; i++)
	{
	  cout<< vetor[i]<< endl;
	}
	
	system("pause");
	return 0;
}


//implementação funçoes 

void insercao(int vet[], int tam)
{
  int j,i, aux;
  for (i=1;i<tam;i++)
  {  aux = vet[i];
    for(j=i; j>0 && aux <vet[j-1]; j--)
      vet[j]=vet[j-1];
    vet[j]=aux;  
   }
}

void selecao(int vet[], int tam)
{  int j, i, aux,temp;
  for ( i=0; i<tam -1; i++)
  {   aux = i;
    for(j=i+1; j<tam; j++)
     if(vet[aux] > vet[j] )  aux=j;
    temp=vet[aux];
    vet[aux]= vet[i];
    vet[i]=temp;
   }
}

