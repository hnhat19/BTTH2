#include <iostream>
#include "TIME.h"
using namespace std;

void TIME::ChuanHoa(){
    // Chuẩn hóa giây -> phút
    iM += iS / 60;
    iS = iS % 60;

    // Chuẩn hóa phút -> giờ
    iH += iM / 60;
    iM = iM % 60;

    // Chuẩn hóa giờ
    iH = iH % 24;
}


void TIME::Nhap(){
    cout<<"Nhap gio: ";cin>>iH;cout<<endl;
    cout<<"Nhap phut: ";cin>>iM;cout<<endl;
    cout<<"Nhap giay: ";cin>>iS;cout<<endl;
}

void TIME::Xuat(){
    cout << iH << ":" << iM << ":" << iS<<endl;
}

void TIME::TinhCongThemMotGiay(){

    iS++;

    iM += iS / 60;
    iS %= 60;

    iH += iM / 60;
    iM %= 60;

    iH %= 24;
}

