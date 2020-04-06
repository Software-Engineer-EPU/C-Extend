/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout
class giangvien
{
private:
	string magiangvien,ten,hocvi;
	int mucluong;
public:
	giangvien()
	{
		magiangvien = ten = hocvi = "";
		mucluong = 0;
	}
	~giangvien()
	{
		magiangvien = ten = hocvi = "";
		mucluong = 0;
	}

	void input()
	{
		cin.ignore();
		cout << "Nhap Ma Giang Vien: "; getline(cin, this->magiangvien);
		cout << "Nhap Ten: "; getline(cin, this->ten);
		cout << "Nhap Hoc Vi: "; getline(cin,this->hocvi);
		fflush(stdin);
		cout << "Nhap Muc Luong: "; cin >> this->mucluong;
	}

	void output()
	{
		cout << "Ma Giang Vien: " << this->magiangvien << endl;
		cout << "Ten: " << this->ten << endl;
		cout << "Hoc Vi: " << this->hocvi << endl;
		cout << "Muc Luong: " << this->mucluong << endl;
	}

	string GetMGV()
	{
		return this->magiangvien;
	}
};

struct node
{
	int key;
	giangvien data;
	node* next;
};

node* head = NULL;

void PrintTypeJSON (node* &ptr)
{
		cout << endl << "{" << endl;
		cout << "Key: " << ptr->key << endl;
		cout << "Data: " << endl;
		cout << "{" << endl;
		ptr->data.output();
		cout << "}" << endl;
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
	giangvien temp_data;
	temp_data.input();

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

node* DeleteNodeWithKey(int key)
{
	if (IsEmpty() == true) return NULL;

	node * prev = new node;
	node* ptr = head;
	while (ptr->key != key)
	{
		if (ptr->next == NULL) break;
		else
		{
			prev = ptr;
			ptr = ptr->next;
		}
		
	}

	if (ptr == head) ptr = ptr->next;
	else
	{
		prev->next = ptr->next;
	}

	return ptr;
}

node* DeleteNodeWithMGV(string MGV)
{
	if (IsEmpty() == true) return NULL;

	node * prev = new node;
	node* ptr = head;
	while (ptr->data.GetMGV() != MGV)
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
	
	
	int n;
	cout << "Nhap So Giang Vien: "; cin >> n;

	for (int i = 0; i < n; i++) InsertFirst(i);
	
	cout << endl << endl << "Output" << endl << endl;
	DisplayForWard();

	string s_magiangvien;
	cout << "Nhap Ma Giang Vien Can Tim: " << endl; cin >> s_magiangvien;
	cout << endl << endl;

	node* Node_Delete_With_MGV = DeleteNodeWithMGV(s_magiangvien);
	//PrintTypeJSON(Node_Delete_With_MGV);
	
	if (Node_Delete_With_MGV == NULL) cout << "Don't Have Node";
	else
	{
		cout << "After Delete: ";
		DisplayForWard();
	}
}

/*
//////////////////////////////
/////		INPUT		//////
//////////////////////////////

3
MGV001
Nguyen Van A
Thac Si
10000
MGV002
Nguyen Van B
Giao Su
9000
MGV003
Nguyen Van C
Tien Si
12000

*/