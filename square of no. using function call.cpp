#include<stdio.h>
float square(float);
int main()
{
	float a,b;
	printf("enter any number: ");
	scanf("%f",&a);
	
	b=square (a);
	printf("square of %f is:%f\n",a,b);
	return 0;
}
float square (float q)
{
	float r;
	r=q*q;
	return (r);
}
