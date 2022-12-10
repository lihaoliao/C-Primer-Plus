#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <float.h>
#define GALLONL 3.785
#define MILE 1.609


void task1(void);
void task2(void);
void task3(void);
void task4(void);
void task5(void);
void task6(void);
void task7(void);
void task8(void);

void main(void) {

	/*task1();*/
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	task8();
}

void task1(void)
{

	char firstName[40];
	char lastName[40];
	printf("请输入姓氏:");
	scanf("%39s", lastName);
	printf("请输入名:");
	scanf("%39s", firstName);
	printf("%s %s", lastName, firstName);
	return 0;

}

void task2(void) {
	char name[40];
	printf("请输入名字:");
	scanf("%39s", name);
	printf("a:\"%s\"\n", name);
	printf("b:\"%20s\"\n", name);
	printf("c:\"%-20s\"\n", name);
	int width = strlen(name);
	printf("d:[%*s]", width+3, name);
	return 0;

}

void task3(void) {
	float number;
	printf("enter the number:");
	scanf("%f", &number);
	printf("The input is %.1f or %.1e\n", number, number);
	printf("The input is %+.3f or %.3E", number, number);
	return 0;
}
void task4(void) {
	float height;
	char name[40];
	printf("Enter you name and height(cm):");
	scanf("%39s %f", name ,&height);
	height = height / 100.0;
	printf("%s,You are %.2f meter tall", name,height);
	return 0;
}
void task5(void) {
	float speed, size, time;

	printf("Please enter net speed(Mbit/s):");
	scanf("%f", &speed);
	printf("Please enter file size(MB):");
	scanf("%f", &size);
	time = size * 8 / speed;
	printf("At %.2f megabits per secnod, ", speed);
	printf("a file of %.2f megabytes ", size);
	printf("downloads in %.2f seconds.\n", time);

	return 0;
	
}
void task6(void) {
	int x, y;
	char fname[20], lname[20];

	printf("Please enter your first name: ");
	scanf("%19s", fname);
	printf("Please enter your last name: ");
	scanf("%19s", lname);
	x = strlen(fname);
	y = strlen(lname);
	printf("%s %s\n", fname, lname);
	printf("%*d %*d\n", x, x, y, y);
	printf("%s %s\n", fname, lname);
	printf("%-*d %-*d", x, x, y, y);
	return 0;
	
}
void task7(void) {
	double d_value = 1.0 / 3.0;
	float f_value = 1.0 / 3.0;
	printf("1.0 / 3.0 display 6 decimal places：\n");
	printf("f_value = %.6f\nd_value = %.6lf\n", f_value, d_value);
	printf("\n1.0 / 3.0 display 12 decimal places：\n");
	printf("f_value = %.12f\nd_value = %.12lf\n", f_value, d_value);
	printf("\n1.0 / 3.0 display 16 decimal places：\n");
	printf("f_value = %.16f\nd_value = %.16lf\n", f_value, d_value);
	printf("\nfloat and double maximum significant digits:\n");
	printf("FLT_DIG = %d, DBL_DIG = %d\n", FLT_DIG, DBL_DIG);
	//↑FLTDIG代表float有效十进制数字位数；
	//↑DBL_DIG代表double有效十进制数字位数;

	return 0;
	
}
void task8(void) {
	float mile;
	float gallon;
	printf("Please enter the mile and gallon:");
	scanf("%f %f", &mile, &gallon);
	float l = gallon * GALLONL;
	float m = mile * MILE;
	float result = l / m;
	printf("cost:%lf L/100km", result);
	return 0;
}
