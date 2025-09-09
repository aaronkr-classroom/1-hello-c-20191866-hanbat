// Nums.c
#include <stdio.h>
#include <limits.h> //�ִ� ��,�ּ� �� ���


int main(void) {
	// char					:		1byte		(����)
	char ch = 'A';
	printf("char : \n");
	printf("Value : %c\n",ch);
	printf("Max : %d\n",CHAR_MAX); //limit.h �� ���
	printf("Min : %d\n",CHAR_MIN);

	// signed short int		:		2byte		(����)
	signed short int sshort = 1234;
	printf("\nsinged short int : \n");
	printf("Value : %d\n", sshort);
	printf("Max : %d\n", SHRT_MAX); 
	printf("Min : %d\n", SHRT_MIN);

	// unsigned shot int	:		2byte		(����)
	unsigned short int ushort = 1234U;
	printf("\nunsinged short int : \n");
	printf("Value : %d\n", ushort);
	printf("Max : %d\n", USHRT_MAX);

	// signed int			:		4byte		(����)
	signed int sint = 12345;
	printf("\nsinged int : \n");
	printf("Value : %d\n", sint);
	printf("Max : %d\n", INT_MAX);
	printf("Min : %d\n", INT_MIN);

	// unsigned int			:		4byte		(����)
	unsigned int uint = 12345U;
	printf("\nunsinged int : \n");
	printf("Value : %d\n", uint);
	printf("Max : %d\n", UINT_MAX);

	// long�� �ٸ� �ü��(os)���� �ٸ� ����Ʈ ũ���Դϴ�.
	// ���� 4����Ʈ�ε�, Linux/Unix/Mac ���� 8����Ʈ �Դϴ�.
	// Window���� long long => 8����Ʈ ����� �� �ִ�. 

	// signed long int		:		4byte		(����)
	signed long int slong = 123456789L;
	printf("\nsinged long int : \n");
	printf("Value : %d\n", slong);
	printf("Max : %d\n", LONG_MAX);
	printf("Min : %d\n", LONG_MIN);

	// unsigned long int	:		4byte		(����)
	unsigned long int ulong = 123456789UL;
	printf("\nunsinged long int : \n");
	printf("Value : %d\n", ulong);
	printf("Max : %d\n", ULONG_MAX);

	// float				:		4byte		(�Ǽ�)   => �׻� ��ȣ �ִ�
	float f = 123.456f;
	printf("\nfloat f : \n");
	printf("Value : %.1f\n", f);
	//printf("Max : %f\n", FLT_MAX);
	//printf("Min : %f\n", FLT_MIN);

	// double				:		8byte		(�Ǽ�)   => �׻� ��ȣ �ִ�
	double d = 123456.7890123f;
	printf("\ndouble d : \n");
	printf("Value : %.3f\n", d);
	//printf("Max : %f\n", DBL_MAX);
	//printf("Min : %f\n", DBL_MIN);
	return 0;
}