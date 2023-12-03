#include <iostream>
using namespace std;

int main(){
float nota[6];
float md;
float lua;


for (int i= 0; i <= 5; i++){
	cout<<"digite sua nota "<<i<<": ";
	cin>>nota[i];
	lua += nota[i] / 5;
}

if (lua>=5){
	cout<<"Você passou!!! com media:" << lua;
}
else{
	"Você está em prova final";
}
	return 0;
}
