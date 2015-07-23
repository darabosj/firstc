// C program demostration for parameter using
//
//
//
//
// GPL 

#include <stdio.h>

// Main
int main(int argc,char **argv)
{
	int i;
	printf("First \n");
	printf("Argc : %i\n",argc);
	for(i=0;i<argc;i++){
		printf("argv: %s\n",argv[i]);
		}
	return 0;
}

