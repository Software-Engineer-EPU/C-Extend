/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "/media/kingnnt/Study/Code/C-Extend/GNU-Compiler/Test/"
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

// Method
void output_linked_list()
{
	node * ptr = head;
	while (ptr != NULL)
	{
		cout << "[" << ptr->key << " " << ptr->data << "]" << "\t";
		ptr = ptr->next;
	}
	cout << endl;
}

void insert_head(int key, int data)
{
	node *link = new node;
	link->key = key;
	link->data = data;

	link->next = head;
	head = link;
}

node* delete_head ()
{
	node *temp = head;
	head = head->next;

	return temp;
}
bool check_empty ()
{
	if (head == NULL) return true; else return false;
}

int length()
{
	if (head == NULL) return 0;
	int dem = 0;
	node* ptr = head;
	while (ptr != NULL)
	{
		dem ++;
		ptr = ptr->next;
	}
	return dem;
}

node * find_note_with_key (int key)
{
	if (head == NULL) return NULL;
	node* ptr = head;
	while (ptr != NULL)
	{
		if (ptr->key == key) return ptr;
		ptr = ptr->next;
	}
}

node * delete_note_with_key (int key)
{
	if (head == NULL) return NULL;
	node* ptr = head;
	node* temp;
	while (ptr != NULL)
	{
		if (ptr->next->key == key)
		{
			temp = ptr->next;
			ptr->next = ptr->next->next;
		}
		return temp;
	}
}

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

//<============================>//

void insert_data()
{

	insert_head(1,10);
	insert_head(2,9);
	insert_head(3,8);
	insert_head(4,7);
	insert_head(5,6);
}

void func_test ()
{

	output_linked_list();
	node* ptr = head;
	cout << "test 1: " << ptr->next->key;

	node* temp = ptr->next;
	cout << "test 2: " << temp->key;
}



///////////////////////////////////////////////////////////
/////////////		main 		//////////////////////////
/////////////////////////////////////////////////////////

int main()
{
	freopen(fi);
    freopen(fo);
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	
	insert_data();
	cout << "First: "; output_linked_list(); cout << endl;

	delete_head();
	cout << "Delete 1 head: "; output_linked_list(); cout << endl;

	cout << "Delete All node..." << endl;
	//for(int i = 0; i < 4; i++) delete_head();
	while (check_empty() == false) delete_head();
	//cout << "Check Empty: ";
	//check_empty () == true ? cout << "True" << endl : cout << "False" << endl;
	//if (check_empty() == true) cout << "True" << endl; else cout << "False" << endl;

	cout << "Show linked List after delete all node: "; output_linked_list(); cout << "-> Dev said: No Node :v. I know =)). Just kidding..." << endl << endl;

	insert_data();
	cout << "Length of Linked List = " << length() << endl << endl;
	
	node* find = find_note_with_key(3);
	find == NULL ? cout << "Don't have node with this key !!!" << endl : cout << "Find note with key: " << "[" << find->key << " " << find->data << "]" << endl;
	cout << "After find: "; output_linked_list(); cout << endl;
	
	
	node* del = delete_note_with_key(3);
	del == NULL ? cout << "Don't have note with this key !!!" << endl : cout << "Delete note [" << del->key << " " << del->data << "]" << endl;
	cout << "After delete node with key: "; output_linked_list();	
	//func_test();
	
	/*
	deleteKey(3);
	output_linked_list ();
	*/
    
}