#include <math.h>
#include <stdio.h>
#define PINT_PER_CUP 2
#define CUP_PER_OUNCE 8
#define OUNCE_PER_BIGSPOON 2
#define BIGSPOON_PER_TEASPOON 3
void task2(void);
void task3(void);
void task4(void);
void task5(void);
void task6(void);
void task7(void);
void task8(void);

int main(void) {
	task2();
	printf("\n");
	printf("\n");
	task3();
	printf("\n");
	printf("\n");
	task4();
	printf("\n");
	printf("\n");
	task5();
	printf("\n");
	printf("\n");
	task6();
	printf("\n");
	printf("\n");
	task7();
	printf("\n");
	printf("\n");
	task8();
}

void task2(void) {
	int char1 = 66;

	printf("������һ��ASCII��ֵ:");
	//scanf_s("%d", &char1);
	printf("������ַ�Ϊ:%c", char1);

}

void task3(void) {
	printf("\a");
	printf("Startled by the sudden sound,Sally shouted,\n");
	printf("\"By the Great Pumpkin, what was that!\"");
}

void task4(void) {
	float i = 64.25;
	printf("Enter a floating-point value:%.2f\n", i);
	printf("fixed-point notation:%g\n", i);
	printf("exponential notation:%e\n", i);
	printf("p notation:%.2a", i);
}

void task5(void) {
	int age = 21;
	long long int second = 21 * 3.156 * pow(10, 7);
	printf("�����Ӧ����Ϊ:%lld", second);
}

void task6(void) {
	int quart = 1;
	int a = 950;
	double m = pow(10, -23) * 3.0;
	double result = quart * a / m;
	printf("ˮ���ӵ�����Ϊ:%g", result);
}

void task7(void) {
	int height = 65;
	double cm = 2.54;
	printf("���Ϊ:%g���� ", height * cm);
}

void task8(void) {
	//��Ϊʹ�����������޷���ʾС��������

	double pint, ounce, cup;
	double bigspoon, teaspoon;

	printf("Please you enter a number of cups: ");
	scanf_s("%lf", &cup);
	pint = cup / PINT_PER_CUP;
	ounce = cup * CUP_PER_OUNCE;
	bigspoon = ounce * OUNCE_PER_BIGSPOON;
	teaspoon = bigspoon * BIGSPOON_PER_TEASPOON;

	printf("Here are some ways to show %g cups\n", cup);
	printf("Pint: %g\n", pint);
	printf("Ounce: %g\n", ounce);
	printf("Bigspoon: %g\n", bigspoon);
	printf("Teaspoon: %g\n", teaspoon);
}