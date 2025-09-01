#include <iostream>
using namespace std;


#define SIZE 10

struct Queue
{
    int data[SIZE];
    int front;
    int count;
    int rear;

    Queue() : data{ 0 }, front(0), rear(0), count(0) {};
};

Queue fila = Queue();

int input();
int printQueue();
int enqueue();
int dequeue();
int menu();

int main()
{
    menu();
}

int input() {
    int value;
    cin >> value;
    return value;
}

int printQueue() {
    for (int i = 0; i < SIZE; i++)
    {
        cout << fila.data[i] << " <- ";
    }
    cout << endl << endl;
    cout << "Front = " << fila.data[fila.front] << endl;
    cout << "Count = " << fila.count;
    cout << endl << endl;
    return 0;
}

int enqueue() {
    int num = input();
    for (int i = 0; i < SIZE; i++)
    {
        if (fila.data[i] == NULL) {
            fila.data[i] = num;
            fila.rear = (fila.rear + 1) % SIZE;
            fila.count++;
            cout << endl << endl << "Elemento adicionado" << endl << endl;
            return 0;
        }
    }
    return 1;
}

int dequeue() {
    int value = fila.data[fila.front];
    fila.data[fila.front] = 0;
    fila.front = (fila.front + 1) % SIZE;
    fila.count--;
    return value;
}

int menu() {
    int option;
    do {
        cout << endl << "1 - Inserir na fila" << endl;
        cout << "2 - Remover da fila" << endl;
        cout << "3 - Exibir fila" << endl;
        cout << "4 - Sair" << endl;
        cout << "Insira a operacao: ";
        cin >> option;

        switch (option) {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            printQueue();
            break;
        }
    } while (option != 4);

    return option;
}




