#include <stdio.h>
#define R 3
#define C 3
void spiralmatrixprint(int m,int n,int a[R][C])
{
	int k=0,l=0,i;
	while(k<m && l<n)
	{
		for(i=l;i<n;i++)
			printf("%d\t",a[k][i]);
		k++;

		for(i=k;i<m;i++)
			printf("%d\t",a[i][n-1]);
		n--;
                if(k<m)
		{
		for(i=n-1;i>=l;i--)
			printf("%d\t",a[m-1][i]);
		m--;
		}
		if(l<n)
		{
		for(i=m-1;i>=k;i--)
			printf("%d\t",a[i][l]);
		l++;
		}
	}
}



int main()
{
	int a[R][C]={
		     {3,4,5},
		     {1,2,3},
		     {10,11,12}
		    };

	spiralmatrixprint(R,C,a);
	printf("\n");
        return 0;
}
