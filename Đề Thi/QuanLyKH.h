#pragma once
#include"KhachHang.h"

class QuanLyKH
{
private:
	int n;
	KhachHang* mang;
public:
	QuanLyKH()
	{
		n = 0;
		mang = new KhachHang[n];
	}
	void Nhap();
	void Xuat();
	void TuVan();
};

