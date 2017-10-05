#include <iostream>
#include "Stack.hpp"
using namespace std;

void stackEmpty()
{
	cout << endl << "Метод stackEmpty" << endl;
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

int main() 
{
	stackEmpty();
}
