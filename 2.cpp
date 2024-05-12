#include <iostream>
#include <string>

using namespace std;

class DonThuoc {
private:
    string maThuoc;
    string tenThuoc;
    string thanhPhanHoatChat;
    string lieuLuong;
    string huongDanSuDung;
    string tacDungPhu;

public:
    DonThuoc(string ma, string ten, string thanhPhan, string lieu, string huongDan, string tacDung) {
        this->maThuoc = ma;
        this->tenThuoc = ten;
        this->thanhPhanHoatChat = thanhPhan;
        this->lieuLuong = lieu;
        this->huongDanSuDung = huongDan;
        this->tacDungPhu = tacDung;
    }

    DonThuoc() {}

    void xuat() {
        cout << this->maThuoc << " " << this->tenThuoc << " " << this->thanhPhanHoatChat << " " << this->lieuLuong << " " << this->huongDanSuDung << " " << this->tacDungPhu << endl;
    }

    string getMaThuoc() {
        return this->maThuoc;
    }

    void setMaThuoc(string ma) {
        this->maThuoc = ma;
    }

    string getTenThuoc() {
        return this->tenThuoc;
    }

    void setTenThuoc(string ten) {
        this->tenThuoc = ten;
    }

    string getThanhPhanHoatChat() {
        return this->thanhPhanHoatChat;
    }

    void setThanhPhanHoatChat(string thanhPhan) {
        this->thanhPhanHoatChat = thanhPhan;
    }

    string getLieuLuong() {
        return this->lieuLuong;
    }

    void setLieuLuong(string lieu) {
        this->lieuLuong = lieu;
    }

    string getHuongDanSuDung() {
        return this->huongDanSuDung;
    }

    void setHuongDanSuDung(string huongDan) {
        this->huongDanSuDung = huongDan;
    }

    string getTacDungPhu() {
        return this->tacDungPhu;
    }

    void setTacDungPhu(string tacDung) {
        this->tacDungPhu = tacDung;
    }


    static DonThuoc taoDonThuocMoi(string ma, string ten, string thanhPhan, string lieu, string huongDan, string tacDung) {
        return DonThuoc(ma, ten, thanhPhan, lieu, huongDan, tacDung);
    }

 
    void capNhatDonThuoc(string ten, string thanhPhan, string lieu, string huongDan, string tacDung) {
        this->tenThuoc = ten;
        this->thanhPhanHoatChat = thanhPhan;
        this->lieuLuong = lieu;
        this->huongDanSuDung = huongDan;
        this->tacDungPhu = tacDung;
    }
};

int main() {
   
    DonThuoc thuocMoi = DonThuoc::taoDonThuocMoi("123ABC", "Paracetamol", "Paracetamol", "500mg", "Uống sau bữa ăn", "Hiếm gặp");
    thuocMoi.xuat();

   
    thuocMoi.capNhatDonThuoc("Ibuprofen", "Ibuprofen", "400mg", "Uống nhiều nước", "Hiếm gặp");
    thuocMoi.xuat();

    return 0;
}
