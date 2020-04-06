/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "/media/kingnnt/Study/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

class date
{
private:
	int gio, phut, giay;
public:
	date()
	{
		gio = phut = giay = 0;
	}
	date(int gio, int phut, int giay)
	{
		this->gio = gio;
		this->phut = phut;
		this->giay = giay;
		Check_Invalid();
	}
	~date()
	{
		gio = phut = giay = 0;
	}

	void Check_Invalid()
	{

		while (gio > 23 || gio < 0)
		{
			cout << "Gio Khong Hop Le !" << endl;
			cout << "Nhap Gio:"; cin >> gio;
		}


		while (phut > 59 || phut < 0)
		{
			cout << "Phut Khong Hop Le: " << endl;
			cout << "Nhap Phut: "; cin >> phut;
		}


		while (giay > 59 || giay < 0)
		{
			cout << "Giay Khong Hop Le: " << endl;
			cout << "Nhap Giay: "; cin >> giay;
		}
	}

	void SetTime(int gio, int phut, int giay)
	{
		this->gio = gio;
		this->phut = phut;
		this->giay = giay;
		Check_Invalid();
	}

	void Display_Format_24_hour()
	{
		cout << gio << ":" << phut << ":" << giay << endl;
	}

	void Display_Format_12_hour()
	{
		int hour;
		string periods = "";
		if (gio > 12)
		{
			hour = gio - 12;
			periods = "PM";
		}
		else
		{
			hour = gio;
			periods = "AM";
		}
		cout << hour << ":" << phut << ":" << giay << " " << periods << endl;
	}
	void Add_Seconds()
	{
		giay++;
		if(giay >= 60)
		{
			phut++;
			giay -= 60;
		}
		if(phut >= 60)
		{
			gio++;
			phut -= 60;
		}
		if(gio >= 24)
		{
			gio -= 24;;
		}	
	}	
	
};
int main()
{
	freopen(fi);
    freopen(fo);
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	
	date obj;
	//date obj(25,59,58);
	obj.SetTime(23,59,58);
	obj.Display_Format_12_hour();
	obj.Display_Format_24_hour();

	const int n = 5;// Number of seconds
	for (int i = 0; i < n; i++)
	{
			obj.Add_Seconds();
			obj.Display_Format_12_hour();
	}
	return 0;
}