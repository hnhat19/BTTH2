#include <iostream>
using namespace std;
#include "SoPhuc.h"

void SoPhuc::Nhap(){
    cout<<"\nPhan thuc: ";cin >> iThuc;
    cout<<"Phan ao: ";cin >> iAo;
}

void SoPhuc::Xuat(){
    if(iAo >= 0)
        cout << iThuc << "+" << iAo << "i";
    else
        cout << iThuc << iAo << "i";
}

SoPhuc SoPhuc::Tong(SoPhuc sp){
    SoPhuc kq;
    kq.iThuc = iThuc + sp.iThuc;
    kq.iAo = iAo + sp.iAo;
    return kq;
}

SoPhuc SoPhuc::Hieu(SoPhuc sp){
    SoPhuc kq;
    kq.iThuc = iThuc - sp.iThuc;
    kq.iAo = iAo - sp.iAo;
    return kq;
}

SoPhuc SoPhuc::Tich(SoPhuc sp){
    SoPhuc kq;
    kq.iThuc = iThuc * sp.iThuc - iAo * sp.iAo;
    kq.iAo = iThuc * sp.iAo + iAo * sp.iThuc;
    return kq;
}

SoPhuc SoPhuc::Thuong(SoPhuc sp){
    SoPhuc kq;
    double mau = sp.iThuc*sp.iThuc + sp.iAo*sp.iAo;
    if(mau == 0){
        cout << "Khong the chia cho so phuc 0+0i\n";
        kq.iThuc = 0;
        kq.iAo = 0;
        return kq;
    }
    kq.iThuc = (iThuc*sp.iThuc + iAo*sp.iAo) / mau;
    kq.iAo   = (iAo*sp.iThuc - iThuc*sp.iAo) / mau;

    return kq;
}
