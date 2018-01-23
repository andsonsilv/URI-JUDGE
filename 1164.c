#include <stdio.h>
 
int main(){
 
	int numl, cont1 = 0;
	scanf("%d",&numl);
	if(1 <= numl && numl <= 20){
			 while(cont1 < numl){
						 int num;
						 int cont2 = 1;
						 int res = 0;
						 int numper = 0;
						 scanf("%d",&num);
						 while(cont2 < num){
								 res = num % cont2;
								 if(res == 0){
											numper = numper + cont2;	
									}  

									cont2++;
						 }
						 if(num==numper){
						 printf("%d eh perfeito\n",num);
 						 }else{printf("%d nao eh perfeito\n",num);
					}
					cont1++;
		}

	}
	
	return 0;
	
}   	