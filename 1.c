#include <stdio.h>
int main()
{
int i,j,c, n;
printf("\n Enter the number of elements in array  :   ");
scanf("%d", &n);
int a[n], b[n];
printf("\n Enter the elements of array :  ");
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
b[i] = -1;
}
for (i = 0; i < n; i++)
{
c = 1;
for(j = i + 1; j < n; j++)
{
if(a[i] == a[j])
{
c++;
b[j] = 0;
}
}
if(b[i] != 0)
{
b[i] = c;
}
}
printf("\n The Frequency of the elements in this Array is : \n");
for (i = 0; i < n; i++)
{
if(b[i] != 0)
  		{
  			printf("%d O%d Times \n", a[i], b[i]);
		}
  	}
 	return 0;
}
