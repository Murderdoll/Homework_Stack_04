#include <iostream>
#include "Stack.hpp"
using namespace std;

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

int main() 
{
	stackPop();
}
