#include <iostream>
using namespace std;

int arr[10] = {1,2,3,4,5,6,7,8,9,10};
int len = 10;

void linearSearch(){
    int value;
    cout << "Enter the element for Search: ";
    cin >> value;

    for(int i = 0; i < len; i++){
        if(arr[i] == value){
            cout << "************************" << endl;
            cout << "Element found at index: " << i << endl;
            cout << "************************" << endl;
            break;
        }else{
            cout << "************************" << endl;
            cout << "Element not found" << endl;
            cout << "************************" << endl;
            break;
        }
    }
}

int main(){
linearSearch();
return 0;
}