#include <iostream>
using namespace std;
  
struct node{
    int data;
    node* next;
};

struct node* head = nullptr;

struct node* createNode(){
    int data;
    cout << "Enter The Value: "; 
    cin >> data;

    struct node* newNode = new node();
    newNode -> data = data;
    newNode -> next = nullptr;
    return newNode;
}

void enque(){

struct node* newNode = createNode();

    if(head == nullptr){
        head = newNode;
        cout << "************************" << endl;
        cout << newNode -> data << " Enqued" << endl;
        cout << "************************" << endl;
        return;
    }else{
        newNode -> next = head;
        head = newNode;
        cout << "************************" << endl;
        cout << newNode -> data << " Enqued" << endl;
        cout << "************************" << endl;
        return;
    }
}

void deque(){
    if(head == nullptr){
        cout << "************************" << endl;
        cout << "   EMPTY QUEUE " << endl;
        cout << "************************" << endl;
        return;
    }
    else if(head -> next == nullptr){
            cout << "************************" << endl;
            cout << head -> data << " DEQUED" << endl;
            cout << "************************" << endl;
            head = nullptr;
            return;
    }
    else{
        struct node* temp = head;
        while(temp -> next -> next){
            temp = temp -> next;
        }
        struct node* deleteNode = temp -> next;
        cout << "************************" << endl;
        cout << deleteNode -> data << " DEQUED" << endl;
        cout << "************************" << endl;
        temp -> next = nullptr;
        delete deleteNode;
        return;
    }
}

void isEMPTY(){
    if(head == nullptr){
        cout << "************************" << endl;
        cout << "   QUEUE IS EMPTY  " << endl;
        cout << "************************" << endl;
        return;
    }
     else{
        cout << "************************" << endl;
        cout << "   QUEUE IS NOT EMPTY  " << endl;
        cout << "************************" << endl;
        return;
    }
}

void display(){
if(head == nullptr){
    cout << "************************" << endl;
    cout << "   QUEUE IS EMPTY  " << endl;
    cout << "************************" << endl;
    return;
}
else{
    struct node* temp = head;
     cout << "************************" << endl;
     cout << "Back -> ";
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << " <- Front";
     cout << "\n************************" << endl;
        return;
}
}

int main(){


int input;

do{
cout << "*************************" << endl;
cout << "CHOOSE 1 FOR ENQUE\n"
     << "CHOOSE 2 FOR DEQUE\n"
     << "CHOOSE 3 FOR isEMPTY\n"
     << "CHOOSE 4 FOR DISPLAY\n"
     << "CHOOSE 5 FOR EXIT\n"
     << "YOUR CHOICE: ";
    cin >> input;

if(input == 1){
    enque();
}

else if(input == 2){
    deque();
}

else if(input == 3){
    isEMPTY();
}

else if(input == 4){
    display();
}

else if(input == 5){
cout << "************************" << endl;
cout << "   PROGRAM STOPPED " << endl;
cout << "************************" << endl;
}

else{
    cout << "************************" << endl;
    cout << "   INVALID INPUT " << endl;
    cout << "************************" << endl;
}

}while(input != 5);

return 0;
}