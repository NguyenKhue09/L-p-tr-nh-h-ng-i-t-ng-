#include "QuanLyKH.h"

void QuanLyKH::Nhap()
{
	cout << "Nhap so khach hang : "; cin >> n;
	mang = new KhachHang [n];
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		mang[i].Nhap();
	}
}
void QuanLyKH::Xuat()
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		mang[i].Xuat();
	}
}