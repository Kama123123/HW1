#include <iostream>
#include "Stack.hpp"
using namespace std;

int main() {
	try {
		cout << endl << "***INT STACK***" << endl;
		Stack<int> intStack(10); //Создание объекта класса Stack размера 10 без выделения новой памяти
    //Добавление элементов
		intStack.push(1);
		intStack.push(2);
		intStack.push(3);
		intStack.push(4);
		intStack.push(5);
		intStack.push(6);
		intStack.push(7);
		intStack.push(8);
		intStack.push(9);
		intStack.push(10);

    //Удаление элементов из стека типа Int
		for(int i = 0; i < 10; i++) {
			cout << intStack.pop() << endl;
		}
		cout << endl << endl;

		cout << "***CHAR STACK***" << endl;
		Stack<char> charStack(5); //Создание объекта класса Stack размера 5 без выделения новой памяти
    //Добавление элементов
    charStack.push('U');
		charStack.push('T');
		charStack.push('S');
		charStack.push('M');
		charStack.push('B');

    //Удаление элементов из стека типа Char
		for(int i = 0; i < 5; i++) {
			cout << charStack.pop();
		}
		cout << endl << endl;

    cout << "***OVERWRITE STACK***" << endl;
		Stack<char> overwriteStack(5); //Создание объекта класса Stack размера 5 с выделением новой памяти
    //Добавление элементов
		overwriteStack.push('8');
		overwriteStack.push('U');
		overwriteStack.push('I');
    overwriteStack.push(' ');
    overwriteStack.push('U');
		overwriteStack.push('T');
		overwriteStack.push('S');
		overwriteStack.push('M');
		overwriteStack.push('B');

    //Удаление элементов из стека типа Char
    for(int i = 0; i < 9; i++) {
			cout << overwriteStack.pop();
		}
		cout << endl << endl;

	} catch(const exception& e) { //Обработка исключений
		cout << e.what() << endl;
	}
}

