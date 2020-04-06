/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

class mathang
{
private:
	string mahang, tenhang, nhomhang;
	int giaban;
public:
	mathang()
	{
		mahang = tenhang = nhomhang = "";
		giaban = 0;
	}
	~mathang()
	{
		mahang = tenhang = nhomhang = "";
		giaban = 0;
	}

	void input()
	{
		cin.ignore();
		cout << "Nhap Ma Hang: "; getline(cin, this->mahang);
		cout << "Nhap Ten Hang: "; getline(cin, this->tenhang);
		cout << "Nhap Nhom Hang: "; getline(cin, this->nhomhang);
		cout << "Nhap Gia Ban: "; cin >> this->giaban;
	}

	void output()
	{
		cout << "Nhap Ma Hang: " << this->mahang << endl;
		cout << "Nhap Ten Hang: " << this->tenhang << endl;
		cout << "Nhap Nhom Hang: " << this->nhomhang << endl;
		cout << "Nhap Gia Ban: " << this->giaban << endl;
	}
};

struct node
{
	int key;
	mathang data;
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
	mathang temp_data;
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
	
    cout << "Nhap So Luong Mat Hang: "; int n; cin >> n;
	for (int i = 0; i < n; i++) InsertFirst(i);

	cout << endl << endl << "Output" << endl << endl;
	DisplayForWard();
}

/*
//////////////////////////////
/////		INPUT		//////
//////////////////////////////

4
MH1
TH1
Hang Thoi Trang
1000
MH2
TH2
Hang Tieu Dung
2000
MH3
TH3
Hang Dien May
3000
MH4
TH4
Hang Gia Dung
4000

*/

/*
//////////////////////////////
/////		BUG			//////
//////////////////////////////

** Chưa làm **
+ Sắp xếp danh sách đã tạo theo thứ tự tăng dần của mã hàng, hiển thị danh sách
đã sắp ra màn hình.
+ Nhập vào 1 mã hàng bất kỳ, kiểm tra xem mã hàng vừa nhập đã được lưu trong
danh sách chưa? Nếu chưa, nhập đầy đủ thông tin của mặt hàng có mã vừa nhập
và chèn vào danh sách theo đúng thứ tự đã sắp (không làm mất tính đã sắp)

//////////////////////////////
*/