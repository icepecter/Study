#include <stdio.h>

int main(void)
{
	// 연산자
	/*int num;
	printf("Start!!\n");
	printf("양의 정수를 입력:  "), scanf_s("%d", &num);
	printf("출력:  %d \n", num);*/

	/*int num1, num2, total = 0;
	printf("양의 정수를 두번 적으시오!");
	printf("입력: "), scanf_s("%d %d", &num1, &num2);
	
	total = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, total);

	total = num1 * num2;
	printf("%d * %d = %d\n", num1, num2, total);

	total = num1 / num2;
	printf("%d / %d = %d\n", num1, num2, total);

	total = num1 % num2;
	printf("%d %% %d = %d\n", num1, num2, total);*/

	/*int num1 = 3;
	int num2 = 4;
	int result = num1 + num2;

	printf("덧셈 결과: %d \n", result);
	printf("%d+ %d = %d\n", num1, num2, result);
	printf("%d와(과) %d의 합은 %d입니다.\n", num1, num2, result);*/

	
	/*int num1 = 9, num2 = 2;
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d x %d = %d \n", num1, num2, num1 * num2);
	printf("%d / %d 의 몫= %d \n", num1, num2, num1 / num2);
	printf("%d %% %d 의 나머지= %d \n", num1, num2, num1 % num2);*/

	// 복합 대입 연산자
	/*int num1 = 2, num2 = 4, num3 = 6;
	num1 += 3;
	num2  *= 4;
	num3 %= 5;
	printf("Result: %d, %d, %d \n", num1, num2, num3);*/

	//int num1 = 12;
	//int num2 = 12;

	//// 후위 증가
	//printf("num1:  %d\n", num1);
	//printf("num1++: %d\n", num1++);
	//printf("num1: %d \n\n", num1++);

	//// 전위 증가
	//printf("num2: %d\n", num2);
	//printf("++num2: %d \n",++num2);
	//printf("num2: %d \n", num2);


	/*int num1 = 10;
	int num2 = (num1--) + 2;

	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);*/

	/*int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == num2);
	result2 = (num1 < num2);
	result3 = (num1 > num2);

	printf("result1: %d \n", result1);
	printf("result2: %d \n" ,result2);
	printf("result3: %d \n", result3);*/

	/*int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 ==10 && num2==12);
	result2 = (num1 < 12 || num2 > 12);
	result3 = (!num1 );

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);*/

	/*int result;
	int num1, num2;

	printf("정수 one: ");
	scanf_s("%d", &num1);

	printf("정수 two: ");
	scanf_s("%d",&num2);

	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);*/

	/*float fnum1, fnum2;
	printf("두개의 실수를 입력: ");
	scanf_s("%f %f", &fnum1, &fnum2);

	printf("%f x %f = %F\n", fnum1, fnum2, fnum1 * fnum2);*/

	/*double dnum1, dnum2;
	printf("두개의 실수를 입력: ");
	scanf_s("%lf %lf", &dnum1, &dnum2);

	printf("%f + %f = %f\n", dnum1, dnum2, dnum1 + dnum2);
	return 0;*/

	int num1 = 0xA7, num2 = 0x43;
	int num3 = 032, num4 = 024;

	printf("0xA7의 10진수인 정수 값: %d \n", num1);
	printf("0x43의 10진수인 정수 값: %d \n", num2);
	printf(" 032의 10진수인 정수 값: %d \n", num3);
	printf(" 024의 10진수인 정수 값: %d \n", num4);

	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d + %d = %d\n", num3, num4, num3 + num4);
	return 0;
}