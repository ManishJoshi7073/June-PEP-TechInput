#include<bits/stdc++.h>
using namespace std;
class LN
{
public:
    int data;
    LN *next;

    LN(int d)
    {
        data=d;
        next=NULL;
    }
};

LN* makeLL()
{
    int d;
    LN *head=NULL;
    LN *tail=NULL;
    cin>>d;

    while(d != -1)
    {
        LN *node = new LN(d);
        if(head==NULL)
        {
            head=node;
            tail=node;
        }
        else
        {
            tail->next=node;
            tail=node;
        }
        cout<<"ENter next node value: "<<endl;
        cin>>d;
    }
    return head;
}

/*printll(LN *head)
{
    if(!head)return;

    LN *temp = head;
    while(temp)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULLPTR"<<endl;
    return;
}*/

//recursive approach
void printll(LN* head)
{
    if(!head) return;

    LN *temp=head;
    cout<<temp->data<<"->";
    printll(temp->next);
    return;

}
//iteratveApproach
/*int length(LN *head)
{
    if(!head)
    {
        return 0;
    }

    LN *temp=head;
    int i=0;
    while(temp)
    {
            i++;
            temp=temp->next;
    }
    return 1;
}*/

//recurssive approach

int length(LN *head)
{

    if(!head)
    {
        return 0;
    }
    //int smlans = length(head->next);
    //return smlans+1;
    return length(head->next)+1;
}


//Recursive approach
/*LN* reverse(LN* head)
{
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        LN* temp=head->next;
        head->next=NULL;
        reverse(temp);
        temp->next=head;
        return 1;
    }
}*/

 ListNode* reverseList(ListNode* head) {
        
        ListNode* pre = NULL;
        while(head!=NULL)
        {
            ListNode* next = head->next;
            head->next=pre;
            pre=head;
            head=next;
        }
        return pre;
    }

int main()
{
 LN* head=makeLL();
 printll(head);
 cout<<endl;
 cout<<length(head);
    return 0;
    cout<<reverse(head);
}

//ArrayChallenge
int ArrayChallenge(int[] arr)
{
    int n=arr.length;
    int max=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr[n-1];
}

//Array Challenge
int ArrayChallenge(int arr[],int arr_size)
{
    int max=0;
    for(int i=0;i<arr_size;i++)
    {
        for(int j=i+1;j<arr_size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr[arr_size-1];
}

//String Challenge

string StringChallenge(string str)
{
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(str[i]>str[j])
            {
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    return str;
}