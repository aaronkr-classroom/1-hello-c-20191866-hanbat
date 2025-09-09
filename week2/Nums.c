// Nums.c
#include <stdio.h>
#include <limits.h> //최대 값,최소 값 출력


int main(void) {
	// char					:		1byte		(문자)
	char ch = 'A';
	printf("char : \n");
	printf("Value : %c\n",ch);
	printf("Max : %d\n",CHAR_MAX); //limit.h 의 상수
	printf("Min : %d\n",CHAR_MIN);

	// signed short int		:		2byte		(정수)
	signed short int sshort = 1234;
	printf("\nsinged short int : \n");
	printf("Value : %d\n", sshort);
	printf("Max : %d\n", SHRT_MAX); 
	printf("Min : %d\n", SHRT_MIN);

	// unsigned shot int	:		2byte		(정수)
	unsigned short int ushort = 1234U;
	printf("\nunsinged short int : \n");
	printf("Value : %d\n", ushort);
	printf("Max : %d\n", USHRT_MAX);

	// signed int			:		4byte		(정수)
	signed int sint = 12345;
	printf("\nsinged int : \n");
	printf("Value : %d\n", sint);
	printf("Max : %d\n", INT_MAX);
	printf("Min : %d\n", INT_MIN);

	// unsigned int			:		4byte		(정수)
	unsigned int uint = 12345U;
	printf("\nunsinged int : \n");
	printf("Value : %d\n", uint);
	printf("Max : %d\n", UINT_MAX);

	// long은 다른 운영체제(os)에서 다른 바이트 크기입니다.
	// 보통 4바이트인데, Linux/Unix/Mac 에서 8바이트 입니다.
	// Window에서 long long => 8바이트 사용할 수 있다. 

	// signed long int		:		4byte		(정수)
	signed long int slong = 123456789L;
	printf("\nsinged long int : \n");
	printf("Value : %d\n", slong);
	printf("Max : %d\n", LONG_MAX);
	printf("Min : %d\n", LONG_MIN);

	// unsigned long int	:		4byte		(정수)
	unsigned long int ulong = 123456789UL;
	printf("\nunsinged long int : \n");
	printf("Value : %d\n", ulong);
	printf("Max : %d\n", ULONG_MAX);

	// float				:		4byte		(실수)   => 항상 부호 있다
	float f = 123.456f;
	printf("\nfloat f : \n");
	printf("Value : %.1f\n", f);
	//printf("Max : %f\n", FLT_MAX);
	//printf("Min : %f\n", FLT_MIN);

	// double				:		8byte		(실수)   => 항상 부호 있다
	double d = 123456.7890123f;
	printf("\ndouble d : \n");
	printf("Value : %.3f\n", d);
	//printf("Max : %f\n", DBL_MAX);
	//printf("Min : %f\n", DBL_MIN);
	return 0;
}