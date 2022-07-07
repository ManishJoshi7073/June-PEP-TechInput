// Array Challenge
int ArrayChallenge(int arr[], int arr_size)
{
    int max = 0;
    for (int i = 0; i < arr_size; i++)
    {
        for (int j = i + 1; j < arr_size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[arr_size - 1];
}

// String Challenge

string StringChallenge(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    return str;
}

// binary tree
BTnode *makeBT()
{
    int val;
    cin>>val;
    if(val==-1)
    {
        return NULL;
    }
    BTnode* root=new BTnode(val);
    queue<BTnode*> q;
    q.push(root);
    while(!q.empty())
    {
        BTnode* temp=q.front();
        q.pop();
        cout<<"Enter left child of "<<temp->data<<endl;
        cin>>val;
        if(val!=-1)
        {
            temp->left=new BTnode(val);
            q.push(temp->leftLC);
        }
        cout<<"Enter right child of "<<temp->data<<endl;
        cin>>val;
        if(val!=-1)
        {
            temp->right=new BTnode(val);
            q.push(temp->rightLC);
        }
    }
    return root;
}