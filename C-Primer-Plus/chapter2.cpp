#include <stdio.h>
void task1(void);
void task2(void);
void task3(void);
void task4(void);
void jolly(void);
void deny(void);
void task5(void);
void br(void);
void ic(void);
void task6(void);
void task7(void);
void smile(void);
void task8(void);
void one_three(void);
void two(void);


int main(void) {
	task1();
	printf("\n");
	task2();
	printf("\n");
	task3();
	printf("\n");
	task4();
	printf("\n");
	task5();
	printf("\n");
	task6();
	printf("\n");
	task7();
	printf("\n");
	task8();
	printf("\n");
	printf("\n");
	printf("\n");
}

void task1(void) {
	printf("Firstname Surname\n");
	printf("FirstName\nSurname\n");
	printf("FirstName ");
	printf("Surname");
}

void task2(void) {
	printf("姓名：小明\n地址：广州");
}

void task3(void) {
	printf("出生天数:%d", 21 * 365);
}

void task4(void) {
	jolly();
	jolly();
	jolly();
	deny();
}

void jolly(void) {
	printf("For he is a Jolly good fellow!\n");
}

void deny(void) {
	printf("Which nobody can deny!");
}
void task5(void) {
	br();
	printf(" ");
	ic();
	printf(",\n");
	br();
	printf("\n");
	ic();
}

void br(void) {
	printf("Brazil,Russia");
}

void ic(void) {
	printf("India,China");
}

void task6(void) {
	int toes = 10;
	int toesDouble = toes * 2;
	int toesSquare = toes * toes;
	printf("toes=%d\ntoes两倍=%d\ntoes的平方=%d", toes, toesDouble, toesSquare);
}

void task7(void) {
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();

}

void smile(void) {
	printf("Smile!");
}

void task8(void) {
	printf("starting now:\n");
	one_three();
	printf("done!");

}

void one_three(void) {
	printf("one\n");
	two();
	printf("three\n");
}

void two(void){
	printf("two\n");
}


