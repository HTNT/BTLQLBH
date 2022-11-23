#pragma once
#include"head.h"
class TTKhachHang{
	private:
		string Ten;
		string sdt;
	public:
		TTKhachHang(){
			this->Ten=" ";
			this->sdt=" ";
		}
		TTKhachHang(string Ten, string sdt){
			this->Ten=Ten; this->sdt=sdt;
		}
		string getTen(){
			return Ten;
		}
		void setTen(string Ten){
			this->Ten=Ten;
		}
		string getsdt(){
			return sdt;
		}
		void setsdt(string sdt){
			this->sdt=sdt;
		}
		void XuatFkh();
		void NhapFkh();
};
vector<TTKhachHang> dskh;

