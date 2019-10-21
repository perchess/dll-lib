// first_dll.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "mytest.h"
#include <iostream>
#include <stdio.h>

using namespace std;

// This is an example of an exported variable
FIRSTDLL_API int nfirstdll=0;

// This is an example of an exported function.
FIRSTDLL_API  Test initQuiz(const char* question, const char* answer1, const char* answer2)
{
	strcpy_s(MyTest.question, question);
	strcpy_s(MyTest.ans1, answer1);
	strcpy_s(MyTest.ans2, answer2);
	return Test();
}
FIRSTDLL_API  Test startQuiz(const char* rightans)
{
	cout << "Вопрос : " << MyTest.question << "\nВарианты ответа: \n";
	cout << MyTest.ans1 << endl;
	cout << MyTest.ans2 << endl;
	cout << "Введите ответ или напишите <выйти>\n";
	cin >> MyTest.userAns;
	if (MyTest.userAns == rightans) {
		MyTest.check = true;
		MyTest.point += 1;
		cout << "Верно!" << "Количество баллов : " << MyTest.point << endl;
	}
	if ((MyTest.userAns != rightans) && (MyTest.userAns != "выйти")) {
		cout << "Неверно! " << endl;
	}
	return Test();
}

// This is the constructor of a class that has been exported.
