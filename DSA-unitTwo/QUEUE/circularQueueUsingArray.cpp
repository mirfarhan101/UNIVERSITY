#include <iostream>
using namespace std;

int arr[10];
int front = -1;
int back  = -1;
const int size = 10;

void enque(){
    if((back+1) % size == front){
        cout << "************************" << endl;
        cout << "   QUEUE IS FULL " << endl;
        cout << "************************" << endl;
        return;  
    }else if(front == -1 && back == -1){
        int value = 0;
        cout << "Enter the value: ";
        cin >> value;
        ++front;
        arr[++back] = value;
        cout << "************************" << endl;
        cout << arr[back] << " was added to the queue" << endl;
        cout << "************************" << endl;
        return;
    }else{
        int value = 0;
        cout << "Enter the value: ";
        cin >> value;
        back = (back+1)%size;
        arr[back] = value;
        cout << "************************" << endl;
        cout << arr[back] << " was added to the queue" << endl;
        cout << "************************" << endl;
        return;
    }
    
}

void deque(){
     if(front == -1){
        cout << "************************" << endl;
        cout << "   QUEUE IS EMPTY " << endl;
        cout << "************************" << endl;
        return;
    }
    else if(front == back){
        cout << "************************" << endl;
        cout << arr[front] << " popped from the queue" << endl;
        cout << "************************" << endl;
        front = back = -1;
        return;
    }
    else{
        cout << "************************" << endl;
        cout << arr[front] << " popped from the queue" << endl;
        cout << "************************" << endl;
        front = (front+1)%size;
        return;
    }
}

void peek(){
    if(front == -1){
        cout << "************************" << endl;
        cout << "  QUEUE IS EMPTY  " << endl;
        cout << "************************" << endl;
        return;
    }
    else{
        cout << "*****************************" << endl;
        cout << arr[front] << " is at the front of the queue  " << endl;
        cout << "*****************************" << endl;
        return;
    }
}

void isEMPTY(){
    if(front == -1){
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

void isFULL(){
    if((back+1)%size == front){
        cout << "************************" << endl;
        cout << "   QUEUE IS FULL  " << endl;
        cout << "************************" << endl;
        return;
    }
     else{
        cout << "************************" << endl;
        cout << "   QUEUE IS NOT FULL  " << endl;
        cout << "************************" << endl;
        return;
    }
}

void display(){
if(front == -1){
    cout << "************************" << endl;
    cout << "   QUEUE IS EMPTY  " << endl;
    cout << "************************" << endl;
    return;
}
else{
    cout << "************************" << endl;
    cout << "Front -> ";
    int i = front;
    while(true){
        cout << arr[i] << " ";
        if(i == back)break;
        i = (i+1)%size;
    }
    cout << " <- Back";
    cout << "\n************************" << endl;
    return;
}
}


int main(){
int input;

do{

cout << "CHOOSE 1 FOR ENQUE\n"
     << "CHOOSE 2 FOR DEQUE\n"
     << "CHOOSE 3 FOR PEEK\n"
     << "CHOOSE 4 FOR isEMPTY\n"
     << "CHOOSE 5 FOR isFULL\n"
     << "CHOOSE 6 FOR DISPLAY\n"
     << "CHOOSE 7 FOR EXIT\n"
     << "YOUR CHOICE: ";
    cin >> input;

if(input == 1){
    enque();
}

else if(input == 2){
    deque();
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