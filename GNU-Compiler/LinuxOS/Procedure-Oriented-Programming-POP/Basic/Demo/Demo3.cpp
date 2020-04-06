//* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "/media/kingnnt/Learning And Working/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

struct node
{
    int data;
    node *left;
    node *right;
};
struct node root;

//typedef struct node *tree;

void khoitao(tree &root)
{
    root = NULL;
}

node *taonut(int x)
{
    node *p = new node;
    if (p != NULL)
    {
        p->data = NULL;
        p->left = NULL;
        p->right = NULL;
    }
    return p;
}

void chennut(tree &root, node *p)
{
    if (root != NULL)
    {
        if (root->data < p->data)
            chennut(root->right, p);
        else if (root->data > p->data)
            chennut(root->left, p);
        else
        {
            cout << "nut dax ton tai";
            return;
        }
    }
    else
        root = p;
}
void duyettruoc(tree root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        duyettruoc(root->left);
        duyettruoc(root->right);
    }
}
void duyetgiua(tree root)
{
    if (root != NULL)
    {
        duyetgiua(root->left);
        cout << root->data << " ";
        duyetgiua(root->right);
    }
}
void duyetsau(tree root)
{
    if (root != NULL)
    {
        duyetsau(root->left);
        duyetsau(root->right);
        cout << root->data << " ";
    }
}
node *timkiem(tree root, int x)
{
    if (root != NULL)
    {
        if (root->data == x)
            return root;
        if (root->data > x)
            return timkiem(root->left, x);
        else
            return timkiem(root->right, x);
    }
    return NULL;
}
void timnutthaythe(tree &p, root &q)
{
    if (q->left)
        timnutthaythe(p, p->left);
    else
    {
        p->data = q->data;
        p->q
            q = p->right;
    }
}
int xoanut(tree &root, data x)
{
    if (root == NULL)
        return 0;
    if (root->data > x)
        return xoanut(root->left, x);
    if (root->data < x)
        return xoanut(root->right, x);
    node *p = root;
    if (root->left == NULL)
        root = root->right;
    if (root->right == NULL)
        root = root->left;
    else
        timkiemnutthaythe(p, root->right);
    delete p;
}

int main()
{
    freopen(fi);
    freopen(fo);
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    tree root;
    khoitao(root);
    cout << "nhap n = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "nhap gia tri ";
        cin >> x;
        node *p = taonut(x);
        if (p != NULL)
            chennut(root, p);
    }
    cout << "duyet cay theo thu tu truoc : \n ";
    duyettruoc(root);
    cout << "duyet cay theo thu tu giua : \n ";
    duyetgiua(root);
    cout << "duyet cay theo thu tu sau : \n ";
    duyetsau(root);
}
