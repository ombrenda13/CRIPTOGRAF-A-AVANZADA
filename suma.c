#include <stdlib.h> //Standard library
#include <stdio.h> //Standard io


int main() {
  int numeros,i,a,result=0;
  
  
    scanf("%d", &numeros);

    for(i=0;i<numeros;i++){
        scanf("%d", &a);
        result=result+a;
    }
   

    printf("%d", result);

    return 0;
}

