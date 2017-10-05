#include <iostream>
#include "Stack.hpp"
using namespace std;

void stackInit() 
{
	cout << "Метод stackInit" << endl;
	Stack<int> arrayInt;
	cout << "Массив интов создан." << endl;
}

int main()
{
	stackInit();
}
