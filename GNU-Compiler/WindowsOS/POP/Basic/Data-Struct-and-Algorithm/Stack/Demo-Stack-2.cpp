#include <iostream>
#define MAX 100
using namespace std;
struct stack // Dinh nghia cau truc stack
{
    int n;
    int e[MAX];
};
void init(stack &s) // Ham khoi tao
{
    s.n=-1;
}
int isempty (stack s) // Kiem tra ngan xep rong
{
    if(s.n==-1)
        return 1;
    return 0;
}
int isfull(stack s) // Kiem tra ngan xep day
 {
     return (s.n==MAX-1);
 }
 void push(stack &s, int x) // Them mot phan tu vao stack
 {
     if (isfull(s))
        cout <<" Ngan xep day !";
     else
     {
         s.n++;
         s.e[s.n]=x;
     }
 }
 int pop (stack &s) // Lay mot phan tu ra khoi stack
 {
     if(isempty(s))
     {
         cout <<"Ngan xep rong !";
         return -1;
     }
     else
        return s.e[s.n--];
 }
int main()
{
    stack s;
    init(s);
    int m,k;
    cout << "Chuong trinh chuyen doi thap phan sang nhi phan!" << endl;
    do
    {
        cout << "Nhap so thap phan can chuyen: ";
        cin >> m ;
    }
    while (m<=0);
    while (m!=0)
    {
        k=m%2;
        push(s,k);
        m=m/2;
    }
    cout << "So nhi phan la: ";
    while (isempty(s)==0)
        cout << pop(s);
}
