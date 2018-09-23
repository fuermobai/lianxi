#include <stdio.h>

int main(int argc, char *argv[])
{
	int i,j,t,a[11];
	printf("请输入10个数：\n");
	for (i = 1; i < 10; ++i) {
		scanf("%d",&a[i]);
	}
	for (i = 1; i < 10; ++i) {
		for (j = 0; j < 11-i; ++j) {
			if (a[j]>a[j+1]) {
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("排序后的顺序是：\n");
	for (i = 1; i <=10; ++i) {
		printf("%5d\n", a[i]);
	}
	printf("\n");
	return 0;
}
