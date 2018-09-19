#include <stdio.h>

void main()
{
    int i,x,y,z=1;
    printf("请输入两个数，x和y（x^y）:\n");
    scanf("%d%d",&x,&y);
    for (i = 0; i < y; ++i) {
    	z=z*x%1000;
    }
    if (z>=100) {
    	printf("%d ^ %d的最后三位是：%d\n", x,y,z);
    } else {
    	printf("%d ^ %d的最后三位是：0%d\n",x,y,z);
    }
}
