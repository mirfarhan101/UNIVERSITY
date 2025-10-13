#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

struct node* top = nullptr;

struct node* createNode(){
    int data;
    cout << "Enter The Value: "; 
    cin >> data;

struct node* newNode = new node();
newNode -> data = data;
newNode -> next = nullptr;
return newNode;
}

void push(){

struct node* newNode = createNode();

   if(top == nullptr){
        top = newNode;
        cout << "************************" << endl;
        cout << newNode -> data << " pushed to the stack" << endl;
        cout << "************************" << endl;
        return;
   }
   else{
    newNode -> next = top;
    top = newNode;
    cout << "************************" << endl;
    cout << top -> data << " pushed to the stack" << endl;
    cout << "************************" << endl;
    return;

   }
}
  
void pop(){
    if(top == nullptr){
        cout << "************************" << endl;
        cout << "   STACK UNDERFLOW " << endl;
        cout << "************************" << endl;
        return;
    }
    else{
        struct node* temp = top;
        cout << "************************" << endl;
        cout << temp -> data << " popped from the stack" << endl;
        cout << "************************" << endl;
        top = top -> next;
        delete temp;
        return;
    }
}

void peek(){
    if(top == nullptr){
        cout << "************************" << endl;
        cout << "   STACK IS EMPTY  " << endl;
        cout << "************************" << endl;
        return;
    }
    else{
        cout << "************************" << endl;
        cout << top -> data << " is at the top of the stack  " << endl;
        cout << "************************" << endl;
        return;
    }
}

void isEMPTY(){
    if(top == nullptr){
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

void display(){
if(top == nullptr){
    cout << "************************" << endl;
    cout << "   STACK IS EMPTY  " << endl;
    cout << "************************" << endl;
    return;
}
else{
    struct node* temp = top;
     cout << "************************" << endl;
     cout << "Top -> ";
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
     cout << "\n************************" << endl;
        return;
}
}

int main(){

int input;

do{
cout << "*************************" << endl;
cout << "CHOOSE 1 FOR PUSH\n"
     << "CHOOSE 2 FOR POP\n"
     << "CHOOSE 3 FOR PEEK\n"
     << "CHOOSE 4 FOR isEMPTY\n"
     << "CHOOSE 5 FOR DISPLAY\n"
     << "CHOOSE 6 FOR EXIT\n"
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
    display();
}

else if(input == 6){
cout << "************************" << endl;
cout << "   PROGRAM STOPPED " << endl;
cout << "************************" << endl;
}

else{
    cout << "************************" << endl;
cout << "   INVALID INPUT " << endl;
cout << "************************" << endl;
}

}while(input != 6);
return 0;
}