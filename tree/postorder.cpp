#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data = 0;
    node *left = NULL;
    node *right = NULL;
    node(int val)
    {
        this->data = val;
    }
};
//DFS
void preorder(node *root)
{
    if (root == NULL)
        return;
  
    preorder(root->left);
      cout << root->data << " ";
    preorder(root->right);
}

int main()
{
    node *root = new node(10);
    cout << root->left << " " << root->right << " " root->data << endl;
    node *rbu = new node(10);
    node *arjun = new node(9);
    node *shivam = new node(18);

    // connect
    //  rbu->left=shivam;#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data=0;
    Node *left=NULL;
    Node* right=NULL;
    Node(int val){
        this->data=val;
    }
};

void preorder(Node* root){
      if(root==NULL)
      return;
      
    
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
//   Node* root=new Node(10);
//   cout<<root->left<<" "<<root->right<<" "<<root->data<<endl;

// Node* rbu=new Node(10);
// Node* arjun=new Node(9);
// Node* shivam=new Node(18);
// rbu->left=shivam;
// rbu->right=arjun;

// cout<<rbu->right->data;


       Node* rbu=new Node(10);
       rbu->right=  new Node(9);
       rbu->left= new Node(18);
      rbu->right->right= new Node(100);
       rbu->right->left= new Node(200);

    //    dfs->preoprder, inorder, postorder
    preorder(rbu);

}
    //  rbu->right=arjun;

    rbu->right = new node(9);
    rbu->left = new node(18);

    rbu->right->=new node(100);
    rbu->right->left=new node(200);
    cout << rbu->right->data;
    return 0;
}
