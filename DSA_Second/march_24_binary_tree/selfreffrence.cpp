// #include <iostream>
// using namespace std;
// class node
// {
//     public:int data;
//     node *l;
//     node *r;
// public:
//     node(int d)
//     {
//         data = d;
//         l = NULL;
//         r = NULL;
//     }
// };
// int main()
// {
//     node *root = new node(10);
//     root->l = new node(20);
//     root->r = new node(30);
//     cout<<root->data<<"\n";
//     cout<<root->l->data<<"\n";
//     cout<<root->r->data<<"\n";
// }



// function formate 

#include <iostream>
using namespace std;
class node
{
    public:int data;
    node *l;
    node *r;
public:
    node(int d)
    {
        data = d;
        l = NULL;
        r = NULL;
    }
};
void preorder(node *root)
{
    if(root!= NULL)
    {
        return;
    }
    cout<<root->data<<"\n";
    preorder(root->l);
    preorder(root->r);
}
void postorder(node *root)
{
    if(root!= NULL)
    {
        return;
    }
    postorder(root->l);
    postorder(root->r);
    cout<<root->data<<"\n";
}
void inorder(node *root)
{
    if(root!= NULL)
    {
        return;
    }
    inorder(root->l);
    cout<<root->data<<"\n";
    inorder(root->r);
}
int main()
{
    node *root = new node(10);
    root->l = new node(20);
    root->r = new node(30);
    cout<<root->data<<"\n";
    cout<<root->l->data<<"\n";
    cout<<root->r->data<<"\n";
    preorder(root);
    postorder(root);
    inorder(root);
}