#include <stdio.h> 

void bin(unsigned long); 

int main(void){ 
unsigned long a; 
scanf("%lu",&a);
printf("Binary equivalent: "); 
bin(a); 
putchar('\n'); 
return 0; 
} 

void bin(unsigned long a){ //Recursive function 
int g; 
g=a%2; 
if (a>=2) 
bin(a/2); 
putchar(g==0 ? '0' : '1'); 
} 