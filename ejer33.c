#include <stdio.h>
#include<stdlib.h>

int main(){
	int x,i=1,j=0;
	char l;
	printf("Proporcione la cantidad de letras en su nombre: ");
	scanf("%d",&x);
	printf("\nEscriba su nombre letra por letra:\n");
	while(i<=x){
	    printf("Escriba la letra numero %i: ",i);
	    fflush(stdin);
	    scanf("%c",&l);
		if (l=='a' || l=='A'){
			j=j+1;
		}
		i++;
		printf("%d\n",l);
	}
	printf("\nLa cantidad de letras 'A' o 'a' es: %d",j);
	return 0;
}
