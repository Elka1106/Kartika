#include <iostream>
#define MAX 10
using namespace std;

class Stack {
    int top;
    int arr[MAX];
public:
    Stack() { top = -1; }

    bool isFull() { return top == MAX - 1; }

    bool isEmpty() { return top == -1; }

    void push(int data) {
        if (isFull()) {
            cout << "Stack sudah penuh!" << endl;
            return;
        }
        arr[++top] = data;
        cout << "Data " << data << " dimasukkan ke stack." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong!" << endl;
            return;
        }
        cout << "Data " << arr[top--] << " dikeluarkan dari stack." << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack kosong!" << endl;
            return;
        }
        cout << "Isi stack: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();

    stack.pop();
    stack.display();

    return 0;
}
