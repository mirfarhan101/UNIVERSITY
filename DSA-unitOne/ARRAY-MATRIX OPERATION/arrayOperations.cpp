#include <iostream>
using namespace std;
 
int arr[10] = {1,2,3,4,5};
int len = 5;

void insertAtTheBeginning(){
    int value;
    if(len == 10){
        cout << "*****************" << endl;
        cout << " Array is full" << endl;
        cout << "*****************" << endl;
        return;
    }else{
        for(int i = len - 1; i >= 0; i--){
            arr[i+1] = arr[i];
            }
        cout << "Enter the value: " << endl;
        cin >> value;
        arr[0] = value;
        len++;
        return;
    }
}

void insertAtTheEnd(){
    int value;
    if(len == 10){
        cout << "*****************" << endl;
        cout << " Array is full" << endl;
        cout << "*****************" << endl;
        return;
    }else{
        cout << "Enter the value: " << endl;
        cin >> value;
        arr[len] = value;
        len++;
        return;
    }
}

void insertAtThePosition(){
    int value;
    int pos;
    if(len == 10){
        cout << "*****************" << endl;
        cout << " Array is full" << endl;
        cout << "*****************" << endl;
        return;
    }else{
    do{
        cout << "Enter the position: " << endl;
        cin >> pos;
        if(pos <= 0 || pos > len + 1){
        cout << "***********************" << endl;
        cout << "POSITION OUT OF BOUNDS" << endl;
        cout << "***********************" << endl;
        }
    }while(pos <= 0 || pos > len + 1);
    for(int i = len-1; i >= pos - 1; i--){
        arr[i+1] = arr[i];
    }
    cout << "Enter the value: " << endl;
    cin >> value;
    arr[pos - 1] = value;
    len++;
    return;
    }
}

void deleteAtTheBeginning(){
    if(len == 0){
        cout << "*****************" << endl;
        cout << " Array is Empty" << endl;
        cout << "*****************" << endl;
        return;
    }else{
        for(int i = 0; i < len; i++){
            arr[i] = arr[i+1];
            }
            len--;
        return;
    }
}

void deleteAtTheEnd(){
    if(len == 0){
        cout << "*****************" << endl;
        cout << " Array is Empty" << endl;
        cout << "*****************" << endl;
        return;
    }else{
        arr[len - 1] = 0;
        len--;
        return;
    }
}

void deleteAtThePosition(){
    int pos;
    if(len == 0){
        cout << "*****************" << endl;
        cout << " Array is Empty" << endl;
        cout << "*****************" << endl;
        return;
    }else{
    do{
        cout << "Enter the position: " << endl;
        cin >> pos;
        if(pos <= 0 || pos > len){
        cout << "***********************" << endl;
        cout << "POSITION OUT OF BOUNDS" << endl;
        cout << "***********************" << endl;
        }
    }while(pos <= 0 || pos > len);
    for(int i = pos-1; i < len-1; i++){
        arr[i] = arr[i+1];
    }
    len--;
    return;
    }
}

void display(){
    if(len == 0){
        cout << "*****************" << endl;
        cout << " Array is Empty" << endl;
        cout << "*****************" << endl;
        return;
    }else{
        cout << "***********************" << endl;
        for(int i = 0; i < len; i++){
            cout << arr[i] << " ";
            }
        cout << "\n***********************" << endl;
        }
}

int main(){
int input;

do{

cout << "CHOOSE 1 FOR INSERTION AT THE BEGINNING\n"
     << "CHOOSE 2 FOR INSERTION AT THE END\n"
     << "CHOOSE 3 FOR INSERTION AT THE POSITION\n"
     << "CHOOSE 4 FOR DELETION AT THE BEGINNING\n"
     << "CHOOSE 5 FOR DELETION AT THE END\n"
     << "CHOOSE 6 FOR DELETION AT THE POSITION\n"
     << "CHOOSE 7 FOR DISPLAY\n"
     << "CHOOSE 8 FOR EXIT\n"
     << "YOUR CHOICE: ";
    cin >> input;

if(input == 1){
    insertAtTheBeginning();
}

else if(input == 2){
    insertAtTheEnd();
}

else if(input == 3){
    insertAtThePosition();
}

else if(input == 4){
    deleteAtTheBeginning();
}


else if(input == 5){
    deleteAtTheEnd();
}

else if(input == 6){
    deleteAtThePosition();
}

else if(input == 7){
    display();
}

else if(input == 8){
cout << "************************" << endl;
cout << "   PROGRAM STOPPED " << endl;
cout << "************************" << endl;
}

else{
    cout << "************************" << endl;
cout << "   INVALID INPUT " << endl;
cout << "************************" << endl;
}

}while(input !=8);

return 0;
}