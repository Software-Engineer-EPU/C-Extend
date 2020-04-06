/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

struct node
{
    int data;
    int key;
    node *next;
};

node *head = NULL;
node *current = NULL;

// Hiển thị danh sách
void output_linked_list ()              
{
    node *ptr = head;

    // Bắt đầu từ phần tử đầu trong danh sách
    while(ptr != NULL)
    {
        cout << "[" << ptr->key  << " " << ptr->data << "]" << "    ";
        ptr = ptr -> next;
    }
    cout << endl;
    // Head ban đầu sẽ là last
    // link trong hàm insertFirst là head lúc sau
}

// Chèn Link tại vị trí đầu tiên
void insertFirst (int key, int data)
{
   // Tạo 1 link mới
   node *link = new node;
   link->key = key;
   link->data = data;
	
   // Trỏ link này tới first node cũ
   link->next = head;
	
   // Gán first tới first node mới
   head = link;
}

// Xóa phần tử đầu tiên
node* deleteFirst ()
{
    // Lưu tham chiếu tới first link
    node *tempLink = head;

    // Đánh dấu next tới first link là first
    head = head->next;

    // Trả về link bị xóa
    return tempLink;
}

// Check link rỗng
bool isEmpty()
{
   return head == NULL;
}

// Tìm độ dài của linked_list
int length()
{
    int length = 0;
    node *current;
    for(current = head; current != NULL; current = current->next)
    {
        length++;
    }
    return length;
}

// Tìm 1 node với key đã cho
 node* find(int key)
{
    // Bắt đầu tìm từ first link
    struct node* current = head;

    if(head == NULL)
    {
        return NULL;
    }

    // Duyệt qua list
    while(current -> key != key){

        // Nếu đây là last node
        if(current -> next == NULL)
        {
            return NULL;
        }
        else
        {
            // Di chuyển tới next link
            current = current->next;
        }
    }      

    // Nếu tìm thấy dữ liệu trả về link hiện tại
    return current;
}

// Xóa một link với key đã cho
node* deleteKey(int key)
{

    // Bắt đầu từ first link
    node* current = head;
    node* previous = NULL;

    if(head == NULL)
    {
        return NULL;
    }

    // Duyệt qua list
    while(current->key != key)
    {
        // Nếu đây là last node
        if(current->next == NULL)
        {
            return NULL;
        }
        else
        {
            // Lưu tham chiếu tới link hiện tại
            previous = current;
            // Di chuyển tới next link
            current = current->next;             
        }
        
    }

    // Cập nhật link
    if(current == head) {
        // Thay đổi first để trỏ tới next link
        head = head->next;
    }
    else
    {
        // Bỏ qua link hiện tại
        previous->next = current->next;
    }    

    return current;
}

// Hàm sắp xếp
void sort()
{
    int tempKey, tempData ;
    struct node *current;
    struct node *next;

    int size = length();
    int k = size ;

    for ( i = 0 ; i < size - 1 ; i++, k-- ) {
        current = head ;
        next = head->next ;
        
        for ( j = 1 ; j < k ; j++ )
        {   
        
            if ( current->data > next->data )
            {
                tempData = current->data ;
                current->data = next->data;
                next->data = tempData ;

                tempKey = current->key;
                current->key = next->key;
                next->key = tempKey;
            }
            
            current = current->next;
            next = next->next;                        
        }
    }   
}

// Hàm đảo ngược list
void reverse(node** head_ref)
{
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

    insertFirst(1,7);
    insertFirst(2,8);
    insertFirst(3,9);
    insertFirst(4,10);
    insertFirst(5,11);
    insertFirst(6,12);

    cout << "Danh sach ban dau la: "; output_linked_list();
    cout << "head " << head->key << " " << head->data << endl;
    deleteFirst();

    // Lưu ý là đừng có chạy bừa cái deletFirst này nó next đến cái tiếp là sai sml đấy
    //cout << "deleteFirst " << deleteFirst ()->key << " " << deleteFirst ()->data << endl;

    cout << "Danh sach sau khi xoa: "; output_linked_list ();
}