#include <stdio.h>

int main(int argc, char *argv[])
{
	int n=2,day=0;
	float money=0,ave_cost_per_day;
	while (n<100) {
		money+=.8*n;
		day++;
		n*=2;
	}
	ave_cost_per_day=money/day;
	printf("The result is %.6f \n", ave_cost_per_day);
	return 0;
}
