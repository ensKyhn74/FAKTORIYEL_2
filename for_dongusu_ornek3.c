#include <stdio.h>
// klavyeden girilen sayıya kadarki sayıların faktoriyelini alt alta yazdır 

int main() 

{
 
 int fact = 1; 
 int sayi;
 int i;
    
 printf("Bir sayi giriniz: ");
 scanf("%d",&sayi);
    
 for(i = 1 ; i <= sayi ; i++)
 {
  fact *= i;         
  printf("%d! = %d\n",i,fact);    
 }
  
 return 0;

}