#include <iostream>

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 3, b = 5;

    std::cout <<"Valores a: " << a << " b: " << b << std::endl;

    intercambiar(&a, &b);

    std::cout  <<"Valores intercambiados a: " << a << " b: " << b << std::endl;

    return 0;

}