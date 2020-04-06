/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

class khachhang
{
private:
	int makh;
	string loaikhachhang, hoten, diachi, sodt;
public:
	khachhang()
	{
		makh = 0;
		loaikhachhang = hoten = diachi = sodt = "";
	}
	~khachhang()
	{
		makh = 0;
		loaikhachhang = hoten = diachi = sodt = "";
	}

	void input()
	{
		cout << "Nhap Ma Khach Hang: "; cin >> this->makh;
		cin.ignore();
		cout << "Nhap Loai Khach Hang: "; getline(cin, this->loaikhachhang);
		cout << "Nhap Ho Ten: "; getline(cin, this->hoten);
		cout << "Nhap Dia Chi: "; getline(cin, this->diachi);
		cout << "Nhap So Dien Thoai: "; getline(cin, this->sodt);
	}

	void output()
	{
		cout << "Ma Khach Hang: " << this->makh << endl;
		cout << "Loai Khach Hang: " << this->loaikhachhang << endl;
		cout << "Ho Ten: " << this->hoten << endl;
		cout << "Dia Chi: " << this->diachi << endl;
		cout << "Nhap So Dien Thoai: " << this->sodt << endl;
	}

	string getHoTen()
	{
		return this->hoten;
	}
};

struct node
{
	int key;
	khachhang data;
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
	khachhang temp_data;
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

	ptr == head ? ptr = ptr->next :	prev->next = ptr->next;
	return ptr;
}

void Bubble_Sort(int size)
{
    int tempKey;
    khachhang tempData ;
    struct node *current;
    struct node *next;

    //int size = length();
    int k = size ;

    for (int i = 0 ; i < size - 1 ; i++, k-- ) {
        current = head ;
        next = head->next ;
        
        for (int j = 1 ; j < k ; j++ )
        {   
        
            if ( current->data.getHoTen() > next->data.getHoTen() )
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

int main()
{
	freopen(fi);
    freopen(fo);
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	
    cout << "Nhap So Luong Khach Hang: "; int n; cin >> n;
	for (int i = 0; i < n; i++) InsertFirst(i);

	cout << endl << endl << "Output" << endl << endl;
	DisplayForWard();

	Bubble_Sort(n);
	cout << "After Sort: "; DisplayForWard();
}

/*
//////////////////////////////
/////		INPUT		//////
//////////////////////////////

3
1
LKH1
A
Ha Noi
123456789
2
LKH2
ABC
Hai Phong
123456789
3
LKH3
BACDU
Ninh Binh
123456789

*/