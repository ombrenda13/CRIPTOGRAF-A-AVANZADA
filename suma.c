#include <stdlib.h> //Standard library
#include <stdio.h> //Standard io


int main() {
    int n=0;
    int a = 0;
    int b = 0;
    
    int result=0;
    scanf("%i%*c", &n);
    for(int i=0;i<n;i++){
      scanf("%i%*c", &a);
      result=result+a;
    }
  //  scanf("%i%*c", &a);
  //  scanf("%i%*c", &b);
 //   int result = a + b;
    printf("%i", result);
    return 0;
}
