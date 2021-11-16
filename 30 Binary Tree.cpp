#include <iostream>
#include <conio.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};
Node *root = NULL;
Node *LOC = NULL, *PAR = NULL;
void search(int item)
{
    Node *ptr, *save;
    if (root == NULL)
    {
        LOC = NULL;
        PAR = NULL;
        return;
    }
    if (root->data == item)
    {
        LOC = root;
        PAR = NULL;
        return;
    }
    if (root->data > item)
    {
        ptr = root->left;
        save = root;
    }
    else
    {
        ptr = root->right;
        save = root;
    }
    while (ptr != NULL)
    {
        if (ptr->data == item)
        {
            LOC = ptr;
            PAR = save;
            return;
        }
        if (ptr->data > item)
        {
            save = ptr;
            ptr = ptr->left;
        }
        else
        {
            save = ptr;
            ptr = ptr->right;
        }
    }
    LOC = NULL;
    PAR = save;
}
void insert(int d)
{
    search(d);
    if (LOC != NULL)
    {
        cout << "Element already there";
        return;
    }
    Node *n1 = new Node;
    n1->data = d;
    n1->left = NULL;
    n1->right = NULL;
    if (PAR == NULL)
    {
        root = n1;
        return;
    }
    if (PAR->data > d)
    {
        PAR->left = n1;
    }
    else
        PAR->right = n1;
}
void CASEA(Node *L, Node *P)
{
    Node *CHILD;
    if (L->left == NULL && L->right == NULL)
        CHILD = NULL;
    if (L->left != NULL)
    {
        CHILD = L->left;
    }
    else
        CHILD = L->right;
    if (P != NULL)
    {
        if (P->left == L)
            P->left = CHILD;
        else
            P->right = CHILD;
    }
    else
        root = CHILD;
}
void CASEB(Node *L, Node *P)
{
    Node *ptr, *save = L, *SUC, *PARSUC;
    ptr = L->right;
    while (ptr->left != NULL)
    {
        save = ptr;
        ptr = ptr->left;
    }
    SUC = ptr;
    PARSUC = save;
    CASEA(SUC, PARSUC);
    if (P != NULL)
    {
        if (P->left == L)
            P->left = SUC;
        else
            P->right = SUC;
    }
    else
        root = SUC;

    SUC->left = L->left;
    SUC->right = L->right;
}
void DeleteNode(int d)
{
    search(d);
    if (LOC == NULL)
    {
        cout << "data not available";
        return;
    }
    if (LOC->left != NULL && LOC->right != NULL)
    {
        CASEB(LOC, PAR);
    }
    else
    {
        CASEA(LOC, PAR);
    }
}
void preorder(Node *ptr)
{
    if (ptr != NULL)
    {
        cout << ptr->data << ",";
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
void inorder(Node *ptr)
{
    if (ptr != NULL)
    {

        inorder(ptr->left);
        cout << ptr->data << ",";
        inorder(ptr->right);
    }
}
int main()
{
    insert(45);
    insert(70);
    insert(30);
    insert(28);
    insert(15);
    insert(80);
    insert(47);
    insert(89);
    insert(56);
    insert(7);
    insert(16);
    insert(19);
    preorder(root);
    cout << endl
         << "tree after deleting 19" << endl;
    DeleteNode(19);
    preorder(root);
    cout << endl
         << "tree after deleting 47" << endl;
    DeleteNode(47);
    preorder(root);
    cout << endl
         << "tree after deleting 45" << endl;
    DeleteNode(45);
    preorder(root);
    return 0;
}