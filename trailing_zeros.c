#include<stdio.h>
int trailing_zeros(int n);
int main()
{
	int num;
	printf("Enter a number to find trailing zeros:");
	scanf("%d",&num);
	printf("Number of trailing zeros of number %d is %d",num,trailing_zeros(num));
}
int trailing_zeros(int n) {

	int i,count = 0;
	 for (i = 5; n / i >= 1; i *= 5)
        count += n / i;

    return count;
}
