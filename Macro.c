#include <stdio.h>

int main()
{
	printf("%lu\n",sizeof(int));
	printf("%lu\n",sizeof(double));
	printf("%lu\n",sizeof(char));
	printf("%lu\n",sizeof(unsigned int));
	
	printf("%lu\n",sizeof(int*));
	printf("%lu\n",sizeof(double*));
	printf("%lu\n",sizeof(char*));
	printf("%lu\n",sizeof(unsigned int*));
	
	return 1;
	
}
