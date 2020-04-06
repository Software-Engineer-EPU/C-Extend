//Code by KingNNT
// Chuyển đổi kiểu chuỗi sang số


#include <bits/stdc++.h>
using namespace std;


void using_itoa(int i,char buffer[])
{
  itoa (i,buffer,10); //Kiểu Thập Phân
  cout << "Decimal:" << buffer << endl;

  itoa (i,buffer,16); //Kiểu Hex
  cout << "Hexadecimal:"<< buffer << endl;

  itoa (i,buffer,2); //Kiểu Nhị PhânR
  cout << "Binary:" << buffer << endl;
}

void using_sstream_library(int i)
{
    string result;          
    ostringstream convert;   
    convert << i;      
    result = convert.str(); 
    cout << result;
}

void using_function_to_string(int i)
{
  // Chỉ dùng được từ C++11 trở lên
  string s = to_string(i);
  cout << s;
}



int main ()
{
  int i;
  char buffer [33];
  cout << "Enter a number: "; cin >> i;
  //using_itoa(i,buffer);
  //using_sstream_library(i);
  using_function_to_string(i);

  return 0;
}