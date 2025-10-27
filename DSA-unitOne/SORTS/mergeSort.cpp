#include <iostream>
using namespace std;

int arr[10] = {5,1,2,7,3,6,9,10,8,4};
int len = 10;
int low = 0;
int high = 9;

void merge(int arr[], int low, int mid, int high){
    int lSize = mid - low + 1;
    int rSize = high - mid;

    int arrLeft[lSize];
    int arrRight[rSize];

    for(int i = 0; i < lSize; i++){
        arrLeft[i] = arr[i + low];
    }

    for(int j = 0; j < rSize; j++){
        arrRight[j] = arr[j+mid+1];
    }

int i = 0;
int j = 0;
int k = low;

while(i < lSize && j < rSize){
    if(arrLeft[i] < arrRight[j]){
        arr[k++] = arrLeft[i++];
    }
    else{
        arr[k++] = arrRight[j++];
    }
}

while(i < lSize){
    arr[k++] = arrLeft[i++];
}

while(j < rSize){
    arr[k++] = arrRight[j++];
}

}

void mergeSort(int arr[], int low, int high){
    if(low < high){
        int mid = (low + high)/2;
        
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

void print(){
    cout << "************************" << endl;
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << "\n************************" << endl;
        return;
}

int main(){

cout << "UNSORTED ARRAY: "<< endl;
print();
mergeSort(arr, low, high);
cout << "SORTED ARRAY: " << endl;
print();

return 0;
}