#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    node*next;
};
struct node *ptr,*START;
void push()
{
    int n,i;
    int rollno;
    char name[20];
    cout<<"Enter the total number of Students: ";
    cin>>n;
    ptr=new node;
    START=ptr;
    for(i=1;i<=n;i++)
    {
        cout<<"Enter the data "<<i<<" node: "<<endl;
        cout<<"Enter your rollno: ";
        cin>>rollno;
        ptr->data=rollno;
        if(i==n)
        {
            ptr->next=NULL;
        }
        else
        {
            ptr->next=new node;
            ptr=ptr->next;
        }

    }

}
void disp()
{
     cout<<"Content of the list"<<endl;
    ptr=START;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
void pop()
{
        struct node*r1,*r2;
        ptr=START;
           if(ptr==NULL)
        {
            cout<<"Deletion not possible\n";
        }
        else if(ptr->next==NULL)
        {
           r1=ptr;
           ptr=NULL;
           free(r1);
        }
        else{
                r1=ptr;
                r2=ptr->next;
            while(r2->next!=NULL)
            {
                r1=r2;
                r2=r2->next;
            }
            r1->next=NULL;
            cout<<"employee id "<<r2->data<<" Removed\n";
            free(r2);
        }
}
int main()
{
    int choice;
    while(1)
    {
    cout<<"1: Push"<<endl;
    cout<<"2: Pop"<<endl;
    cout<<"3: Display"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
    case 1: push();
    break;
    case 2: pop();
    break;
    case 3: disp();
    break;
    default:cout<<"Invalid choice";
            }
    }
    return 0;
}
