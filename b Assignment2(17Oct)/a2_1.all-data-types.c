#include<stdio.h>
int main()
{
	char a;
	int b;
	long int c;
	short int d;
	long long int e;
	float f;
	double g;
	long double h;

	printf("Enter values\n");
	scanf(" %c %d %ld %hd %lld %f %lf %Lf ", &a, &b, &c, &d, &e, &f, &g, &h);
	printf("%c\n %d\n %ld\n %hd\n %lld\n %f\n %lf\n %Lf\n", a, b,c,d,e,f,g,h);

    unsigned char i;
	unsigned int j;
	unsigned long int k;
	unsigned short int l;
	unsigned long long int m;
	
	printf("Enter values\n");
	scanf(" %d %u %lu %hu %llu", &i, &j, &k, &l, &m);
	printf("%d\n %u\n %lu\n %hu\n %llu\n ", i, j,k,l,m);
	return 0;
	
}
