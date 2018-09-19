#include <stdio.h>

int main(int argc, char *argv[])
{
	int a,b,c;
	for (a = 1; a <= 3; ++a) 
		for (b = 1; b <= 3; ++b) 
			for (c = 1; c <= 3; ++c) 
				if (a!=1 && c!=1&&c!=3&&a!=b&&a!=c&&b!=c)
				{
					printf("%c 将嫁给A\n", 'X'+a-1);
					printf("%c 将嫁给B\n", 'X'+b-1);
					printf("%c 将嫁给C\n", 'X'+c-1);
				}
	return 0;
}
