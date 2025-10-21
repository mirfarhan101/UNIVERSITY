#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

string expression = ""; 
string postfixExpression = ""; 
int length;
map<char, int> precedence = {
    {'+', 1},
    {'-', 1},
    {'*', 2},
    {'/', 2},
    {'^', 3}, 
};

char arr[20];
int top = -1;


void push(char c){
    arr[++top] = c;
    return;
}
  
void pop(){
    postfixExpression += arr[top];
    top--;
}

void postfix(){
expression.erase(remove(expression.begin(), expression.end(), ' '), expression.end());
length = expression.length();
    for(int i = 0; i < length; i++){
        
        if (isdigit(expression.at(i)) || isalpha(expression.at(i))) {
            postfixExpression += expression.at(i);
        } 
        else if(expression.at(i) == '('){
            push(expression.at(i));
        }
        else if(expression.at(i) == '+' || expression.at(i) == '-' || expression.at(i) == '*' || expression.at(i) == '/' || expression.at(i) == '^'){
            if(top == -1){
                push(expression.at(i));}
            else if(precedence[expression.at(i)] <= precedence[arr[top]]){
                while(top != -1 && arr[top] != '(' && precedence[expression.at(i)] <= precedence[arr[top]]){
                    pop();
                }    
                push(expression.at(i));
            }
            else if(precedence[expression.at(i)] >= precedence[arr[top]]){   
                push(expression.at(i));
            }
        }
        else if(expression.at(i) == ')'){
        while(arr[top] != '('){
            pop();
        }
        top--;
        }
        else {
            cout << expression.at(i) << " -> Unknown symbol" << endl;
        }
    }
    
    while(top != -1){
        postfixExpression += arr[top];
        top--;
    }

cout << "Postfix Expression: " << postfixExpression << endl;
}

int main(){

cout << "Enter the Expression: ";
getline(cin, expression);
length = expression.length();
postfix();


return 0;
}