#include <stdio.h>
#include <stdlib.h>

void main(){
float a, b, c, media; 

printf("Digite a primeira nota:");
scanf("%f",&a);

printf("Digite a segunda nota:");
scanf("%f",&b);

printf("Digite a terceira nota:");
scanf("%f",&c);

media=a+b+c;
media = media/3;


printf("A media e %2.f",media);


}
