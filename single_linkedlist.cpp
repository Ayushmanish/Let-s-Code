#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

Node *head,*tail;
void myadd(){
    int x;
    cout<<"enter data";
    cin>>x;
    Node *temp=new Node(x);
    if(head==NULL)
    head=temp;
    else
    tail->next=temp;

    tail=temp;
}

void display(){
    if(head==NULL){
        cout<<"linked list is empty";
        return;
    }
    Node*t;
    for(t=head;t!=NULL;t=t->next){
        cout<<" "<<t->data;
    }
}

void mydel(){
    if(head==NULL){
        cout<<"linked list is empty";
        return;
    }
    Node*t;
    t=head->next;
    delete head;
    head=t;
}

int main(){
   head=NULL;
   int choice;
   while(1){
    cout<<"\n1.add"
        <<"\n2.display"
        <<"\n3.delete"
        <<"\n4.exit"
        <<"\nEnter choice: ";
    cin>>choice;    
    switch(choice)
    {
        case 1: myadd(); break;
        case 2: display(); break;
        case 3: mydel(); break;
        case 4: exit(1); break;
    }
   }
    return 0;
}