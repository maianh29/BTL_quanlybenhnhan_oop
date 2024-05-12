#include <bits/stdc++.h>
#include <fstream>
using namespace std;
class Nguoi
{
private:
	string hoten;
	int namsinh;

public:
	Nguoi(string hoten, int namsinh)
	{
		this->hoten = hoten;
		this->namsinh = namsinh;
	}
	Nguoi() {}
	void nhap()
	{
		cout << "Nhap ten : ";
		getline(cin, this->hoten);
		cout << "Nhap nam sinh: ";
		cin >> this->namsinh;
		cin.ignore();
	}
	void xuat()
	{
		cout << "Ho ten: " << this->hoten << endl;
		cout << "Nam sinh: " << this->namsinh << endl;
	}
	void sethoten(string hoten)
	{
		this->hoten = hoten;
	}
	void setnamsinh(int namsinh)
	{
		this->namsinh = namsinh;
	}
	string gethoten()
	{
		return this->hoten;
	}
	int getnamsinh()
	{
		return this->namsinh;
	}
};
class KhoaY
{
private:
	string makhoa;
	string tenkhoa;

public:
	KhoaY(string makhoa, string tenkhoa)
	{
		this->makhoa = makhoa;
		this->tenkhoa = tenkhoa;
	}

	void xuat()
	{
		cout << this->makhoa << " " << this->tenkhoa << endl;
	}
	void setmakhoa(string makhoa)
	{
		this->makhoa = makhoa;
	}
	void settenkhoa(string tenkhoa)
	{
		this->tenkhoa = tenkhoa;
	}
	string getmakhoa()
	{
		return this->makhoa;
	}
	string gettenkhoa()
	{
		return this->tenkhoa;
	}
};

class BacSi : public Nguoi
{
private:
	string mabacsi;
	string chuyenkhoa;
	string sodienthoai;

public:
	BacSi(string mabacsi, string tenbacsi, int namsinh, string chucvu, string sodienthoai)
	{
		this->mabacsi = mabacsi;
		Nguoi::sethoten(tenbacsi);
		Nguoi::setnamsinh(namsinh);
		this->chuyenkhoa = chucvu;
		this->sodienthoai = sodienthoai;
	}
	BacSi() {}

	void setmabacsi(string mabacsi)
	{
		this->mabacsi = mabacsi;
	}
	void settenbacsi(string tenbacsi)
	{
		Nguoi::sethoten(tenbacsi);
	}
	void setnamsibacsi(int namsinh)
	{
		Nguoi::setnamsinh(namsinh);
	}
	void setchuyennganh(string chucvu)
	{
		this->chuyenkhoa = chucvu;
	}
	void setsodienthoai(string sodt)
	{
		this->sodienthoai = sodt;
	}
	string getmabacsi()
	{
		return this->mabacsi;
	}
	string settenbacsi()
	{
		Nguoi::gethoten();
	}
};

class BenhNhan : public Nguoi
{
private:
	string ma;
	string mahoso;
	string madonthuoc;
	string benh;
	string bacsiphu_trach;
	string dvsu_dung;

public:
	BenhNhan(string ma, string mahoso, string madonthuoc, string hoten, int namsinh, string benh, string bacsi, string dv)
	{
		Nguoi::sethoten(hoten);
		Nguoi::setnamsinh(namsinh);
		this->ma = ma;
		this->mahoso = mahoso;
		this->madonthuoc = madonthuoc;
		this->benh = benh;
		this->bacsiphu_trach = bacsi;
		this->dvsu_dung = dv;
	}
	BenhNhan() {}

	void nhap()
	{
		cout << "Nhap ma benh nhan: ";
		cin.ignore();
		getline(cin, this->ma);
		Nguoi::nhap();
		cout << "Nhap ten benh cua benh nhan: ";
		getline(cin, this->benh);
		cout << "Nhap ma bac si phu trach: ";
		getline(cin, this->bacsiphu_trach);
		cout << "Nhap dich vu benh nhan su dung ";
		getline(cin, this->dvsu_dung);
	}
	void xuat()
	{
		cout << "Ma benh nhan: " << this->ma << endl;
		cout << "Ma ho so: " << this->mahoso << endl;
		Nguoi::xuat();
		cout << "Ten benh: " << this->benh << endl;
		cout << "Ma bac si phu trach: " << this->bacsiphu_trach << endl;
		cout << "Dich vu benh nhan su dung: " << this->dvsu_dung << endl;
	}
	string getmabenhnhan()
	{
		return this->ma;
	}
	string getmadonthuoc()
	{
		return this->madonthuoc;
	}
	string getmahoso()
	{
		return this->mahoso;
	}
	string getma()
	{
		return this->ma;
	}
	string gettenbenh()
	{
		return this->benh;
	}
	string getbacsiphutrach()
	{
		return this->bacsiphu_trach;
	}
	void setbacsiphutrach(string bacsi)
	{
		this->bacsiphu_trach = bacsi;
	}
	string getdv()
	{
		return this->dvsu_dung;
	}
	void setdv(string dv)
	{
		this->dvsu_dung = dv;
	}
	void settenbenh(string benh)
	{
		this->benh = benh;
	}
};

