#include <stdio.h>

int main()
{
	for(int i=0; i<10; i++) {
		if ((3 ^ i) == 6) printf("%d\n", i);
	}
	return 0;
}
