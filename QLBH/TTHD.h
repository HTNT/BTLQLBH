#pragma once
#include"head.h"
class HoaDon: public TTHangHoa, public TTKhachHang{
	private:
		long tong;
		string time;
	public:
		HoaDon(){
			this->tong=0;
		}
		HoaDon(long tong){
			this->tong=tong;
		}
		void NhapFHis();
		void XuatFHis();
		void settong(long tong){
			this->tong=tong;
		}
		long gettong(){
			return tong;		
		}
		void settime(string time){
			this->time=time;
		}
		string gettime(){
			return time;
		}
};
vector<HoaDon> dsls;
