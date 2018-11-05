//C++ Pointers
//This program is used to demonstrate what pointers are and how they can be used

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void textSwapper(string* x, string* y);
int* ptrToRandomElement(vector<int>* const num);

int main() {

	//Demonstrates how to change pointers to different strings
	string* textPointer;
	string* text2Pointer;

	string text = "I couldn't think of anything creative...";
	string text2 = "What can I do with pointers....";
	textPointer = &text;
	text2Pointer = &text2;

	cout << "I had my first text be: " << *textPointer << "\n";
	cout << "And my second text be: " << *text2Pointer << "\n";
	cout << "........................................................\n";
	cout << "\nMy text has been switched....\n\n";
	textSwapper(textPointer, text2Pointer);
	cout << "Now my first text is: " << *textPointer << "\n";
	cout << "And my second text is: " << *text2Pointer << "\n";

	cout << "\n==============================================\n";
	cout << "\n";
	//Demonstrate how to return a pointer from a function
	vector<int>numbers;
	numbers.push_back(1651432);
	numbers.push_back(65813212);
	numbers.push_back(216513);
	numbers.push_back(101651234);
	numbers.push_back(8562135);
	numbers.push_back(165131);
	numbers.push_back(1182);
	numbers.push_back(11486120);
	numbers.push_back(169843211);
	numbers.push_back(8624131);

	int* ptrNum = (ptrToRandomElement(&numbers));
	cout << "Assigning the pointer to a random integer object....\n";
	cout << "The pointer is pointing to: " << *ptrNum << "\n";

	//Pauses the program
	system("pause");
	return 0;

}

int* ptrToRandomElement(vector<int>* num) {
	srand(static_cast<unsigned int>(time(0)));
	int rn = rand() % 9 + 1;
	return &((*num)[rn]);
}

void textSwapper(string* const x, string* const y) {
	string temp = *x;
	*x = *y;
	*y = temp;
}