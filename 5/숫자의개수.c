#include <stdio.h>

int main(){
	long long a, b, c;
	int counts[10] = {0};

	if (scanf("%lld %lld %lld", &a, &b, &c) != 3){
		return 1;
	}

	long long product = a * b * c;
	while (product > 0){
		counts[product % 10]++;
		product /= 10;
	}

	for (int i = 0; i < 10; i++){
		printf("%d\n", counts[i]);
	}

	return 0;
}
