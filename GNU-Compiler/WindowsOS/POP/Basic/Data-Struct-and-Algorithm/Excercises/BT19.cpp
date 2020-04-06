/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

struct date
{
 	int ngay, thang, nam; 	
};

void input_date(date &obj)
{

	cout << "Nhap Ngay: "; cin >> obj.ngay;
	cout << "Nhap Thang: "; cin >> obj.thang;
	cout << "Nhap Nam: "; cin >> obj.nam;
}

void output_date(date obj)
{
	cout << "Ngay/Thang/Nam: " << obj.ngay << "/" << obj.thang << "/" << obj.nam << endl;
}

//<---------------------------------------------------------------->//
struct hang
{
	string id, ten;
	date ngayxuat;
	float giaxuat;
};

void input_hang(hang &obj)
{
	cin.ignore();
	cout << "Nhap ID: "; getline(cin, obj.id);
	cout << "Nhap Ten: "; getline(cin, obj.ten);
	input_date(obj.ngayxuat);
	cout << "Nhap Gia Xuat: "; cin >> obj.giaxuat;
}

void output_hang(hang obj)
{
	cout << "ID: " << obj.id << endl;
	cout << "Ten: " << obj.ten << endl;
	output_date(obj.ngayxuat);
	cout << "Gia Xuat: " << obj.giaxuat << endl;
}
//<---------------------------------------------------------------->//
int top = -1;
 
bool IsFull(int capacity)
{
    if (top >= capacity - 1) return true; else return false;
}
 
bool IsEmpty()
{
    if(top == -1) return true; else return false;
}
 
void Push(hang stack[], hang value, int capacity)
{
    if (IsFull(capacity) == true) cout << "Stack is full. Overflow condition!" << endl;
    else
    {
        ++top;
        stack[top] = value;
    }
}
 
void Pop()
{
    if (IsEmpty()) cout << "Stack is empty. Underflow condition!" << endl; else --top;
}

hang Top(hang stack[])
{
    return stack[top];
}
 
int Size()
{
    return top + 1;
}



//<---------------------------------------------------------------->//
int main()
{
	freopen(fi);
	freopen(fo);
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	
	cout << "Nhap Vao So Luong Hang Hoa"; int n; cin >> n;
	hang stack[n], obj;
	for (int i = 0; i < n; i++)
	{
		input_hang(obj);
		Push(stack, obj, n);
	}

	cout << endl << endl;
	for (int i = 0; i < n; i++)
	{
		obj = Top(stack);
		if (obj.giaxuat > 2000) // Thay 2000 bằng 1.0
		{
			output_hang(obj);
			cout << endl;
		}
		Pop();
	}
	

	
}
/*
//////////////////////////////
/////		INPUT		//////
//////////////////////////////



*/

/*
//////////////////////////////
/////		BUG			//////
//////////////////////////////



//////////////////////////////
*/