#pragma once

#ifdef FIRSTDLL_EXPORTS
#define FIRSTDLL_API __declspec(dllexport)
#else
#define FIRSTDLL_API __declspec(dllimport)
#endif

#include <string.h>
#include <iostream>
using namespace std;
class FIRSTDLL_API Test
{
public:
	unsigned short point = 0;// Баллы за тест
	char question[200];// Вопрос
	//unsigned short A; //nomer otveta
	char ans1[200];//Ответ 1
	//unsigned short B;//nomer otveta
	char ans2[200];//Ответ 2
	string userAns;//Ответ пользователя 
	bool check;// Верный/неверный
}MyTest;
FIRSTDLL_API Test initQuiz(const char* question, const char* answer1, const char* answer2);
FIRSTDLL_API Test startQuiz(const char* rightans);