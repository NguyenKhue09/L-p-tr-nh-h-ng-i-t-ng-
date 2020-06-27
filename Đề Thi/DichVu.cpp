#include "DichVu.h"

void DichVu::PhiDichVu()
{
	tongtien = (PhiCoBan + Chiphilophoc + Hotropt + Dichvuxonghoi)*SoThang;
}
void DichVu::Nhap()
{
	cout << "Nhap so thang dang ki dich vu : "; cin >> SoThang;
}