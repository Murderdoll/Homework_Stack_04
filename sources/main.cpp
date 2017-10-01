#include "Stack.hpp"

void stackInit() 
{
	cout << "Метод stackInit" << endl;
	Stack<int> arrayInt;
	cout << "Массив интов создан." << endl;
}

void stackPush()
{
	cout << endl << "Метод stackPush" << endl;
	Stack<int> arrayInt;
	for (int i = 0; i < 10; i++) 
	{ 
		arrayInt.push(i*2);
	}   
	for (size_t j = 0; j < arrayInt.count(); j++) 
	{ 
		cout << arrayInt[j] << " "; 
	} // Заполняем наш стек и выводим его содержимое на экран
	cout << endl;
}

void stackPop() 
{
	cout << endl << "Метод stackPop" << endl;
	Stack<int> arrayInt;
	for(int i = 0; i < 10; i++)
	{ 
		arrayInt.push(i);
	}
	for(int j = 0; j < 6; j++) 
	{ 
		cout << arrayInt.pop() << " ";
	} // Заполняем наш стек и сразу же после этого извлекаем из него 6 элементов
	cout << endl << endl;
}

void stackEmpty()
{
	//cout << endl << "Метод stackEmpty" << endl;
	Stack<int> Ob4;
	for (int i = 0; i < 10; i++)
 {
		Ob4.push(i);
 }
	while (Ob4.empty() == 0)
	{
		cout << Ob4.pop() << " ";
	}
	cout << endl << endl;
}
