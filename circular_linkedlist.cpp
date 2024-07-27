#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;

Node(int data){
    this->data=data;
    this->next=NULL;
}
};

Node *head,*tail;

int input(){
    int x;
    cout<<"\nenter the data: ";
    cin>>x;
    return x;
}
void myadd(){
    int x;
    x=input();
    Node*t=new Node(x);
    if(head==NULL)
    head=t;
    else{
        tail->next=t;    
    }
}

void display(){

}

void mydel(){

}

void ins(){

}

void myinsert(){

}

int main(){
head=NULL;
   int choice;
   while(1){
    cout<<"\n1.add"
        <<"\n2.display"
        <<"\n3.delete"
        <<"\n4.insert"
        <<"\n5.exit"
        <<"\nEnter choice: ";
    cin>>choice;    
    switch(choice)
    {
        case 1: myadd(); break;
        case 2: display(); break;
        case 3: mydel(); break;
        case 4: myinsert(); break;
        case 5: exit(1); break;
    }
   }
    return 0;
}