#pragma once

#include"DichVu.h"

class Basic :public DichVu
{
public:
	Basic()
	{
		loaidichvu = 2;
	}
	void ChonTinhNang()
	{
		cout << "Thong tin goi Basic : " << endl;
		cout << " 1.Phi co ban = 500 " << endl;
		cout << " 2.Chi phi lop hoc : 100/lop" << endl;
		cout << " 3.Dich vu xong hoi : Khong co" << endl;
		cout << " 4.Ho tro PT : 100 " << endl;
		PhiCoBan = 500;
		cout << " Tinh nang ban chon la : " << endl;
		int lop;
		cout << "Chon so lop hoc(nhap 0 neu khong chon tinh nang nay ) : "; cin >> lop;
		Chiphilophoc = 100 * lop;
		int choice;
		cout << "Tinh nang Ho tro PT(nhap 0 neu khong chon tinh nang nay,1 neu chon tinh nang ) : "; cin >> choice;
		Hotropt = 100 * choice;
	}
};