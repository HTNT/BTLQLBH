#pragma once
#include"head.h"
class TTHangHoa{
	private:
		string LoaiHang; 
		string TenHang;
		string Size;
		long Gia;
		int Soluong; 
	public:
		TTHangHoa(){
			this->LoaiHang=" ";		this->TenHang=" "; 
			this->Size=" "; 	 this->Gia=0; 	this->Soluong=0; 
		}
		TTHangHoa(string LoaiHang, string TenHang, string Size, long Gia, int SoLuong){
			this->LoaiHang=LoaiHang;	this->TenHang=TenHang;
			this->Size=Size;	this->Gia=Gia;	this->Soluong=SoLuong; 
		} 
		
		friend istream& operator >> (istream &in, TTHangHoa &x);
		friend ostream& operator << (ostream &out, TTHangHoa x); 
		//*****************************************************
		string getLoaiHang(){
			return LoaiHang;
		}
		void setLoaiHang(string LoaiHang){
			this->LoaiHang=LoaiHang;
		}
		string getTenHang(){
			return TenHang;
		}
		void setTenHang(string TenHang){
			this->TenHang=TenHang;
		} 
		long getGia(){
			return Gia;	
		}
		void setGia(long Gia){
			this->Gia=Gia;
		}
		string getSize(){
			return Size;
		}
		void setSize(string Size){
			this->Size=Size;
		}
		int getSoluong(){
			return Soluong;
		}
		void setSoluong(int Soluong){
			this->Soluong=Soluong;
		}
		void Them(); 
		void XuatF();
		void NhapF();
		void XuatTT();
		void TimTT(vector<TTHangHoa> &check);
		void ThemTT();
		void XoaTT(int i);
		void SuaTT(int i);
		void Upstr(string x);
		bool Checksize(string x);
		bool Sosanh(TTHangHoa x, TTHangHoa y);
}; 
vector<TTHangHoa> dstt;
