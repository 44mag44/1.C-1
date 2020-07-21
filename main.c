/*
	Докажите, что всякое трёхзначное число, записанное одинаковыми цифрами, делится нацело на 37.  
*/
#include <stdio.h>

int main()
{
	int value=111; // first index
	int q=0;
	// cycle		
	for(int i=0; i < 9; i++, value+=111)
	{
		q=value/37;
		(q%10) 	? printf("value: %d,  q: %d\n", value, q) : perror("condition not met");
	}

	return 0;
}
