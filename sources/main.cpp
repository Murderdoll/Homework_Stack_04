#include <iostream>
#include "Stack.hpp"
using namespace std;

int main()
{
	try
	{
	Stack<int> Ob(3); // создаем объект класса Stack с размером 3
	Ob.push(1);
	Ob.push(2);
	Ob.push(3);
	Ob.push(4); 
	for (int i = 0; i < 4; i++)
	{
		Ob.showMe(i);// заполняем наш стек и выодим его содержимое на экран
	}
	cout << endl;
	Ob.pop(); // убираем верхний элемент из стека
	for (int i = 0; i < 4; i++)
	{
		Ob.showMe(i); // убеждаемся, что элемент был убран
	}
	cout << endl;
	Ob.pop();
	Ob.pop();
	Ob.pop(); // извлекаем оставшиеся три элемента из объекта
	cout << "Now Stack is empty." << endl;
	cout << Ob.empty() << endl;
	//Ob.pop(); // Вызываем аварийную остановку программы, выходя за границы стека
	}
	catch (const exception& e)  	//обработка исключений
	{
		cout << e.what() << endl;
	}
	return 0;
}
