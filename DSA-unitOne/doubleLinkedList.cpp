#include <iostream>
using namespace std;

struct node{
    struct node* prev;
    int data;
    struct node* next;
};
struct node* head = nullptr;

struct node* createNode(){
    int value;
    cout << "*************************" << endl;
    cout << "Enter the data: ";
    cin >> value;
struct node* newNode = new node();
newNode -> prev = nullptr;
newNode -> next = nullptr;
newNode -> data = value;
return newNode;
}

void display(){

    if(head == nullptr){
        cout << "*************************" << endl;
        cout << "LINKED LIST DOESN'T EXIST" << endl;
        cout << "*************************" << endl;
    return;
    }else{
        struct node* temp = head;
        cout << "*************************" << endl;
        while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> next;
        }
        cout << "\n*************************" << endl;
    }

}

void createLinkedList(){
    if(head == nullptr){
    struct node* newNode = createNode();
    head = newNode;
    cout << "*************************" << endl;
    cout << "LINKED LIST CREATED" << endl;
    cout << "*************************" << endl;
    return;
}
else{
    cout << "*************************" << endl;
    cout << "LINKED LIST ALREADY EXISTS" << endl;
    cout << "*************************" << endl;
    return;
}
}

void insertAtTheBeginning(){
    if(head == nullptr){
    struct node* newNode = createNode();
    head = newNode;
    return;
    }else{
        struct node* newNode = createNode();
        newNode -> next = head;
        head -> prev = newNode;
        head = newNode;
        return;
    }
}

void insertAtTheEnd(){
    if(head == nullptr){
    struct node* newNode = createNode();
    head = newNode;
    return;
    }else{
        struct node* newNode = createNode();
        struct node* temp = head;
        while(temp->next != nullptr){
            temp = temp -> next;
        }
        temp -> next = newNode;
        newNode -> prev = temp;
        return;
    }
}

void insertAtThePosition(){
int position;
cout << "*************************" << endl;
cout << "Enter the position: ";
cin >> position;

if(position <= 0){
    cout << "*************************" << endl;
    cout << "INVALID POSITION" << endl;
    cout << "*************************" << endl;
    return;
}

if(position == 1){
    if(head == nullptr){
    struct node* newNode = createNode();
    head = newNode;
    return;
    }else{
        struct node* newNode = createNode();
        newNode -> next = head;
        head -> prev = newNode;
        head = newNode;
        return;
    }
}
struct node* temp = head;
for(int i = 1; i < position - 1 && temp != nullptr; i++){
    temp = temp -> next;
}
if(temp == nullptr){
    cout << "*************************" << endl;
    cout << "POSITION OUT OF BOUNDS" << endl;
    cout << "*************************" << endl;
    return;
}

struct node* newNode = createNode();
newNode -> next = temp -> next;
newNode -> prev = temp;
temp -> next = newNode;
if(newNode -> next != nullptr){
    newNode -> next -> prev = newNode;
}

}

void deleteAtTheBeginning(){
if(head == nullptr){
    cout << "*************************" << endl;
    cout << "LINKED LIST DOESN'T EXIST" << endl;
    cout << "*************************" << endl;
    return;
}
else if(head -> next == nullptr){
    head = nullptr;
    cout << "*************************" << endl;
    cout << "LINKED LIST DELETED" << endl;
    cout << "*************************" << endl;
    return;
}else{
    struct node* temp = head;
    head = head -> next;
    head -> prev = nullptr;
    delete temp;
    cout << "*************************" << endl;
    cout << "NODE DELETED" << endl;
    cout << "*************************" << endl;
    return;
}

}

void deleteAtTheEnd(){
if(head == nullptr){
    cout << "*************************" << endl;
    cout << "LINKED LIST DOESN'T EXIST" << endl;
    cout << "*************************" << endl;
    return;
}
else if(head -> next == nullptr){
    head = nullptr;
    cout << "*************************" << endl;
    cout << "LINKED LIST DELETED" << endl;
    cout << "*************************" << endl;
    return;
}else{
    struct node* temp = head;
    while(temp ->next -> next != nullptr){
        temp = temp -> next;
    }
    struct node* deletedNode = temp -> next;
    temp -> next = nullptr;
    delete deletedNode;
    cout << "*************************" << endl;
    cout << "NODE DELETED" << endl;
    cout << "*************************" << endl;
    return;
}
}

void deleteAtThePosition(){

if(head == nullptr){
    cout << "*************************" << endl;
    cout << "LINKED LIST DOESN'T EXIST" << endl;
    cout << "*************************" << endl;
    return;
}

int position;
cout << "*************************" << endl;
cout << "Enter the position: ";
cin >> position;

if(position <= 0){
    cout << "*************************" << endl;
    cout << "INVALID POSITION" << endl;
    cout << "*************************" << endl;
    return;
}

if(position == 1){
if(head -> next == nullptr){
    head = nullptr;
    cout << "*************************" << endl;
    cout << "LINKED LIST DELETED" << endl;
    cout << "*************************" << endl;
    return;
}else{
    struct node* temp = head;
    head = head -> next;
    head -> prev = nullptr;
    delete temp;
    cout << "*************************" << endl;
    cout << "NODE DELETED" << endl;
    cout << "*************************" << endl;
    return;
}

}
struct node* temp = head;
for(int i = 1; i < position - 1 && temp -> next != nullptr; i++){
    temp = temp -> next;
}
if(temp -> next == nullptr ){
    cout << "*************************" << endl;
    cout << "POSITION OUT OF BOUNDS" << endl;
    cout << "*************************" << endl;
    return;
}

struct node* deletedNode = temp -> next;
temp -> next = deletedNode -> next;
if(deletedNode -> next != nullptr){
    deletedNode -> next -> prev = temp;
}

delete deletedNode;
cout << "*************************" << endl;
cout << "NODE DELETED" << endl;
cout << "*************************" << endl;
return;
}

int main(){
int input;


do{
cout << "*************************" << endl;
cout << "CHOOSE 1 TO EXIT\n"
     << "CHOOSE 2 TO DISPLAY THE LINKED LIST\n"
     << "CHOOSE 3 TO CREATE A LINKED LIST\n"
     << "CHOOSE 4 TO INSERT AT THE BEGINNING\n"
     << "CHOOSE 5 TO INSERT AT THE END\n"
     << "CHOOSE 6 TO INSERT AT THE POSITION\n"
     << "CHOOSE 7 TO DELETE AT THE BEGINNING\n"
     << "CHOOSE 8 TO DELETE AT THE END\n"
     << "CHOOSE 9 TO DELETE AT THE POSITION\n"
     << "YOUR CHOICE: ";
    cin >> input;

if(input == 1){
    cout << "************************" << endl;
    cout << "   PROGRAM STOPPED " << endl;
    cout << "************************" << endl;
}

else if(input == 2){
    display();
}

else if(input == 3){
    createLinkedList();
}

else if(input == 4){
    insertAtTheBeginning();
}


else if(input == 5){
    insertAtTheEnd();
}

else if(input == 6){
insertAtThePosition();
}

else if(input == 7){
deleteAtTheBeginning();
}

else if(input == 8){
deleteAtTheEnd();
}

else if(input == 9){
deleteAtThePosition();
}

else{
    cout << "************************" << endl;
cout << "   INVALID INPUT " << endl;
cout << "************************" << endl;
}

}while(input != 1);

return 0;
}