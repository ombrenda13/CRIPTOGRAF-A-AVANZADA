#include <stdlib.h> //Standard library
#include <stdio.h> //Standard input / output

int main() {
    int a = 0;
    int b = 0;
        int c= 0;

        int d = 0;


    scanf("%i%*c", &a);
    scanf("%i%*c", &b);
    scanf("%i%*c", &c);
    scanf("%i%*c", &d);
    int result = a + b+c+d;

    printf("%i", result);

    return 0;
}
