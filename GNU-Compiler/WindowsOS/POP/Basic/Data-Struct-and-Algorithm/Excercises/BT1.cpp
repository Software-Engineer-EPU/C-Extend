/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

class sinhvien
{
private:
	string malop,masinhvien,tensinhvien,quequan;
	int namsinh;
public:
	sinhvien()
	{
		malop = masinhvien = tensinhvien = quequan = "";
		namsinh = 0;
	}
	~sinhvien()
	{
		malop = masinhvien = tensinhvien = quequan = "";
		namsinh = 0;		
	}

	void input()
	{
		cin.ignore();
		cout << "Nhap Ma Lop: "; getline(cin, this->malop);
		cout << "Nhap Ma Sinh Vien: "; getline (cin, this->masinhvien);
		cout << "Nhap Ten Sinh Vien: "; getline (cin, this->tensinhvien);
		cout << "Nhap Que Quan: "; getline (cin, this->quequan);
		cout << "Nhap Nam Sinh: "; cin >> this->namsinh;
	}
	void output()
	{
		cout << "Ma Lop: " << this->malop << endl;
		cout << "Ma Sinh Vien: " << this->masinhvien << endl;
		cout << "Ten Sinh Vien: " << this->tensinhvien << endl;
		cout << "Que Quan: " << this->quequan << endl;
		cout << "Nam Sinh: " << this->namsinh << endl;
	}

	string GetMSV ()
	{
		return masinhvien;
	}
	
	
};
//Simple Linked List
struct node
{
	int key;
	sinhvien data;
	node* next;
};
node *head = NULL;

void DisplayForward ()
{
    node* ptr = head;
    while (ptr != NULL)
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
}

void InsertFirstNode(int temp_key)
{
	//int temp_key;
	sinhvien temp_data;
	//cout << "Nhap Key: "; cin >> temp_key;
	cout << "Nhap Data: " << endl; temp_data.input();

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

node* DeleteNodeWithKey (int key)
{
	if (IsEmpty() == true) return NULL;
	node* ptr = head;
	node* prev = new node;

	while (ptr->key != key)
	{
		if (ptr->next == NULL) return NULL;
		else 
		{
			prev = ptr;
			ptr = ptr->next;
		}
	}

	if (ptr == head) head = head->next;
	else
	{
		prev->next = ptr->next;
	}

	return ptr;
}

node* DeleteNodeWithMSV (string masinhvien)
{
	if (IsEmpty() == true) return NULL;

	node* ptr = head;
	node* prev = new node;

	// Tìm node cần xoá
	while (ptr->data.GetMSV() != masinhvien)
	{
		if (ptr->next == NULL) return NULL;
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
	
	//<---------------------------------->//
	int n;
	cout << "Nhap So Sinh Vien: "; cin >> n;
	for (int i = 0; i < n; i++) InsertFirstNode(i);

	cout << endl << endl << "Output" << endl << endl;
	DisplayForward();

	/*
	node* Node_Del_With_Key = DeleteNodeWithKey(1);
	if (Node_Del_With_Key != NULL ) cout << endl << "After Delete Node: "; DisplayForward();
	*/

	string k;
	cout << endl << "Nhap Ma Sinh Vien Can Tim: " << endl; cin >> k;
	node* Node_Del_With_MSV = DeleteNodeWithMSV(k);
	if (Node_Del_With_MSV != NULL )
	{
		cout << endl << "After Delete Node: "; DisplayForward();
	}
}
/*
//////////////////////////////
/////		INPUT		//////
//////////////////////////////

3
D13CNPM1
18810310100
Nguyen Van A
Ha Noi
2000
D13CNPM2
18810310101
Nguyen Van B
Nam Dinh
1999
D13CMPM3
18810310102
Nguyen Van C
Ninh Binh
1998
18810310101

*/