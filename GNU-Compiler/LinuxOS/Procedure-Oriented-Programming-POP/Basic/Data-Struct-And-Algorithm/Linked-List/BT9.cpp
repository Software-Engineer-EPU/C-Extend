/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "/media/kingnnt/Study/Code/C-Extend/GNU-Compiler/Test/"
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
	void input_sinhvien()
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

	void output_sinhvien()
	{
		cout << "Ma Lop: " << malop << endl;
		cout << "Ma Sinh Vien: " << msv << endl;
		cout << "Ten: " << ten << endl;
		namsinh.output_Date();
		cout << "Diem 1 = " << diem1 << endl;
		cout << "Diem 2 = " << diem2 << endl;
		cout << "Diem 3 = " << diem3 << endl;
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

bool isEmpty()
{
    return head == NULL;
}

void insertFirst()
{
	int temp_key;
	cout << "Nhap Key"; cin >> temp_key;
	sinhvien temp_data;
	temp_data.input_sinhvien();
	node *link = new node;
	link->key = temp_key;
	link->data = temp_data;
		
	isEmpty() == true ? last = link : head->prev = link;
	link->next = head;
	head = link;
}

void displayForward()
{
    struct node *ptr = head;
    while(ptr != NULL)
    {        
        cout << "{" << endl;
        cout << "key:" << ptr->key << endl;
        cout << "data:" << endl;
        cout << "{" << endl;
        ptr->data.output_sinhvien();
        cout << "}" << endl << "}" << endl;
        ptr = ptr->next;
    }
}

node* deleteKey(int key)
{
   struct node* current = head;
   struct node* previous = NULL;
	
   if(head == NULL){
      return NULL;
   }

   while(current->key != key)
   {
		if(current->next == NULL)
    		return NULL;
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

int main()
{
	freopen(fi);
    freopen(fo);
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	
	//<---------------------------------->//
	int n;
	cout << "Nhap So Sinh Vien: "; cin >> n;
	for (int i = 0; i < n; i++) insertFirst();

	cout << endl << endl << "Output" << endl << endl;
	displayForward();

}