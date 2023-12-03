#include <iostream>
#include <math.h>

void contas(float a, float b, float c, float *x1, float *x2) {
float bhaskara = b * b + 4 * a * c;

if (bhaskara > 0){
	*x1 = (-b + sqrt(bhaskara) / (2*a));
	*x2 = (-b - sqrt(bhaskara) / (2*a));
}
else if (bhaskara == 0) {
        *x1 = *x2 = -b / (2 * a);
    } else {
        *x1 = *x2 = 0; 
    }
}


int main(int argc, char** argv) {
	float a, b , c, x1, x2;
	
	std::cout << "Digite o valor de a: ";
    std::cin >> a;
    std::cout << "Digite o valor de b: ";
    std::cin >> b;
    std::cout << "Digite o valor de c: ";
    std::cin >> c;
	
	contas(a, b, c, &x1, &x2);

    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);

    return 0;
}
