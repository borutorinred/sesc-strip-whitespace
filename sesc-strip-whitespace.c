#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	long long a;
	scanf("%lli", &a);
	
	long long n2 = 0, n5 = 0;

	for (long long i = 1, j; i <= a; j = ++i) {
		for (; j % 2 == 0; j /= 2)
			n2++;

		for (; j % 5 == 0; j /= 5)
			n5++;
	}
	
	printf("%lli\n", n2 < n5 ? n2 : n5);
	return 0;
}
