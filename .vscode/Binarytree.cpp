#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    struct node* right;
    struct node* left;

    node(int data){
        this->data = data;
        right = NULL;
        left = NULL;
    }
};
vector<vector<int>> ans;

node* buildTree(node* root)
{
    cout<<"Enter Data: ";
    int data;
    cin>>data;
    if(data == -1)
    {
        return NULL;
    }
    root = new node(data);
    cout<<"Enter Data to be inserted in left of "<<data<<endl;
    root->left = buildTree(root->left);
     cout<<"Enter Data to be inserted in right of "<<data<<endl;
     root->right = buildTree(root->right);

     return root;
}
void levelOrderTraversal(node* root){

    queue <node*> q;
    q.push(root);
    q.push(NULL);
// 
    // while(!q.empty()){
    //     node* temp = q.front();
    //     q.pop();

    //     // if(temp == NULL)
    //     // {
    //     //     cout<<endl;
    //     //     if(!q.empty())
    //     //     {
    //     //         q.push(NULL);
    //     //     }
    //     // }
    //     // else{
    //         cout<<temp->data<<" ";

    //         if(temp->left)
    //         {
    //         q.push(temp->left);
    //         }
    //         if(temp->right)
    //         {
    //         q.push(temp->right);
    //         }
    //     // }
     
    vector <int> v;
    while (!q.empty()) {
    node* temp = q.front();
    q.pop();

    if (temp == NULL) {
        ans.push_back(v);
        v.clear();

        if (!q.empty())
            q.push(NULL);
    } else {
        v.push_back(temp->data);

        if (temp->left)
            q.push(temp->left);

        if (temp->right)
            q.push(temp->right);
    }
}
}
int main()
{
    node* root = NULL;
    root = buildTree(root);
    levelOrderTraversal(root);
    for(int i = 0 ; i< ans.size() ; i++)
    {
        for(int j = 0 ; j < ans[i].size() ; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}