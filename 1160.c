#include <stdio.h>

int main(){
		int T, PA, PB;
		double G1, G2;
		scanf("%d",&T);
		while(T--){
			int result = 0;
			scanf("%d %d %lf %lf",&PA, &PB, &G1, &G2);
			int auxa = PA;
			int auxb = PB;
			while(auxa <= auxb && result <= 100){
				auxa += auxa * (G1/100.0);
				auxb += auxb * (G2/100.0);
				result++;
			}
			if(result > 100){
				printf("Mais de 1 seculo.\n");
			}else{
				printf("%d anos.\n",result);
			}
		}
		return 0;
}
