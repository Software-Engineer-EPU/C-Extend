/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

struct node
{
	int key, data;
	node* next;
};

node* head = NULL;

void PrintTypeJSON (node* &ptr)
{
		cout << endl << "{" << endl;
		cout << "Key: " << ptr->key << endl;
		cout << "Data: " << ptr->data << endl;
		cout << "}" << endl;
		ptr = ptr->next;
}

void DisplayForWard()
{
	node* ptr = head;
	while (ptr != NULL)
	{
		PrintTypeJSON(ptr);
	}
}

void InsertFirst(int temp_key)
{
	cout << "Nhap Data"; int temp_data; cin >> temp_data;
	node* ptr = new node;
	ptr->key = temp_key;
	ptr->data = temp_data;

	ptr->next = head;
	head = ptr;
}

bool IsEmpty ()
{
	if (head == NULL) return true; else return false;
}

void Find_Positive_Numbers_Min()
{
	node* node_min = head;
	node* ptr = head;
	while (ptr != NULL)
	{
		if (ptr->data > 0 && node_min->data > ptr->data) node_min = ptr;
		ptr = ptr->next;
	}
}

void Find_Negative_Numbers_Max()
{
	node* node_max = head;
	node* ptr = head;
	while (ptr != NULL)
	{
		if (ptr->data < 0 && node_max->data < ptr->data) node_max = ptr;
		ptr = ptr->next;
	}
}


int function_1 (int x)
{
	int dem = 0;
	node* ptr = head;
	while (ptr != NULL)
	{
		if (ptr->data == x)  dem ++;
		ptr = ptr->next;
	}
	return dem;
}

node* function_2 (int x)
{
	if (IsEmpty() == true) return NULL;
	node* prev = new node;
	node* ptr = head;
	while (ptr->data != x)
	{
		if (ptr->next == NULL) break;
		else
		{
			prev = ptr;
			ptr = ptr->next;
		}
		
	}
	ptr == head ? ptr = ptr->next :	prev->next = ptr->next;
	return ptr;
}
int main()
{
	freopen(fi);
    freopen(fo);
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	
    cout << "Nhap So Luong Phan Tu: "; int n; cin >> n;
    for (int i = 0; i < n; i++) InsertFirst(i);

    cout << endl << endl << "Output" << endl << endl;
	DisplayForWard();

	cout << "Nhap X: "; int x; cin >> x;
	int k = function_1(x); cout << "So Lan Xuat Hien Cua " << x << " la: " << k << endl;

	for (int  i = 0; i < k; i++) function_2(x);
	DisplayForWard();

}