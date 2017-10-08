#ifndef STACK_HPP
#define STACK_HPP


#include <iostream>

using namespace std;

template <typename T>
class Stack
{
private:
	T* array_; // массив который будем забивать ,array_-указатель на массив,который лежит в куче
	size_t count_= 0 ; // номер элемента, добавляемый в кучу
	size_t array_size_; // размер стека

public:
	Stack() noexcept : array_size_(size_t(10)), array_(new T[10]) //Конструктор класса без параметров
	{}; 
	Stack(size_t st) noexcept: array_size_(st), array_(new T[st]) //Конструктор класса с параметром
	{};
	Stack(const Stack& s) noexcept //Конструктор копирования
	{
		if (this != &s)
		{
			delete[] array_;
			array_size_ = s.array_size_;
			count_ = s.count_;
			array_ = new T[s.array_size_];
			for (size_t i = 0; i < s.array_size_; ++i)
			{
				array_[i] = s.array_[i];
			}
		}
	};
	Stack(Stack&& s) noexcept //Конструктор перемещения
	{
		array_size_ = s.array_size_;
		count_ = s.count_;
		array_ = s.array_;
		s.array_size_ = 0;
		s.count_ = 0;
		s.array_ = nullptr;
	};
	Stack<T>& operator=(const Stack& s) noexcept //Оператор присваивания с семантикой копирования
	{
		if (this == &s) { return *this; }
		else {
			delete[] array_;
			array_size_ = s.array_size_;
			count_ = s.count_;
			array_ = new T[s.array_size_];
			for (size_t i = 0; i < s.array_size_; ++i) {
				array_[i] = s.array_[i];
			}
			return *this;
		}
	};
	Stack<T>& operator=(Stack&& s) noexcept //Оператор присваивания с семантикой перемещения
	{
		array_size_ = s.array_size_;
		count_ = s.count_;
		array_ = s.array_;
		s.array_size_ = 0;
		s.count_ = 0;
		s.array_ = nullptr;
		return *this;
	};
	~Stack<T>()
	{
                delete[] array_; 
        }
	

	 T& operator [](int pos) 
	 {
    	        return array_[pos];
         }
	
	// функция, показывающая существующие значения в объекте
	void showMe(size_t i)
	{
		cout << array_[i];
	}

	// функция, добавляющая значения в стек, и проверяющая номер элемента с вершиной стека на переполнение стека(push -добавляем наверх)
	void push(T const &d)
	{
		if (count_ == array_size_)
			StackDuplication();
		array_[count_++] = d;
	}
	// функция, убирающая значение из стека, и проверяющая номер элемента с вершиной стека на пустоту стека (pop-убираем сверху)
	T top() const noexcept
	{
		return array_[count_];
	}
	T pop() noexcept {
		if (count_ == 0)
		{
			throw runtime_error("Stack is empty!!!"); // генерируем исключение
		}
		--count_; //Снижение счетчика на единицу
		return top();
	};
	// Данная функция вызывается при переполнении стека. В ней происходит переразпределение памяти
	void StackDuplication() // Данная функция вызывается при переполнении стека. В ней происходит переразпределение памяти
	{
		T* array_2 = new T[array_size_ * 2]; // Определеям указатель array_2 на новый массив с уввеличенным размером 
		for (int i = 0; i < array_size_; i++)// Переносим в новый массив элементы из старого
		{
			array_2[i] = array_[i];
		}
		array_size_ = array_size_ * 2;
		delete[] array_;// освобождаем память
		array_ = array_2;//переопределяем указатель
	}
	size_t count() const // const потому что метод ничего не изменяет
	{ 
		return count_;
	}
	bool empty() const
	{
		return count();
	}
};

#endif /* STACK_HPP */
