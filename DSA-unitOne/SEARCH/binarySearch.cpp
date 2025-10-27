#include <iostream>
using namespace std;

int arr[10] = {1,2,3,4,5,6,7,8,9,10};
int len = 10;

void binarySearch(){

int low = 0;
int high = len - 1;
int mid;
int value;
cout << "Enter the element for Search: ";
cin >> value;

while(low <= high){
    mid = (low + high)/2;

    if(arr[mid] == value){
        cout << "************************" << endl;
        cout << "Element found at index: " << mid << endl;
        cout << "************************" << endl;
        return;
    }
    else if(arr[mid] < value){
        low = mid + 1;
    }
    else{
        high = mid - 1;
    }
}

cout << "************************" << endl;
cout << "Element not found" << endl;
cout << "************************" << endl;

}

int main(){

binarySearch();

return 0;
}