#include "KhachHang.h"
#include"Premium.h"
#include"Basic.h"
#include"Non-member.h"

void KhachHang::Nhap()
{
	cout << "Nhap Ho va Ten : "; getline(cin, HvT);
	cout << "Nhap so CMND : "; getline(cin, CMND);
	int choice;
	cout << "Lua chon goi dich vu : " << endl;
	cout << " 1.Goi Premium" << endl;
	cout << " 2.Goi Basic" << endl;
	cout << " 3.Goi Non-member" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		A = new Premium;
		A->ChonTinhNang();
		A->Nhap();
		A->PhiDichVu();
		break;
	case 2:
		A = new Basic;
		A->ChonTinhNang();
		A->Nhap();
		A->PhiDichVu();
		break;
	case 3:
		A = new Nonmember;
		A->ChonTinhNang();
		A->Nhap();
		A->PhiDichVu();
		break;
	default:
		break;
	}
	cin.ignore();
}
void KhachHang::Xuat()
{
	cout << "Ho va Ten : " << HvT<<endl;
	cout << "CMND : " << CMND << endl;
	if (A->loaidichvu == 1)
		cout << "Khach hang Premium" << endl;
	if (A->loaidichvu == 2)
		cout << "Khach hang Basic" << endl;
	if (A->loaidichvu == 3)
		cout << "Khach hang Non-member" << endl;
	cout << "So tien cua khach hang : " << A->tongtien << endl;
	cout << endl;

}