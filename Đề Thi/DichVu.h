#pragma once
#include<iostream>
using namespace std;
class DichVu
{
public:
	int loaidichvu;
	int PhiCoBan,Chiphilophoc,Dichvuxonghoi,Hotropt;
	int tongtien;
	int SoThang;
	DichVu()
	{
		loaidichvu = 0;
		PhiCoBan = 0;
		Chiphilophoc = 0;
		Dichvuxonghoi = 0;
		Hotropt = 0;
		tongtien = 0;
		SoThang = 0;
	}
	virtual void PhiDichVu();
	virtual void Nhap();
	virtual void ChonTinhNang() = 0;
};

