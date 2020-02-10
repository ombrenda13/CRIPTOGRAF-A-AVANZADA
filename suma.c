#include <stdlib.h> //Standard library
#include <stdio.h> //Standard io


int main() {
  int numeros=0,i,a=0,result=0;


    scanf("%i%*c", &numeros);

    for(i=0;i<numeros;i++){
        scanf("%i%*c" &a);
        result=result+a;
    }


    printf("%i", result);

    return 0;
}
