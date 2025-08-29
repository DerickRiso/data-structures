#include <iostream>
using namespace std;

struct Node {
	int value;
	Node* next;

	Node(int data) {
		value = data;
		next = nullptr;
	}
};

int userInput();
int createNode(int);
int printList();
int selectOption();
int removeLast();
int removeFirst();

Node* head = new Node(0);
Node* tail = head;
Node* current = head;

int option = 0;

int main() {
	while (option != 5) {
		selectOption();
		if (option == 5) {
			return 0;
		}
	}

	return 0;
}

int selectOption() {
	cout << "--------------------------------" << endl;
	cout << "1 - inserir na lista" << endl;
	cout << "2 - exibir lista" << endl;
	cout << "3 - remover ultimo elemento" << endl;
	cout << "4 - remover primeiro elemento" << endl;
	cout << "5 - sair " << endl << endl;
	cout << "Selecione a operacao: ";

	
	cin >> option;

	switch (option) {
	case 1:
		int value;
		value = userInput();
		break;
	case 2:
		printList();
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		return 0;
		break;
	}

	return 0;
}

int userInput() {
	int value;
	cout << endl << "insira o valor: ";
	cin >> value;

	createNode(value);
	return 0;
}

int createNode(int value) {
	Node* newNode = new Node(value);
	tail->next = newNode;
	tail = newNode;
	return 0;
}

int printList() {
	cout << endl;
	while (current->next != nullptr) {
		cout << current->value << " -> ";
		
		current = current->next;

		if (current->next == nullptr) {
			cout << current->value;
		}
	}
	cout << endl << endl;

	return 0;
}

int removeLast() {

	return 0;
}

int removeFirst() {

	return 0;
}