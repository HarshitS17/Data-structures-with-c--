#include<iostream>
#include<stack>
using namespace std;

//stacks are based on FILO --> First in Last out 
int main(){
    stack<string> name;

    name.push("Harshit");
    name.push("Saini");

    cout<<"the top element of the stack is :"<<name.top()<<endl;
    
    name.pop(); // it'll delete the top element 

    cout<<"the top element of the stack is :"<<name.top()<<endl;
    cout<<"SIze of the Stack : "<<name.size()<<endl;
    cout<<"is it empty or not : "<<name.empty()<<endl;
    

}