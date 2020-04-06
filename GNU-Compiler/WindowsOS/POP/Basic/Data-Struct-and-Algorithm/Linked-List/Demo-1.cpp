/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

struct node
{
    int key;
    int data;
    node *next;
};
node *head = NULL;

void InsertFirst(int temp_key)
{
    cout << "Nhap Data";
    int temp_data;
    cin >> temp_data;

    node *ptr = new node;
    ptr->key = temp_key;
    ptr->data = temp_data;

    ptr->next = head;
    head = ptr;
}
void PrintTypeJSON(node* &ptr)
{
    cout << endl << "{" << endl;
    cout << "Key: " << ptr->key << endl;
    cout << "Data: " << endl;
    cout << "{" << endl;
    cout << ptr->data << endl;
    //ptr->data.output();
    cout << "}" << endl;
    cout << "}" << endl;
}
void DisplayForward()
{
    node *ptr = head;
    while (ptr != NULL)
    {
        PrintTypeJSON(ptr);
        ptr = ptr->next;
    }
    cout << endl;
}

void DeleteFirstNode()
{
    head = head->next;
}

bool IsEmpty()
{
    if (head == NULL) return true; else return false;
}

int Length ()
{
    int length = 0;
    node* ptr = head;

    while (ptr != NULL)
    {
        length++;
        ptr = ptr->next;
    }
    /*
    Cách này cũng được
    node *ptr = new node;
    for(ptr = head; ptr != NULL; ptr = ptr->next) length++;
    */
    return length;

}

node* FindNodeWithKey(int key)
{
    node* ptr;
    for (ptr = head; ptr != NULL; ptr = ptr->next)
    {
        if (ptr->key == key)
            return ptr;
    }
    return NULL;
}

node* DeleteNodeWithKey(int key)
{
    node* ptr = head;
    node* previous = NULL;

    if (IsEmpty) return NULL;
    else
    {
        while (ptr->key != key)
        {
            if (ptr->next == NULL)
                return NULL;
            else
            {

                previous = ptr;
                ptr = ptr->next;
            }
        }
    }

    if (ptr == head) head = head->next; else previous->next = ptr->next;
    return ptr;
}

void BubbleSort()
{
    /*
    node *ptr;
    node *next;

    int size = Length();
    int k = size;
    int temp_key, temp_data;

    for (int i = 1; i < size; i++, k--)
    {
        ptr = head;
        next = head->next;

        for (int  j = 1; j < k; j++)
        {
            if (ptr->data > next->data)
            {
                temp_key = ptr->key;
                ptr->key = next->key;
                next->key = temp_key;

                temp_data = ptr->data;
                ptr->value = next->value;
                next->value = temp_data;
            }
            ptr = ptr->next;
            next = next->next;
        }
    }
    */
    for (node *i = head; i != NULL; i = i->next)
        for (node *j = i->next; j != NULL; j = j->next)
            if (i->data > j->data) swap(i,j);
    
}

void ReverseList (node **head_ref)
{
    // Dùng point to point vì linked-list không sắp xếp tuần tự trong stack, nên sẽ phải dùng địa chỉ để trỏ tới
    // Từ đó cho thấy ta cần dùng con trỏ để lưu địa chỉ con trỏ
    node* prev   = NULL;
    node* current = *head_ref;
    node* next;

    while (current != NULL) {
        next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }

    *head_ref = prev;
}

int main()
{
    freopen(fi);
    freopen(fo);
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    cout << "Nhap So Luong Phan Tu: "; int n; cin >> n;
    for (int i = 0;  i < n; i++)
        InsertFirst(i);
    
    cout << endl << endl;
    DisplayForward();
}

/*
//////////////////////////////
/////		Input		//////
//////////////////////////////

5
2 1 4 3 5


//////////////////////////////
*/