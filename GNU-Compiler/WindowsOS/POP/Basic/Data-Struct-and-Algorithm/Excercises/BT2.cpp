/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

class nhanvien
{
private:
	string manhanvien, tennhanvien;
	int namsinh;
	float hesoluong;
public:
	nhanvien()
	{
		manhanvien = tennhanvien = "";
		namsinh = hesoluong = 0;
	}
	~nhanvien()
	{
		manhanvien = tennhanvien = "";
		namsinh = hesoluong = 0;
	}

	void input()
	{
		cin.ignore();
		cout << "Nhap Ma Nhan Vien: "; getline(cin, this->manhanvien);
		cout << "Nhap Ten Nhan Vien: "; getline(cin, this->tennhanvien);
		fflush(stdin);
		cout << "Nhap Nam Sinh: "; cin >> this->namsinh;
		cout << "Nhap He So Luong: "; cin >> this->hesoluong;
	}

	void output()
	{
		cout << "Ma Nhan Vien: " << this->manhanvien << endl;
		cout << "Ten Nhan Vien: " << this->tennhanvien << endl;
		cout << "Nam Sinh: " << this->namsinh << endl;
		cout << "He So Luong: " << this->hesoluong << endl;
	}

	string GetMNV ()
	{
		return manhanvien;
	}
};

struct node
{
	int key;
	nhanvien data;
	node* next;	
};

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
node *head = NULL;

void DisplayForward ()
{
	node* ptr = head;
	while (ptr != NULL) PrintTypeJSON(ptr);
}

void InsertFirst (int temp_key)
{
	nhanvien temp_data;
	temp_data.input();

	node* ptr = new node;
	ptr->key = temp_key;
	ptr->data = temp_data;

	ptr->next = head;
	head = ptr;
}

node* FindNodeWithKey (int key)
{
	node* ptr = head;
	while (ptr != NULL)
	{
		if (ptr->key == key ) return ptr;
		else ptr = ptr->next;
	}
	cout << "Warning: 404 Not Found! =))";
	return NULL;
}

node* FindNodeWithMNV (string MNV)
{
	node* ptr = head;
	while (ptr != NULL)
	{
		if (ptr->data.GetMNV() == MNV ) return ptr;
		else ptr = ptr->next;
	}
	cout << "Warning: 404 Not Found! =))";
	return NULL;
}

int main()
{
	freopen(fi);
    freopen(fo);
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	

	//<------------------------------------------->//

	int n;
    cout << "Nhap So Luong Nhan Vien: "; cin >> n;

    for (int i = 0; i < n; i++) InsertFirst(i);

	cout << endl << endl << "Output" << endl << endl;
    DisplayForward();

    /*
    node* Node_Find_With_Key = FindNodeWithKey(1);
    if (Node_Find_With_Key != NULL)
    {
    	cout << "After Found: "; PrintTypeJSON(Node_Find_With_Key);
    }
    */
    string MNV;
    cout << "Nhap Ma Nhan Vien: " << endl; fflush(stdin); cin >> MNV;
    //cout << "MNV Can Tim: " << MNV << endl;
    node* Node_Find_With_MNV = FindNodeWithMNV(MNV);
    if (Node_Find_With_MNV != NULL)
    {
    	cout << "After Found: "; PrintTypeJSON(Node_Find_With_MNV);
    }   
}

/*
//////////////////////////////
/////		INPUT		//////
//////////////////////////////

1
MNV123
Nguyen Van A
1990
1.6

3
MNV123
Nguyen Van A
1990
1.6
MNV456
Nguyen Van B
1992
1.8
MNV789
Nguyen Van C
2

3
MNV123
Nguyen Van A
1990
1.6
MNV456
Nguyen Van B
1992
1.8
MNV789
Nguyen Van C
1997
2
MNV78910
*/