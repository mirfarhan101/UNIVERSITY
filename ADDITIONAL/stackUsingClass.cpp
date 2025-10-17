#include <iostream>
using namespace std;

class stack{
    public:
        int arr[5];
        int top;
        const int MAX = 4;

stack(){
    top = -1;
}

        void push(){
if(top == MAX){
        cout << "************************" << endl;
        cout << "   STACK OVERFLOW " << endl;
        cout << "************************" << endl;
        return;  
}
else{
    int value;
    cout << "Enter the value: ";
    cin >> value;
    top++;
    arr[top] = value;
     cout << "************************" << endl;
        cout << arr[top] << " was pushed to the top of stack" << endl;
        cout << "************************" << endl;
return;

}
}
  
void pop(){
    if(top == -1){
        cout << "************************" << endl;
        cout << "   STACK UNDERFLOW " << endl;
        cout << "************************" << endl;
        return;
    }
    else{
        cout << "************************" << endl;
        cout << arr[top] << " popped from the stack" << endl;
        cout << "************************" << endl;
        top--;
        return;
    }
}

void peek(){
    if(top == -1){
        cout << "************************" << endl;
        cout << "   STACK IS EMPTY  " << endl;
        cout << "************************" << endl;
        return;
    }
    else{
        cout << "************************" << endl;
        cout << arr[top] << " is at the top of the stack  " << endl;
        cout << "************************" << endl;
        return;
    }
}

void isEMPTY(){
    if(top == -1){
        cout << "************************" << endl;
        cout << "   STACK IS EMPTY  " << endl;
        cout << "************************" << endl;
        return;
    }
     else{
        cout << "************************" << endl;
        cout << "   STACK IS NOT EMPTY  " << endl;
        cout << "************************" << endl;
        return;
    }
}

void isFULL(){
    if(top == MAX){
        cout << "************************" << endl;
        cout << "   STACK IS FULL  " << endl;
        cout << "************************" << endl;
        return;
    }
     else{
        cout << "************************" << endl;
        cout << "   STACK IS NOT FULL  " << endl;
        cout << "************************" << endl;
        return;
    }
}

void display(){
if(top == -1){
    cout << "************************" << endl;
    cout << "   STACK IS EMPTY  " << endl;
    cout << "************************" << endl;
    return;
}
else{
    cout << "************************" << endl;
    for(int i = 0; i <= top; i++){
        cout << arr[i] << " ";
    }
    cout << " <- Top";
    cout << "\n************************" << endl;
    return;
}
}
};

int main(){

stack s1;
stack s2;

s1.push();
s1.peek();
s2.push();
s2.peek();

return 0;
}