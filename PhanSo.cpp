#include <iostream>
#include "PhanSo.h"
using namespace std;

// Tim UCLN
int UCLN(int a, int b) {
    if (b == 0) return a;
    return UCLN(b, a % b);
}

void PhanSo::Nhap() {
    cout<<"Nhap tu: ";cin>>iTu;
    do {
        cout<<"Nhap mau (khac 0): ";cin>>iMau;
    } while (iMau == 0);
}

void PhanSo::Xuat() {
    cout << iTu << "/" << iMau;
}

void PhanSo::RutGon(){
    int ucln = UCLN(abs(iTu),abs(iMau));
    iTu /= ucln;
    iMau /= ucln;
    // Doi dau neu mau so < 0
    if (iMau<0) {
        iTu= -iTu;
        iMau= -iMau;
    }
}

PhanSo PhanSo::Tong(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iMau + ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Hieu(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iMau - ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Tich(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iTu;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Thuong(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iMau;
    kq.iMau = iMau * ps.iTu;
    kq.RutGon();
    return kq;
}

//"Lon hon": a>b; "Nho hon": a<b; "Bang nhau": a=b
void PhanSo::SoSanh(PhanSo ps) {
    int a = iTu * ps.iMau;
    int b = ps.iTu * iMau;

    if (a > b) cout<<"Lon hon";
    else if (a == b) cout<<"Bang nhau";
    else cout<<"Nho hon";
}