class DichVu
{
private:
	string maDichVu;
	string tenDichVu;
	double giaTien;
	string ngaySuDung;

public:
	DichVu(string ma, string ten, double gia, string ngay)
	{
		this->maDichVu = ma;
		this->tenDichVu = ten;
		this->giaTien = gia;
		this->ngaySuDung = ngay;
	}
	DichVu() {}

	void xuat()
	{
		cout << this->maDichVu << " " << this->tenDichVu << " " << this->giaTien << " " << this->ngaySuDung << endl;
	}

	string getMaDichVu()
	{
		return maDichVu;
	}

	void setMaDichVu(string ma)
	{
		this->maDichVu = ma;
	}

	string getTenDichVu()
	{
		return this->tenDichVu;
	}

	void setTenDichVu(string ten)
	{
		this->tenDichVu = ten;
	}

	double getGiaTien()
	{
		return this->giaTien;
	}

	void setGiaTien(double gia)
	{
		this->giaTien = gia;
	}

	string getNgaySuDung()
	{
		return this->ngaySuDung;
	}

	void setNgaySuDung(string ngay)
	{
		this->ngaySuDung = ngay;
	}
};

class Thuoc
{
private:
	string tenthuoc;
	double gia;

public:
	Thuoc(string ten, double gia)
	{
		this->tenthuoc = ten;
		this->gia = gia;
	}
	void Nhap()
	{
		cin >> this->tenthuoc;
		cin >> this->gia;
	}
};
class DonThuoc
{
private:
	string maDonThuoc;
	string huongDanSuDung;
	string thuoc;

public:
	DonThuoc(string ma, string huongDan, string thuoc)
	{
		this->maDonThuoc = ma;
		this->huongDanSuDung = huongDan;
		this->thuoc = thuoc;
	}
	void Nhap()
	{
		getline(cin, this->maDonThuoc);
		getline(cin, this->huongDanSuDung);
		cout << "Nhap thuoc can ke: ";
		getline(cin, this->thuoc);
	}
	void xuat()
	{
		cout << "ma don thuoc: " << this->maDonThuoc << endl
			 << "huong dan du dung: " << this->huongDanSuDung << endl;
		cout << "Cac loai thuoc: ";
		for (auto x : this->thuoc)
			cout << x << " ";
	}

	string getMaThuoc()
	{
		return this->maDonThuoc;
	}

	void setMaThuoc(string ma)
	{
		this->maDonThuoc = ma;
	}

	string getHuongDanSuDung()
	{
		return this->huongDanSuDung;
	}

	void setHuongDanSuDung(string huongDan)
	{
		this->huongDanSuDung = huongDan;
	}
};

