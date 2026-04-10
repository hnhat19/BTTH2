#ifndef PhanSo_H
#define PhanSo_H

class PhanSo{
private:
    int iTu;
    int iMau;
public:
    void Nhap();
    void Xuat();
    void RutGon();
    PhanSo Tong(PhanSo ps);
    PhanSo Hieu(PhanSo ps);
    PhanSo Tich(PhanSo ps);
    PhanSo Thuong(PhanSo ps);
    void SoSanh(PhanSo ps); //"Lon hon": a>b; "Nho hon": a<b; "Bang nhau": a=b
};
#endif

