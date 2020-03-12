#include <stdio.h>
#include <stdlib.h>
#include SIZE 25
#include <time.h>


int main(void)
{
 	int array[25]={0};
	printf("dies rolled");
	printer(array)
	randoNum(array)
	printer(array)
	
}

void printer(int array[25])
{
int i=0,
 for(i; i<30;i++)
	printf("array [%d] =%d\n"i,array[i]);

}

void randomNum(int array[25])
{
int random;
srand(time(0);

for(i=0;i<30;i++)
{

random=(rand)()%(20-55 +1) +55;
array[i]=random;
}

}

}
