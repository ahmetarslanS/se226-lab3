#include <iostream>
#include<new>
using namespace std;




    class Node{
public:
    int key;
    int data;
    Node * next;

    Node(){
    key=0;
    data=0;
    next=NULL;


    };

    Node(int k,int d){
    key=k;
    data=d;
    next=NULL;}
    };

    class Stack{
public:
    Node * top;

    Stack(){
    top=NULL;
    }
    bool isEmpty(){
    if(top=NULL){
       return true;}
       else{return false;}



    };
    void push(Node *n){
    if(top==NULL){
    top =n;
    cout<<"Node Pushed"<<endl;
    }else{
        Node *temp= top;
        top = n;
        n-> next= temp;
        cout<<"Node Pushed"<<endl;

    }

    }

    Node * pop(){
    Node * temp=NULL;
    if(isEmpty()){
        cout<<"Stack Underflow"<<endl;
        return temp;
    }
    }

    Node * topValue(){
    if(isEmpty()){
        cout<<"Stack Underflow"<<endl;
        return NULL;

    }else{
        return top;
    }

    };

    int size(){
    int size=0;
    Node * temp= top;
    while(temp!=NULL){
        size++;
        temp=temp->next;

    }
    return size;
    }
    };

int main()
{
Stack stack;
int option, key, data;
do {
    cout << "What operation do you want to perform?" <<
      "Select Option number. Enter 0 to exit." << endl;
    cout << " push()" << endl;
    cout << " pop()" << endl;
    cout << " isEmpty()" << endl;
    cout << " top()" << endl;
    cout << " size()" << endl;
    cin >> option;

    Node * new_node= new Node();

    switch(option){
case 0:
    break;
case 1:
    cout<<"Enter the key and value of node to push in the stack."<<endl;
    cin>>key;
    cin>>data;
    new_node->key=key;
    new_node->data=data;
    stack.push(new_node);
    break;
case 3:
    if(stack.isEmpty())
        cout<<"Stack is empty."<<endl;
    else
        cout<<"Stack is not empty."<<endl;
    break;
case 4:
    if(stack.isEmpty()){
        cout<<"Stack is empty."<<endl;

    }else{
    new_node=stack.topValue();
    cout<<"Top of stack is: (" <<new_node->key<<","<<new_node->data<<","<<endl;
    }
    break;

case 5:
    cout<<"Size of the stack: "<<stack.size()<<endl;
    break;    }
    }while(option!=0);
    return 0;






}
