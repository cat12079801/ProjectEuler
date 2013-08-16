#include <stdio.h>
#include <math.h>

int seeker(int, int);

int main(){
	int i, target = 2;
	for(i = 2 ; i <= 20 ; i++){
		target = seeker(i, target);
	} 
	printf("Answer=%d\n", target);

	return 0;
}

int seeker(int x, int y){
	int num[100], set[100], i, max = 1, ans = 1;

	for(i = 0 ; i < 100 ; i++){
		num[i] = 0;
		set[i] = 0;
	}

	for(i = 2 ; x > 1 ;){
		if(x % i == 0){
			x /= i;
			num[i]++;
			if(max < i)
				max = i;
			continue;
		}
		i++;
	}
	for(i = 2 ; y > 1 ;){
		if(y % i == 0){
			y /= i;
			set[i]++;
			if(max < i)
				max = i;
			continue;
		}
		i++;
	}

	for(i = 2 ; i < max + 1 ; i++){
		if(num[i] - set[i] < 0)
			num[i] += set[i] - num[i];
	}
	
	for(i = 2 ; i < max + 1 ; i++){
		if(num[i] > 0)
			ans *= pow(i, num[i]);
	}

	return ans;
}
