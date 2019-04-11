#include <stdio.h>


//extern int g_i;
extern int getI();

int main(void){

    printf("%d\n",getI());//global default is 0
	//printf("%d\n",g_i);//global default is 0
    return 0;

}

