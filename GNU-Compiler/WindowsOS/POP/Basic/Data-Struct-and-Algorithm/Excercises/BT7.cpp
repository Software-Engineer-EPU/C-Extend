/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

class sach
{
private:
	string masach, tensach, tentacgia, nhaxuatban;
	int namxuatban, giathanh;
public:
	sach()
	{
		masach = tensach = tentacgia = nhaxuatban = "";
	}
	~sach()
	{
		masach = tensach = tentacgia = nhaxuatban = "";
	}

	void input()
	{
		cin.ignore();
		cout << "Nhap Ma Sach: "; getline(cin,this->masach);
		cout << "Nhap Ten Sach: "; getline(cin,this->tensach);
		cout << "Nhap Ten Tac Gia: "; getline(cin, this->tentacgia);
		cout << "Nhap Nha Xuat Ban: "; getline(cin, this->nhaxuatban);
		fflush(stdin);
		cout << "Nhap Nam Xuat Ban: "; cin >> this->namxuatban;
		cout << "Nhap Gia Thanh: "; cin >> this->giathanh;
	}

	void output()
	{
		cout << "Ma Sach: " << this->masach << endl;
		cout << "Ten Sach: " << this->tensach << endl;
		cout << "Ten Tac Gia: " << this->tentacgia << endl;
		cout << "Nha Xuat Ban: " << this->nhaxuatban << endl;
		cout << "Nam Xuat Ban: " << this->namxuatban << endl;
		cout << "Gia Thanh: " << this->giathanh << endl;
	}

	int getNamXuatBan()
	{
		return this->namxuatban;
	}
	
};

struct node
{
	int key;
	sach data;
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
	sach temp_data;
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
	if (IsEmpty() == true)
	{
		cout << "List Empty !";
		return NULL;
	}

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
    sach tempData ;
    struct node *current;
    struct node *next;

    //int size = length();
    int k = size ;

    for (int i = 0 ; i < size - 1 ; i++, k-- )
    {
        current = head ;
        next = head->next ;
        
        for (int j = 1 ; j < k ; j++ )
        {   
        
            if ( current->data.getNamXuatBan() > next->data.getNamXuatBan() )
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

	cout << "Nhap So Luong Sach: "; int n; cin >> n;
	for (int i = 0; i < n; i++) InsertFirst(i);

	cout << endl << endl << "Output" << endl << endl;
	DisplayForWard();

	Bubble_Sort(n);
	cout << "After Sort: "; DisplayForWard();
}
// ***Same Excercise BT4.cpp***
/*
//////////////////////////////
/////		INPUT		//////
//////////////////////////////

3
MS1
TS1
TG1
NXB1
2000
15000
MS2
TS2
TG2
NXB2
1990
20000
MS3
TS3
TG3
NXB3
2010
30000

*/