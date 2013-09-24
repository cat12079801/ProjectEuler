#include <stdio.h>
#include <math.h>

int get_pythagoras(int x, int y);
void check_pythagoras(int x, int y, int z);

int main(){
	int a, b, c, i;

	for(a = 1 ; a < 999 ; a++){
		b = 1;
		while(a + b < 1000){
			c = get_pythagoras(a, b);
			if(c != 0)
				check_pythagoras(a, b, c);
			b++;
		}
	}

	return 0;
}


int get_pythagoras(int x, int y){
	double z;

	z = x*x + y*y;
	z = sqrt(z);

	if(z == (int)z)
		return z;
	else
		return 0;
}


void check_pythagoras(int x, int y, int z){
	if(x + y + z == 1000)
		printf("%d\n", x * y * z);
}
