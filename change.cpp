#include <iostream>
using namespace std;
int notes[] = {1000,500,100,50,10,5,2,1};
int change[8];

void print(){
    cout << change[0] << " *1000, " << change[1] << " *500 , " << change[2] << " 100, " << change[3] << " *50, " << change[4] << " *10, " 
         << change[5] << " *5, " << change[6] << " *2, " << change[7] << " *1." << endl;
}

void calculate(){
    int Amount;
    cout << "Enter Amount: ";
    cin >> Amount;

    for(int i = 0; i < 8; i++){
        change[i]= Amount/notes[i];
        Amount = Amount % notes[i];
        if(Amount == 0){
            print();
            break;
        }
    }

}

int main(){

calculate();

return 0;
}