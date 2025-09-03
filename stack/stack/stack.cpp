#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* prev;

    Node() {
        value = 0;
        prev = nullptr;
    }
};

struct Stack {
    int cont;
    Node* top;

    Stack() {
        cont = 0;
        top = nullptr;
    }
};

Stack* pilha = new Stack();

int menu();
int input();
int print();
int push();
int pop();

int main()
{
    menu();
}

int push() {
    int value = input();
    Node* newNode = new Node();
    Node* oldNode = pilha->top;
    newNode->value = value;
    pilha->cont++;

    if (pilha->cont == 1) {
        newNode->prev = nullptr;
    }

    newNode->prev = oldNode;
    pilha->top = newNode;

    return 0;
}

int pop() {
    Node* popedNode = pilha->top;
    pilha->top = pilha->top->prev;
    pilha->cont--;

    delete popedNode;

    return 0;
}

int print() {
    Node* current = pilha->top;
    while (current->prev != nullptr) {
        cout << current->value << " <- ";

        current = current->prev;
    }

    if (current->prev == nullptr) {
        cout << current->value;
    }

    return 0;
}

int input() {
    int value;
    cin >> value;
    return value;
}

int menu() {
    int option;
    do {
        cout << endl << "1 - Inserir" << endl;
        cout << "2 - Remover" << endl;
        cout << "3 - Exibir" << endl;
        cout << "4 - Sair" << endl;
        cout << "Insira a operacao: ";
        cin >> option;

        switch (option) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            print();
            break;
        }
    } while (option != 4);

    return option;
}

