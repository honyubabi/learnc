#include <stdio.h>

int f1(){
	int r = 0;
	r++;
	return r;
}	

int f2(){
	static int r = 0;
	r++;
	return r;
}

int main(void){
	auto int i = 0;
	static int k = 0;
	register int j = 0;

	printf("%p\n",&i);
	printf("%p\n",&k);
//	printf("%p\n",&j);

	for(int i = 0; i < 5;i++){
		printf("%d\n",f1());
	}
	for(int i = 0; i < 5;i++){
		printf("%d\n",f2());
	}

}
