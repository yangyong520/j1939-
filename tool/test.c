#include <stdio.h>
 
struct WE
{
	unsigned  char a : 1;  //λ����Ϊ1 
	unsigned  char b : 2;  //λ����Ϊ3 
}cat;
 
 
int main()
{
	printf("%d\n",sizeof(cat)); 
	return 0; 
 }  