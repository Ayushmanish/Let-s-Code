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
int input(){
    int x;
    cout<<"enter data: ";
    cin>>x;
    return x;
}

void myadd(){
    int x;
    x=input();
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
    int ser,flag=0;
    Node*t,*s;
    cout<<"\nEnter the number to delete:";
    cin>>ser;
    if(head==NULL){
        cout<<"\nlist is empty";
        return;
    }
    if(head->data==ser){
        t=head->next;
        delete head;
        head=t;
        cout<<"\element deleted";
        return;
    }
    for(t=head;t->next!=NULL;t=t->next){
        if(t->next->data==ser){
            s=t->next->next;
            delete t->next;
            t->next=s;
            if(s==NULL){
                tail=t;
            }
            flag=1;
        }
    }
    if(flag==0)
    cout<<"\nelement not found";
    else
    cout<<"\nelement deleted";
}

void ins(Node*r,Node*s){
int x;
Node *t;
x=input();
t=new Node(x);
t->next=s;
r->next=t;
if(r==tail)
tail=t;
}

void myinsert(){
    int ser,ch,x;
    string str;
    Node*t,*s;
    cout<<"\nenter the element";
    cin>>ser;
    if(head->data==ser){
        cout<<"\n1.forwards"
            <<"\n2.backwards"
            <<"\nenter choice:";
        cin>>ch;
        if(ch==1){
            ins(head,head->next);
        }
        else{
            x=input();
            t=new Node(x);
            t->next=head;
            head=t;
        }
        return;
    }
    for(t=head;t->next!=NULL;t=t->next){
        if(t->next->data==ser)
        break;
    }
    if(t->next==NULL){
        cout<<"\nelement not found";
        return;
    }
    cout<<"\n1.forwards"
            <<"\n2.backwards"
            <<"\nenter choice:";
        cin>>ch;

        if(ch==1)
        ins(t->next,t->next->next);
        else
        ins(t,t->next);
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