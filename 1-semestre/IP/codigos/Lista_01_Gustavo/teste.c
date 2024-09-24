#include <stdio.h>
#include <math.h>


int main()
{
    
    float n;
    
    scanf("%f", &n);
    
    
   float primeiro = round(n *10);
   
  
    
 float segundo = round(n * 100);
 
  float terceiro = round(n * 1000);
    
    
        printf("%.6f\n", primeiro/10);
    printf("%.6f\n", segundo/100);
        printf("%.6f\n", terceiro/1000);

    return 0;
}