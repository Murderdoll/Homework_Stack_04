#include <iostream>
#include "Stack.hpp"
using namespace std;

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

int main() 
{
	stackPush();
}
