#include "tink/buffer.hpp"
#include <stdio.h>

int main()
{
	for(int i=0; i<1000; i++) {
		if ((63 ^ i) == 14) printf("%d\n", i);
	}
	return 0;
}
