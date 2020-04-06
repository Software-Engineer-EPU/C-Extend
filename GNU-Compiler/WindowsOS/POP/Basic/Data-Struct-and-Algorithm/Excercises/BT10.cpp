/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

class phanso
{
private:
	int tuso, mauso;
public:
	phanso()
	{
		tuso = mauso = 0;
	}
	~phanso()
	{
		tuso = mauso = 0;
	}
	
	void input()
	{
		cout << "Nhap Tu So: "; cin >> this->tuso;
		cout << "Nhap Mau So: "; cin >> this->mauso;
	}
	void output()
	{
		cout << tuso << "/" << mauso << endl;
	}
};

struct node
{
	int key;
	phanso data;
	node *next;
	node *prev;
};

node *head = NULL;
node *last = NULL;
node *current = NULL;

void PrintTypeJSON (node* &ptr)
{
	cout << endl << "{" << endl;
	cout << "Key: " << ptr->key << endl;
	cout << "Data: "; ptr->data.output();
	cout << "}" << endl;
	ptr = ptr->next;
}

bool IsEmpty ()
{
	if (head == NULL) return true; else return false;
}

void InsertFirst(int temp_key)
{
	phanso temp_data;
	temp_data.input();
	node *link = new node;
	link->key = temp_key;
	link->data = temp_data;

	IsEmpty() == true ? last = link : head->prev = link;
	link->next = head;
	head = link;
}

void DisplayForWard()
{
	node* ptr = head;
	while (ptr != NULL)
	{
		PrintTypeJSON(ptr);
	}
}


node* DeleteNodeWithKey(int key)
{
	if (IsEmpty() == true) return NULL;
	struct node* current = head;
	struct node* previous = NULL;

	if (head == NULL) return NULL;
	while(current->key != key)
	{
	  if(current->next == NULL) return NULL;
	  else
	  {
	     previous = current;
	     current = current->next;             
	  }
	}
	current == head ? head = head->next : current->prev->next = current->next;
	current == last ? last = current->prev : current->next->prev = current->prev;
	return current;
}

void SearchWithKey(int key)
{
	node* ptr = head;
	while(ptr != NULL)
	{
		if (ptr->key == key) PrintTypeJSON(ptr);
		ptr = ptr->next;
	}
}

int main()
{
	freopen(fi);
    freopen(fo);
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	
	cout << "Nhap So Luong Phan So: "; int n; cin >> n;
	for (int i = 0; i < n; i++) InsertFirst(i);

	cout << endl << endl << "Output" << endl << endl;
	DisplayForWard();
}

/*
//////////////////////////////
/////		INPUT		//////
//////////////////////////////

3
D13CNPM1
18810310100
Nguyen Van A
1 1 2000
8 9 10
D13CNPM2
18810310101
Nguyen Van B
2 2 1999
8 8 8
D13CNPM3
18810310101
Nguyen Van C
3 3 1998
7 7 7

*/
/*
//////////////////////////////
/////		BUG			//////
//////////////////////////////

** Chưa làm
- Còn phần tìm ps max, min
- Sort theo thứ tự giảm dần

//////////////////////////////
*/