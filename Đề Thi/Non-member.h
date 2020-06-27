#pragma once
#include"DichVu.h"

class Nonmember :public DichVu
{
public:
	Nonmember()
	{
		loaidichvu = 3;
		PhiCoBan = 200;
		Chiphilophoc = 0;
		Dichvuxonghoi = 0;
	}
	void ChonTinhNang()
	{
		cout << "Thong tin goi Non-member : " << endl;
		cout << " 1.Phi co ban = 200 " << endl;
		cout << " 2.Chi phi lop hoc : Khong co " << endl;
		cout << " 3.Dich vu xong hoi : Khong co" << endl;
		cout << " 4.Ho tro PT : 200 " << endl;
		PhiCoBan = 500;
		cout << "Tinh nang ban chon la : " << endl;
		int choice;
		cout << "Tinh nang Ho tro PT(nhap 0 neu khong chon tinh nang nay,1 neu chon tinh nang ) : "; cin >> choice;
		Hotropt = 200 * choice;
	}
};