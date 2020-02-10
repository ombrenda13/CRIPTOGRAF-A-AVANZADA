#include <stdlib.h> //Standard library
#include <stdio.h> //Standard io


int main() {
    int n=0;
    int a = 0;
    int b = 0;
    int i=0;
    int result=0;
    scanf("%i%*c", &n);
    for(i;i<n;i++){
      scanf("%i%*c", &a);
      int result=result+a;
    }
  //  scanf("%i%*c", &a);
  //  scanf("%i%*c", &b);
 //   int result = a + b;
    printf("%i", result);
    return 0;
}
