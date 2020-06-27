#pragma once
#include"DichVu.h"
#include<string>
#include<iostream>
using namespace std;
class KhachHang
{
protected:
	string HvT,CMND;
	DichVu *A;
public:
	void Nhap();
	void Xuat();

};

