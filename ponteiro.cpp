#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
float *ptF= new float;
int *ptI= new int(1989);
int *pt= new int[3];
*ptF=34.5;
*(pt)=34; *(pt+1)=55; *(pt+2)=90;
cout<<"\n\nConteudo de pt : "<<pt;
cout<<"\tconteudo do endereco apontado: "<<*pt;
cout<<"\n\nConteudo de ptI: "<<ptI;
cout<<"\tconteudo do endereco apontado: "<<*ptI;
cout<<"\n\nConteudo de ptF: "<<ptF;
cout<<"\tconteudo do endereco apontado: "<<*ptF;
cout<<"\n\nConteudo do vetor\n";
cout<<"\n"<<*pt<<"\t"<<*(pt+1)<<"\t"<<*(pt+2);
delete ptF; delete ptI; delete pt;
cout<<"\n\n"; system("pause");
}
