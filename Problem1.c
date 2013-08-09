#include <stdio.h>

int main(){
	int i, sum = 0;

	for(i = 3 ; i < 1000 ; i +=3){
		sum += i;
	}
	for(i = 5 ; i < 1000 ; i += 5){
		if(i % 3 != 0)
			sum += i;
	}
	printf("sum=%d\n", sum);

	return 0;
}
