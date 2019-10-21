// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the FIRSTDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// FIRSTDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
#pragma once
// defined with this macro as being exported.
#ifdef FIRSTDLL_EXPORTS
#define FIRSTDLL_API __declspec(dllexport)
#else
#define FIRSTDLL_API __declspec(dllimport)
#endif
#include <string>
// This class is exported from the dll
class FIRSTDLL_API Test {
public:
	unsigned short point = 0;// Баллы за тест
	char question[200];// Вопрос
	//unsigned short A; //nomer otveta
	char ans1[200];//Ответ 1
	//unsigned short B;//nomer otveta
	char ans2[200];//Ответ 2
	std::string userAns;//Ответ пользователя 
	bool check;// Верный/неверный
	// TODO: add your methods here.
}MyTest;

extern FIRSTDLL_API int nfirstdll;

extern FIRSTDLL_API Test initQuiz(const char* question, const char* answer1, const char* answer2);
extern FIRSTDLL_API Test startQuiz(const char* rightans);