#include <stdio.h>

int main() {
  int a[5];
  int n;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=1; i<n+1; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */

	for(int j=0; j<5; j++){
		if(i % a[j] == 0){
			printf("%d", j);
		}
	}
	
	if((i%a[0]!=0) && (i%a[1]!=0) && (i%a[2]!=0) && (i%a[3]!=0) && (i%a[4]!=0)){
		printf("-");
	}

	printf("\n");
}
  return 0;
}
