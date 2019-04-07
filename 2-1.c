#include <stdio.h>

int main(void){
	int c = -5;
	short s = 6;
	int i = -7;

	printf("%d\n",( (c & 0x80) != 0 ));
	printf("%d\n",( (s & 0x8000) != 0 ));
	printf("%d\n",( (i & 0x80000000) != 0 ));
	return 0;

}

//for unsigned
//MAX_VALUE + 1 -> MIN_VALUE
//MIN_VALUE - 1 -> MAX_VALUE
