#include <stdio.h>
 
struct WE
{
	unsigned  char a : 1;  //位域宽度为1 
	unsigned  char b : 2;  //位域宽度为3 
}cat;
 
 
int main()
{
	printf("%d\n",sizeof(cat)); 
	return 0; 
 }  