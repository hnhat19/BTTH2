#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main(){
    SoPhuc a,b;
    cout << "Nhap so phuc A: ";
    a.Nhap();
    cout << "\nNhap so phuc B: ";
    b.Nhap();

    cout<<"\nSo phuc A: ";a.Xuat();
    cout<<"\nSo phuc B: ";b.Xuat();
    cout<<endl;

    SoPhuc tong = a.Tong(b);
    SoPhuc hieu = a.Hieu(b);
    SoPhuc tich = a.Tich(b);
    SoPhuc thuong = a.Thuong(b);

    cout << "Tong: ";
    tong.Xuat();
    cout << endl;

    cout << "Hieu: ";
    hieu.Xuat();
    cout << endl;

    cout << "Tich: ";
    tich.Xuat();
    cout << endl;

    cout << "Thuong: ";
    thuong.Xuat();
}
