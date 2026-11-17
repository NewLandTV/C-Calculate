#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#define MAX_NUMBER 33

int score;

void Init();
void Loop();
void Gotoxy(int x, int y);

int main(void)
{
	Init();
	
	while (1)
	{
		Loop();
	}
	
	return 0;
}

void Init()
{
	srand((unsigned int)time(NULL));
	
	system("title 사칙연산 문제 (심화)");
	system("mode con cols=50 lines=12");
	
	score = 0;
}

void Loop()
{
	system("cls");
	Gotoxy(36, 0);
	printf("SCORE : %d", score);
	Gotoxy(0, 0);
	
	int randomOperator = rand() % 4;
	int a = rand() % MAX_NUMBER;
	int b = rand() % MAX_NUMBER;
	int answer;
	int input;
	
	switch (randomOperator)
	{
		case 0:
			printf("%d >> %d = ", a, b);
			
			answer = a >> b;
			
			break;
		case 1:
			printf("%d << %d = ", a, b);
			
			answer = a << b;
			
			break;
		case 2:
			printf("%d & %d = ", a, b);
			
			answer = a & b;
			
			break;
		case 3:
			printf("%d | %d = ", a, b);
			
			answer = a | b;
			
			break;
	}
	
	scanf("%d", &input);
	Gotoxy(0, 1);
	
	switch (randomOperator)
	{
		case 0:
			if (answer == input)
			{
				printf("[SUCCESS] %d >> %d = %d", a, b, input);
				
				score++;
				
				break;
			}
			
			printf("[FAILED] %d >> %d != %d (ANSWER : %d)", a, b, input, answer);
			
			break;
		case 1:
			if (answer == input)
			{
				printf("[SUCCESS] %d << %d = %d", a, b, input);
				
				score++;
				
				break;
			}
			
			printf("[FAILED] %d << %d != %d (ANSWER : %d)", a, b, input, answer);
			
			break;
		case 2:
			if (answer == input)
			{
				printf("[SUCCESS] %d & %d = %d", a, b, input);
				
				score++;
				
				break;
			}
			
			printf("[FAILED] %d & %d != %d (ANSWER : %d)", a, b, input, answer);
			
			break;
		case 3:
			if (answer == input)
			{
				printf("[SUCCESS] %d | %d = %d", a, b, input);
				
				score++;
				
				break;
			}
			
			printf("[FAILED] %d | %d != %d (ANSWER : %d)", a, b, input, answer);
			
			break;
	}
	
	_getch();
}

void Gotoxy(int x, int y)
{
	COORD position = { x, y };
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}
