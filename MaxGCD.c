#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d/%d",&a,&b);
	
	int c,g;
	int i,m,n;
	
	int min(int a,int b)
	{
		int c;
		if (a<=b)
		{
			c = a;
		}else
		{
			c = b;
		}
		return c;
	}
	c = min(a,b);

	int gcd(int a,int b)
	{
		int c;
		int i,m,n;
		c = min(a,b);
		for ( i=1; i<=c; i++)
		{
			m = a%i;
			n = b%i;
			if (m==0&&n==0)
			{
				g = i;
			}
		}
		return g;
	}
	
	g = gcd(a,b);
	while(g>1)
	{
		a = a / g;
		b = b / g;
		g = gcd(a,b);
	}

	printf("%d/%d\n",a,b);
	return 0;
}
