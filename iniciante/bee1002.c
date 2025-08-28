#include <stdio.h>

int main(void) {

    double PI = 3.14159;
    double area;
    double raio;

    scanf("%lf", &raio);

    area = (raio * raio) * PI;

    printf("A=%.4lf\n", area);
    
    return 0;
    
}