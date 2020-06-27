#pragma once
#include"DichVu.h"

class Premium:public DichVu
{
public:
	Premium()
	{
		loaidichvu = 1;
	}
	void ChonTinhNang()
	{
		cout << "Thong tin goi Premium : " << endl;
		cout << " 1.Phi co ban = 200 " << endl;
		cout << " 2.Chi phi lop hoc : Mien Phi" << endl;
		cout << " 3.Dich vu xong hoi : Mien Phi" << endl;
		cout << " 4.Ho tro PT : Mien Phi " << endl;
		PhiCoBan = 1000;
	}
};

