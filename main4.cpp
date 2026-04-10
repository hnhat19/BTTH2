#include <iostream>
#include "TIME.h"
using namespace std;

int main(){
    TIME t;
    t.Nhap();
    t.ChuanHoa();
    cout<<"Thoi gian: ";
    t.Xuat();
    t.TinhCongThemMotGiay();

    cout << "Thoi gian sau 1 giay: ";
    t.Xuat();
}
