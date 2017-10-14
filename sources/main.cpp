#include <iostream>
#include "Stack.hpp"
using namespace std;

int main()
{
	try
	{
	Stack<int> Ob(3); // создаем объект класса Stack с размером 3
	for (int i = 0; i < 4; i++)
	{
		Ob.push(i+1);
		cout << Ob[i];// заполняем наш стек и выодим его содержимое на экран
	}
	cout << endl;
	Ob.pop(); // убираем верхний элемент из стека
	Ob.push(0); // помещаем на верхушку стека элемент 0
	for (int i = 0; i < 4; i++)
	{
		cout << Ob[i];
	}
	cout << endl;
	}
	catch (const exception& e)  	//обработка исключений
	{
		cout << e.what() << endl;
	}
	system("pause");
	return 0;
}
