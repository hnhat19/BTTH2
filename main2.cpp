#include <iostream>
#include "PhanSo.h"
using namespace std;

int main() {
    PhanSo a, b;
    cout << "Nhap phan so A:\n";
    a.Nhap();
    cout << "Nhap phan so B:\n";
    b.Nhap();
    cout << "\nPhan so A: ";
    a.RutGon();
    a.Xuat();
    cout << "\nPhan so B: ";
    b.RutGon();
    b.Xuat();
    // Tính toán
    PhanSo tong = a.Tong(b);
    PhanSo hieu = a.Hieu(b);
    PhanSo tich = a.Tich(b);
    PhanSo thuong = a.Thuong(b);

    cout << "\n\nTong: ";
    tong.Xuat();
    cout << "\nHieu: ";
    hieu.Xuat();
    cout << "\nTich: ";
    tich.Xuat();
    cout << "\nThuong: ";
    thuong.Xuat();

    // So sánh
    cout<<endl<<"Phan so A ";a.SoSanh(b);cout<<" Phan so B"<<endl;

    return 0;
}

