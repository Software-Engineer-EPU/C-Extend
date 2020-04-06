#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio "input.txt", "r", stdin
#define fo pathio "output.txt", "w", stdout

int n;

typedef struct
{
    string msv, hoten;
    float cc, gk, ck, hp;
} sinhvien;

void InputSV(sinhvien &sv)
{
    cin.ignore();
    cout << "Nhap Ma Sinh Vien: ";
    getline(cin, sv.msv);
    cout << "Nhap Ho Ten: ";
    getline(cin, sv.hoten);
    cout << "Nhap Diem cc, gk, ck";
    cin >> sv.cc >> sv.gk >> sv.ck;
}

float TinhTB(sinhvien sv)
{
    return 0.2 * sv.cc + 0.3 * sv.gk + 0.5 * sv.ck;
}

void OutputSV(sinhvien sv)
{
    cout << "Ma SV: " << sv.msv << endl;
    cout << "Ho Ten: " << sv.hoten << endl;
    cout << "Diem cc, gk, ck: " << sv.cc << " " << sv.gk << " " << sv.ck << endl;
    sv.hp = TinhTB(sv);
    cout << "Diem TB: " << sv.hp;
}

void InputArraySV(sinhvien arr_sv[])
{
    cout << "Nhap So Sinh Vien: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        InputSV(arr_sv[i]);
}

void OutputArraySV(sinhvien arr_sv[])
{
    cout << "Danh Sach Sinh Vien Da Nhap: " << endl;
    for (int i = 0; i < n; i++)
        OutputSV(arr_sv[i]);
}

int main()
{
    freopen(fi);
    freopen(fo);
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    sinhvien arr_sv[50];
    InputArraySV(arr_sv);

    cout << endl << endl;
    OutputArraySV(arr_sv);

    return 0;
}