/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

class diem
{
	private:
		float hoanhdo, tungdo;
	public: 
		diem()
		{
			 hoanhdo = tungdo = 0;
		}

		~diem()
		{
			hoanhdo = tungdo = 0;
		}
	   
	    void input()
	    {
	    	cout << "Nhap Hoanh Do: "; cin >> this->hoanhdo;
	    	cout << "Nhap Tung Do: "; cin >> this->tungdo;
      	}
		void output()
		{
			cout << "Hoanh Do: " << this->hoanhdo << endl;
			cout << "Tung Do: " << this->tungdo << endl;
		}
};

class dagiac
{
	private: 
		int dinh;
		diem *arr_diem;
       
    public:
		dagiac()
		{
			dinh = 0;
			arr_diem = new diem[dinh];
		}
		~dagiac()
		{
			dinh = 0;
			delete []arr_diem;
		}
	  
		void input()
		{
			cout << "Nhap So Dinh Da Giac: "; cin >> this->dinh;
			arr_diem = new diem[dinh];
			for (int i = 0; i < dinh; i++)
			{
				cout << "Nhap Dinh Thu " << i << endl;
				arr_diem[i].input();
			}
		}

		void output()
		{
			cout << "So Dinh: " << this->dinh << endl;
			for (int i = 0; i < dinh; i++)
			{
				cout << "Dinh Thu " << i << endl;
				arr_diem[i].output();
			}
		}
};

int main()
{
	freopen(fi);
  	freopen(fo);
	ios_base :: sync_with_stdio (0);
	cin.tie(0);	

	int m;
	cout << "Nhap So Luong Da Giac: "; cin >> m;
	dagiac *arr_dagiac = new dagiac[m];

	for (int i = 0; i < m; i++)
	{
		cout << "Input Da Giac Thu " << i << endl;
		arr_dagiac[i].input();

	}

	cout << endl << endl << "Output" << endl;
	
	for (int i = 0; i < m; i++)
	{
		cout << "Output Da Giac Thu " << i << endl;
		arr_dagiac[i].output();
	}	
}

/*
//////////////////////////////
/////		INPUT		//////
//////////////////////////////
2
3
1 1
2 2
3 3
4
4 4
5 5
6 6
7 7
//////////////////////////////
*/