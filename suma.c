#include <stdlib.h> //Standard library
#include <stdio.h> //Standard input / output

int main() {
    float a = 0;
    float b = 0;
      float c= 0;

        float d = 0;


    scanf("%f%*c", &a);
    scanf("%f%*c", &b);
    scanf("%f%*c", &c);
    scanf("%f%*c", &d);
    int result = a + b+c+d;

    printf("%f", result);

    return 0;
}
