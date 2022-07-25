#include <stdio.h>
int main(){
	long long a = __builtin_clzll(3);
	printf("a is %lld\r\n", a);
	return 1;
}
