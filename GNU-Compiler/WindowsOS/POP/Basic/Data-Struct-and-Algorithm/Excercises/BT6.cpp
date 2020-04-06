/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

class duan
{
private:
	int maduan, tongkinhphi;
	string tenduan, kieuduan;
public:
	duan()
	{
		maduan = tongkinhphi = 0;
		tenduan = kieuduan = "";
	}
	~duan()
	{
		maduan = tongkinhphi = 0;
		tenduan = kieuduan = "";
	}

	void input()
	{
		cout << "Nhap Ma Du An: "; cin >> this->maduan;
		cout << "Nhap Tong Kinh Phi: "; cin >> this->tongkinhphi;
		cin.ignore();
		cout << "Nhap Ten Du An: "; getline(cin,this->tenduan);
		cout << "Nhap Kieu Du An: "; getline(cin,this->kieuduan);
	}

	void output()
	{
		cout << "Ma Du An: " << this->maduan << endl;
		cout << "Tong Kinh Phi: " << this->tongkinhphi << endl;
		cout << "Ten Du An: " << this->tenduan << endl;
		cout << "Kieu Du An: " << this->kieuduan << endl;
	}

	int getTongKinhPhi()
	{
		return this->tongkinhphi;
	}
};

struct node
{
	int key;
	duan data;
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
	duan temp_data;
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
    duan tempData ;
    struct node *current;
    struct node *next;

    //int size = length();
    int k = size ;

    for (int i = 0 ; i < size - 1 ; i++, k-- ) {
        current = head ;
        next = head->next ;
        
        for (int j = 1 ; j < k ; j++ )
        {   
        
            if ( current->data.getTongKinhPhi() > next->data.getTongKinhPhi() )
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

	cout << "Nhap So Luong Du An: "; int n; cin >> n;
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