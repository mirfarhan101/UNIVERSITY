#include <iostream>
using namespace std;

int arr[10];
int back  = -1;
const int MAX = 9;

void enque(){
    if(back == MAX){
        cout << "************************" << endl;
        cout << "   QUEUE IS FULL " << endl;
        cout << "************************" << endl;
        return;  
    }else{
        int value = 0;
        cout << "Enter the value: ";
        cin >> value;
        arr[++back] = value;
        cout << "************************" << endl;
        cout << arr[back] << " was added to the queue" << endl;
        cout << "************************" << endl;

    }
    return;
}

void deque(){
     if(back == -1){
        cout << "************************" << endl;
        cout << "   QUEUE IS EMPTY " << endl;
        cout << "************************" << endl;
        return;
    }
    else{
        cout << "************************" << endl;
        cout << arr[0] << " popped from the queue" << endl;
        cout << "************************" << endl;
        for(int i = 0; i < back; i++){
            arr[i] = arr[i + 1];
        }
        --back;
        return;
    }
}

void peek(){
    if(back == -1){
        cout << "************************" << endl;
        cout << "  QUEUE IS EMPTY  " << endl;
        cout << "************************" << endl;
        return;
    }
    else{
        cout << "*****************************" << endl;
        cout << arr[0] << " is at the front of the queue  " << endl;
        cout << "*****************************" << endl;
        return;
    }
}

void isEMPTY(){
    if(back == -1){
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
    if(back == MAX){
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
if(back == -1){
    cout << "************************" << endl;
    cout << "   STACK IS EMPTY  " << endl;
    cout << "************************" << endl;
    return;
}
else{
    cout << "************************" << endl;
    cout << "Front -> ";
    for(int i = 0; i <= back; i++){
        cout << arr[i] << " ";
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