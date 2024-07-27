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
    Node *t,*s;
    int x;
    cout<<"\nenter data";
    cin>>x;
    t=new Node(x);
    if(head==NULL){
        head=t;
        tail=t;
        return;
    }
    if(t->data < head->data){
        t->next=head;
        head=t;
        return;
    }
    for(s=head;s->next!=NULL;s=s->next){
        if(t->data < s->next->data){
            t->next=s->next;
            s->next=t;
            break;
        }
    }
    if(s->next==NULL){
        s->next=t;
        tail=t;
    }
}

void display(){
    Node *t;
    if(head==NULL){
        cout<<"\nlist is empty";
        return;
    }
    for(t=head;t!=NULL;t=t->next)
    cout<<" "<<t->data;
}
int main(){
   head=NULL;
   int choice;
   while(1){
    cout<<"\n1.add"
        <<"\n2.display"
        <<"\n3.exit"
        <<"\nEnter choice: ";
    cin>>choice;    
    switch(choice)
    {
        case 1: myadd(); break;
        case 2: display(); break;
        case 3: exit(1); break;
    }
   }
    return 0;
}