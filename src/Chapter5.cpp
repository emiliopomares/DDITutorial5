#include <iostream>

using namespace std;

void printHorizontalLine(int length) {
	for(int i = 0; i < length; ++i) {
		cout << "* ";
	}
}

void printHorizontalSpaces(int length) {
	for(int i = 0; i < length; ++i) {
		cout << "  ";
	}
}

void printSquare(int length) {
	printHorizontalLine(length);
        cout << "\n";
        for(int i = 1; i < length-1; ++i) {
                cout << "* ";
                printHorizontalSpaces(length-2);
                cout << "*\n";
        }
        printHorizontalLine(length);
}

int main(int argc, char **argv) {

	int size;
	string line;

	cout << "Guess what? Size please: ";
	getline(cin, line);
	size = stoi(line);

	// square
	printSquare(size);

	cout << "And now... the entire family: \n\n";

	for(int i = 1; i <= size; ++i) {
		printSquare(i);
		cout << "\n\n";
	}

	cout << "\n\n";

}
