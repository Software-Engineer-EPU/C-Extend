/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "/media/developer-kingnnt/Learning And Working/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

typedef struct Node
{
    int data;
    Node *left;
    Node *right;
} node_t;

// Ham Xoa Node
void Free(node_t *root)
{
    if (root == NULL)
        return;

    Free(root->left);
    Free(root->right);
    free(root);
}

// Ham Khoi Tao
void Initialization(node_t *root)
{
    root = NULL;
}

int LeftOf(const int value, const node_t *root)
{
    // Nếu bạn muốn cây BST cho phép giá trị trùng lặp, hãy sử dụng dòng code thứ 2
    return value < root->data;
    //    return value <= root->data;
}

int RightOf(const int value, const node_t *root)
{
    return value > root->data;
}

node_t *Insert(node_t *root, const int value)
{
    if (root == NULL)
    {
        node_t *node = new node_t;
        node->left = NULL;
        node->right = NULL;
        node->data = value;
        return node;
    }
    if (LeftOf(value, root))
        root->left = Insert(root->left, value);
    else if (RightOf(value, root))
        root->right = Insert(root->right, value);
    return root;
}

int LeftMostValue(const node_t *root)
{
    while (root->left != NULL)
        root = root->left;
    return root->data;
}

node_t *Delete(node_t *root, int value)
{
    if (root == NULL)
        return root;
    if (LeftOf(value, root))
        root->left = Delete(root->left, value);
    else if (RightOf(value, root))
        root->right = Delete(root->right, value);
    else
    {
        // root->data == value, delete this node
        if (root->left == NULL)
        {
            node_t *newRoot = root->right;
            free(root);
            return newRoot;
        }
        if (root->right == NULL)
        {
            node_t *newRoot = root->left;
            free(root);
            return newRoot;
        }
        root->data = LeftMostValue(root->right);
        root->right = Delete(root->right, root->data);
    }
    return root;
}

/*
PreOrder: Node -> Left -> Right
InOrder: Left -> Node -> Right
PostOrder: Left -> Right -> Node
*/


void PreOrder(node_t *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

void InOrder(node_t *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
    }
}

void PostOrder(node_t *root)
{
    if (root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    //freopen(fi);
    freopen(fo);
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    node_t *root;
    Initialization(root);

    root = Insert(root, 25);
    root = Insert(root, 15);
    root = Insert(root, 50);
    root = Insert(root, 10);
    root = Insert(root, 22);
    root = Insert(root, 35);
    root = Insert(root, 70);
    root = Insert(root, 4);
    root = Insert(root, 12);
    root = Insert(root, 18);
    root = Insert(root, 24);
    root = Insert(root, 31);
    root = Insert(root, 44);
    root = Insert(root, 66);
    root = Insert(root, 90);
    printf("\nDuyet preorder : ");
    PreOrder(root);
    printf("\nDuyet inorder  : ");
    InOrder(root);
    printf("\nDuyet postorder:");
    PostOrder(root);

    printf("\n==Thu them phan tu 15 vao BTS==\n");
    Insert(root, 15);
    printf("\nDuyet preorder : ");
    PreOrder(root);
    printf("\nDuyet inorder  : ");
    InOrder(root);
    printf("\nDuyet postorder:");
    PostOrder(root);

    printf("\n==Thu xoa phan tu 50 khoi BTS==\n");
    Delete(root, 50);
    printf("\nDuyet preorder : ");
    PreOrder(root);
    printf("\nDuyet inorder  : ");
    InOrder(root);
    printf("\nDuyet postorder:");
    PostOrder(root);

    Free(root);
    root = NULL;
    return 0;
}