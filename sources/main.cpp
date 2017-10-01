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
	for(int i = 0; i < 10; i++) { arrayInt.push(i*2); }   
	for(size_t j = 0; j < arrayInt.count(); j++) { cout << arrayInt[j] << " "; } // Заполняем наш стек и выводим его содержимое на экран
	cout << endl;
}

void stackPop() 
{
	cout << endl << "Метод stackPop" << endl;
	Stack<int> arrayInt;
	for(int i = 0; i < 10; i++) { arrayInt.push(i); }
	for(int j = 0; j < 6; j++) { cout << arrayInt.pop() << " "; } // Заполняем наш стек и сразу же после этого извлекаем из него все элементы
	cout << endl << endl;
}

void stackEmpty() 
{
	cout << endl << "Метод stackEmpty" << endl;
	Stack<char> arrayChar;
	char wordChar[] = "AABBCCDDEE";
	for(int i = 0; i < strlen(wordChar); i++) { arrayChar.push(wordChar[i]); }
	while(!arrayChar.empty()) {
		cout << arrayChar.pop() << " ";
	}
	cout << endl << endl;
}
