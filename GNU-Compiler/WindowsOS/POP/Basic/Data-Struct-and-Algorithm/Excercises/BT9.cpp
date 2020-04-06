/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

class Date
{
private:
	int ngaysinh;
	int thangsinh;
	int namsinh;
public:
	void input_Date()
	{
		cout << "Nhap Ngay Sinh: "; cin >> this->ngaysinh;
		cout << "Nhap Thang Sinh: "; cin >> this->thangsinh;
		cout << "Nhap Nam Sinh: "; cin >> this->namsinh;
	}
	void output_Date()
	{
		cout << "Ngay/Thang/Nam Sinh: " << this->ngaysinh << "/" << this->thangsinh << "/" << this->namsinh << endl;	
	}
};

class sinhvien
{
private:
	string malop, msv,ten;
	Date namsinh;
	int diem1, diem2, diem3;
public:
	void input()
	{
		cin.ignore();
		cout << "Nhap Ma Lop: "; getline(cin,malop);
		cout << "Nhap Ma Sinh Vien: "; getline(cin,msv);
		cout << "Nhap Ten: "; getline(cin,ten);
		namsinh.input_Date();
		fflush(stdin);
		cout << "Nhap Diem 1: "; cin >> diem1;
		cout << "Nhap Diem 2: "; cin >> diem2;
		cout << "Nhap Diem 3: "; cin >> diem3;
	}

	void output()
	{
		cout << "Ma Lop: " << malop << endl;
		cout << "Ma Sinh Vien: " << msv << endl;
		cout << "Ten: " << ten << endl;
		namsinh.output_Date();
		cout << "Diem 1 = " << diem1 << endl;
		cout << "Diem 2 = " << diem2 << endl;
		cout << "Diem 3 = " << diem3 << endl;
	}

	string getten()
	{
		return ten;
	}

	string getmsv()
	{
		return msv;
	}
};

struct node
{
	int key;
	sinhvien data;
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
	cout << "Data: " << endl;
	cout << "{" << endl;
	ptr->data.output();
	cout << "}" << endl;
	cout << "}" << endl;
	ptr = ptr->next;
}

bool IsEmpty ()
{
	if (head == NULL) return true; else return false;
}

void InsertFirst(int temp_key)
{
	sinhvien temp_data;
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

node* DeleteNodeWithMSV(string msv)
{
	if (IsEmpty() == true) return NULL;
	struct node* current = head;
	struct node* previous = NULL;

	if (head == NULL) return NULL;

	while(current->data.getmsv() != msv)
	{
		if (current->next == NULL) return NULL;
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
void SearchWithName(string tsv)
{
	node* ptr = head;
	while(ptr != NULL)
	{
		if (ptr->data.getten() == tsv) PrintTypeJSON(ptr);
		ptr = ptr->next;
	}
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
	for (int i = 0; i < n; i++) InsertFirst(i);

	cout << endl << endl << "Output" << endl << endl;
	DisplayForWard();

	cout << "Nhap Ten Sinh Vien Can Tim: "; string tsv; fflush(stdin); getline(cin,tsv);
	cout << "Infomation: "; SearchWithName(tsv);

	cout << "Nhap Ma Sinh Vien Can Xoa: "; string msv; fflush(stdin); getline(cin,msv);
	node* Node_Delete = DeleteNodeWithMSV(msv);
	if (Node_Delete == NULL) cout << "Don't have node"; else DisplayForWard();

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
3 3 1999
7 7 7
Nguyen Van B

*/

/*
//////////////////////////////
/////		BUG			//////
//////////////////////////////

-[03:57 15/12/2019] Đ hiểu lý do vì sao mà nó không nhập được tsv với msv trong main luôn á. Kao coi mà kao tuk á -.-

//////////////////////////////
*/