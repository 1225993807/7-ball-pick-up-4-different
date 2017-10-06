#include<stdio.h>
int main()
{
	int a, b, c, d;
	int x, y;
	float z;
	x = 0;
	y = 0;
	for(a=1;a<=7;a++)
		for(b=1;b<=7;b++)
			for(c=1;c<=7;c++)
				for (d = 1; d <= 7; d++)
				{
					x++;
				}
	printf("total is %d.\n", x);

	for (a = 1; a <= 7; a++)
		for (b = 1; b <= 7; b++)
			for (c = 1; c <= 7; c++)
				for (d = 1; d <= 7; d++)
				{
					while (a != b)
						while (b != c)
							while (c != d)
								y++;
				}
	printf("different number is %d.\n", y);

	z = y / x;
	printf("the answer is &f.\n", z);
}