int main()
{
	vector<BenhNhan> benhNhan;
	vector<KhoaY> khoaY;
	vector<BacSi> bacSi;
	vector<DichVu> dichVu;
	vector<DonThuoc> donthuoc;
	ifstream inFile("data.txt");
	if (!inFile)
	{
		cerr << "Không the mo tep." << endl;
		return 1;
	}

	string line;
	while (getline(inFile, line))
	{
		if (line.empty())
			continue;

		stringstream ss(line);
		string loai;
		getline(ss, loai, ',');

		if (loai == "BenhNhan")
		{
			string ma, mahoso, madonthuoc, ten, benh, bacsi, dv;
			int sinh;
			getline(ss, ma, ',');
			getline(ss, mahoso, ',');
			getline(ss, madonthuoc, ',');
			getline(ss, ten, ',');
			ss >> sinh;
			ss.ignore();
			getline(ss, benh, ',');
			getline(ss, bacsi, ',');
			getline(ss, dv);
			benhNhan.push_back(BenhNhan(ma, mahoso, madonthuoc, ten, sinh, benh, bacsi, dv));
		}
		else if (loai == "Khoa")
		{
			string ma, ten;
			getline(ss, ma, ',');
			getline(ss, ten);
			khoaY.push_back(KhoaY(ma, ten));
		}
		else if (loai == "BacSi")
		{
			string ma, ten, chuc, sdt;
			int namsinh;
			getline(ss, ma, ',');
			getline(ss, ten, ',');
			ss >> namsinh;
			ss.ignore();
			getline(ss, chuc, ',');
			getline(ss, sdt);
			bacSi.push_back(BacSi(ma, ten, namsinh, chuc, sdt));
		}
		else if (loai == "DichVu")
		{
			string ma, ten, ngay;
			double gia;
			getline(ss, ma, ',');
			getline(ss, ten, ',');
			ss >> gia;
			ss.ignore();
			getline(ss, ngay);
			dichVu.push_back(DichVu(ma, ten, gia, ngay));
		}
		else if (loai == "DonThuoc")
		{
			string ma, hdsd, thuoc;
			getline(ss, ma, ',');
			getline(ss, hdsd, ',');
			ss >> thuoc;
			donthuoc.push_back(DonThuoc(ma, hdsd, thuoc));
		}
	}

	inFile.close();
	int choice;
	do
	{
		cout << "===== MENU =====" << endl;
		cout << "1. Thong tin tat ca benh nhan" << endl;
		cout << "2. Thong tin khoa y" << endl;
		cout << "3. Thong tin bac si" << endl;
		cout << "4. Thong tin dich vu" << endl;
		cout << "5. Thong tin benh nhan muon tim" << endl;
		cout << "6. Thong tin so benh nhan mac benh" << endl;
		cout << "7. Them benh nhan" << endl;
		cout << "8. Sua thong tin benh nhan" << endl;
		cout << "9. Thoat" << endl;
		cout << "Nhap lua chon cua ban: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Thong tin tat ca benh nhan:" << endl;
			for (auto &bn : benhNhan)
				bn.xuat();
			break;

		case 2:
			cout << "\nThong tin khoa y:" << endl;
			for (auto &ky : khoaY)
				ky.xuat();
			break;

		case 3:
			cout << "\nThong tin bac si:" << endl;
			for (auto &bs : bacSi)
				bs.xuat();
			break;

		case 4:
			cout << "\nThong tin dich vu:" << endl;
			for (auto &dv : dichVu)
				dv.xuat();
			break;

		case 5:
		{
			string mabn;
			int ok = 0;
			cout << "\nNhap ma benh nhan:";
			cin >> mabn;
			cin.ignore();
			BenhNhan bn_;
			for (auto &bn : benhNhan)
			{
				if (mabn == bn.getmabenhnhan())
				{
					bn.xuat();
					bn_ = bn;
					ok = 1;
				}
			}
			cout << "Don thuoc: ";
			for (auto x : donthuoc)
			{
				if (x.getMaThuoc() == bn_.getmadonthuoc())
				{
					x.xuat();
				}
			}
			cout << endl;
			if (ok == 0)
				cout << "Khong co benh nhan" << endl;
			break;
		}

		case 6:
		{
			cout << "Nhap ten benh: ";
			string tenbenh;
			cin >> tenbenh;
			cin.ignore();
			int cnt = 0;
			for (auto &bn : benhNhan)
			{
				if (tenbenh == bn.gettenbenh())
				{
					cnt++;
					bn.xuat();
				}
			}
			cout << "Co " << cnt << " benh nhan mac benh " << tenbenh << endl;
			break;
		}

		case 7:
		{
			BenhNhan newPatient;
			newPatient.nhap();
			benhNhan.push_back(newPatient);

			ofstream outFile("data.txt", ios::app);
			if (!outFile)
			{
				cerr << "Khong the mo tep." << endl;
				return 1;
			}

			outFile << "BenhNhan," << newPatient.getmabenhnhan() << "," << newPatient.gethoten() << ","
					<< newPatient.getnamsinh() << "," << newPatient.gettenbenh() << ","
					<< newPatient.getbacsiphutrach() << "," << newPatient.getdv() << endl;

			outFile.close();
			cout << "Them benh nhan moi thanh cong." << endl;
			break;
		}
		case 8:
		{
			cout << "Nhap ma benh nhan muon sua: ";
			string ma;
			cin >> ma;
			BenhNhan x;
			for (auto &bn : benhNhan)
			{
				if (ma == bn.getmabenhnhan())
					x = bn;
			}

			cout << "1. Sua ten" << endl;
			cout << "2. Thong tin bac si" << endl;
			cout << "3. Thong tin dich vu" << endl;
			cout << "4. Thong tin benh" << endl;
			cout << "5. Xoa thong tin benh nhan" << endl;
			string phansua;
			int choi;
			cin >> choi;
			switch (choi)
			{
			case 1:
				cout << "Nhap ten muon sua: ";
				cin >> phansua;
				x.sethoten(phansua);
				break;
			case 2:
				cout << "Nhap ma bac si muon sua: ";
				cin >> phansua;
				x.setbacsiphutrach(phansua);
				break;
			case 3:
				cout << "Nhap ten dich vu muon sua: ";
				cin >> phansua;
				x.setdv(phansua);
				break;
			case 4:
				cout << "Nhap ten benh muon sua: ";
				cin >> phansua;
				x.settenbenh(phansua);
				break;

			case 5:
			{
				for (auto it = benhNhan.begin(); it != benhNhan.end(); ++it)
				{
					if (ma == it->getma())
					{
						benhNhan.erase(it);
						cout << "Xoa thanh cong !" << endl;
						break;
					}
				}
			}
			break;
			}
		}

		case 9:
			cout << "Chuong trinh ket thuc." << endl;
			break;

		default:
			cout << "Lua chon cua ban khong hop le. Vui long nhap lai." << endl;
			break;
		}
	} while (choice != 9);
}
