//printing all arithmetic operations
#include<stdio.h>
void main()
{
	int a,b,s,d,p,q,r;
	a = 100;
	b = 2;
	
	s = a+b;
	
	printf("*Sum of %d and %d is %d", a, b, s);
	
	d = a-b;
	
	printf("\n\t*Difference of %d and %d is %d", a, b, d);
	 
	q = a/b;
	
	printf("\n\t\t*Division of %d and %d is %d", a, b, q); 
	
	p = a*b;
	
	printf("\n\t\t\t*Multiplication of %d and %d is %d", a, b, p);
	
    r = a%b;
	
	printf("\n\t\t\t\t*Modular Division of %d and %d is %d", a, b, r);
	
}
