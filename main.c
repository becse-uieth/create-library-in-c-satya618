#include"header.h"
#include"prototype.h"
int main()
{
	
	int a,b;
	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	
	printf("addition=%d\n",add(a,b));
	printf("subtraction=%d\n",su(a,b));
	printf("multiplication=%d\n",mu(a,b));
	printf("division=%d\n",div(a,b));

	return 0;
}
