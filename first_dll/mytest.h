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
	unsigned short point = 0;// ����� �� ����
	char question[200];// ������
	//unsigned short A; //nomer otveta
	char ans1[200];//����� 1
	//unsigned short B;//nomer otveta
	char ans2[200];//����� 2
	string userAns;//����� ������������ 
	bool check;// ������/��������
}MyTest;
FIRSTDLL_API Test initQuiz(const char* question, const char* answer1, const char* answer2);
FIRSTDLL_API Test startQuiz(const char* rightans);