#include <stdio.h>

int main(void)
{
  double A; 
    int B;   

    scanf("%lf", &A);
    scanf("%d", &B);

    printf("%.*f\n", B, A);

  
  return 0;
}
