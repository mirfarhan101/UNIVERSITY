#include <iostream>
using namespace std;

int arr[5];
int top = -1;
int MAX = 4;

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

int main(){

int input;

do{

cout << "CHOOSE 1 FOR PUSH\n"
     << "CHOOSE 2 FOR POP\n"
     << "CHOOSE 3 FOR PEEK\n"
     << "CHOOSE 4 FOR isEMPTY\n"
     << "CHOOSE 5 FOR isFULL\n"
     << "CHOOSE 6 FOR DISPLAY\n"
     << "CHOOSE 7 FOR EXIT\n"
     << "YOUR CHOICE: ";
    cin >> input;

if(input == 1){
    push();
}

else if(input == 2){
    pop();
}

else if(input == 3){
    peek();
}

else if(input == 4){
    isEMPTY();
}

else if(input == 5){
    isFULL();
}


else if(input == 6){
    display();
}

else if(input == 7){
cout << "************************" << endl;
cout << "   PROGRAM STOPPED " << endl;
cout << "************************" << endl;
}

else{
    cout << "************************" << endl;
cout << "   INVALID INPUT " << endl;
cout << "************************" << endl;
}

}while(input != 7);

return 0;
}