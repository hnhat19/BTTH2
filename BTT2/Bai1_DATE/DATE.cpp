#include <iostream>
using namespace std;
#include "DATE.h"

bool KiemTraNamNhuan(int nam){
    if (nam%100==0 && nam%400!=0) return 0;
    if (nam%4==0) return 1;
    else return 0;
}
bool KiemTraDateHopLe(int ngay, int thang, int nam){
    if (nam*thang*ngay>0){//Kiem tra ngay thang nam lon hon 0
        if (thang<=12){//Kiem tra Thang
            //Kiem tra thang co 31 ngay
            if ((thang==1 || thang==3 || thang==5 || thang==7 || thang==8 || thang==10 || thang==12) && (ngay<=31)) return 1;
            //Kiem tra thang co 30 ngay
            else if ((thang==4 || thang==6 || thang==9 || thang==11) && ngay<=30) return 1;
            //Kiem tra thang 2 nam nhuan
            else if (thang==2&&KiemTraNamNhuan(nam)&&ngay<=29) return 1;
            //Kiem tra thang 2 nam khong nhuan
            else if (thang==2&&!KiemTraNamNhuan(nam)&&ngay<=28) return 1;
        }
        return 0;
    }
}

void DATE::Nhap(){
    while (1) {
    //Input Ngay, Thang, Nam
    cout<<"Nhap ngay: ";
    cin>>iNgay;
    cout<<endl<<"Nhap thang: ";
    cin>>iThang;
    cout<<endl<<"Nhap nam: ";
    cin>>iNam;
    //Kiem tra DATE
    if (KiemTraDateHopLe(iNgay, iThang, iNam)) break;
    //DATE khong thoa man thi nhap lai
    cout<<"Ngay-thang-nam khong hop le!\nVui long nhap lai\n";
    }

};

void DATE::Xuat(){
    //Output
    cout<<"Ngay "<<iNgay<<" thang "<<iThang<<" nam "<<iNam<<endl;
};

void DATE::NgayThangNamTiepTheo(){
    int ngay=iNgay;int thang=iThang;int nam=iNam;
    //Neu la cuoi thang thi chuyen sang thang moi
    if ((thang==1 || thang==3 || thang==5 || thang==7 || thang==8 || thang==10) && (ngay==31)) {ngay=1;thang++;}
    else if (thang==12 && ngay==31) {ngay=1;thang=1;nam++;}
    else if ((thang==4 || thang==6 || thang==9 || thang==11) && ngay==30) {ngay=1;thang++;}
    else if (thang==2&&KiemTraNamNhuan(nam)&&ngay==29) {ngay=1;thang++;}
    else if (thang==2&&!KiemTraNamNhuan(nam)&&ngay==28) {ngay=1;thang++;}
    else ngay++;
    cout<<"Ngay tiep theo la: Ngay "<<ngay<<" thang "<<thang<<" nam "<<nam<<endl;
};

