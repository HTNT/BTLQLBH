#include"head.h"
#include"SetWD.cpp"
#include"Gd.cpp"
#include"sort.cpp"
#include"TTHH.cpp"
#include"TTKH.cpp"
#include"TTHD.cpp"
int x=0;
int y=0; 
int z=0; 
void SETWHILE(){
	SetColor(15, 0);
	for(int i=0; i<=45 ; i++){
			cout<<"                                                                                     ";
	} 
}
void Chay(){
	TTHangHoa hanghoa;
	hanghoa.NhapF();
	TTKhachHang khachhang;
	khachhang.NhapFkh();
	HoaDon hd;
	hd.NhapFHis();
	vector<TTHangHoa> dsttp=dstt;
	ShowCur(false); 
	//SetWindowSize(100, 21);
	DisableResizeWindow();
	SETWHILE();
	SetColor(15, 0);
	//PrOpMenu(50, 10, 1);
	bool tab;
	int chose=1; 
	bool Run= true; 
	char key;
	while(Run){
		tab=true;
		switch(chose){
			case 1: 
				x=50; y=10; z=1; PrOpMenu(x, y, z); 
				while(tab){	
					key=getch(); 
				switch(key){
/*len*/					case 72:
							if(z==1) break; 
							z-=1; 
							PrOpMenu(x, y, z); 
							break; 
/*xuong*/				case 80: 
							if(z==2) break;
							z+=1; 
						 	PrOpMenu(x, y, z);
						 	break;
						case 13:
							if(z==1){
								chose=3; tab=false; system("CLS"); break; 
									}
							else{
								chose=2; tab=false; break; } 
								} 
																		}
									break;									
			case 2: system("CLS"); Run=false; break; 
			case 3: 
				tab=true;
				z=1; int d=1; 
				PrTT(dstt, d); 
				Pr(z, d); 
				while(tab){	
					fflush(stdin);
					key=getch(); 
				switch(key){
/*len*/					case 72:
							if(z==1||z==6||z==7||z==8||z==9) break; 
							if(z==10||z==11){
								z=4; Pr(z, d); break; 
							} 
							if(z==5||z==6){
								z=10; Pr(z, d); break;
							}
							z-=1;
							Pr( z, d); 
							break; 
/*xuong*/				case 80: 
							if(z==4) {
								z=10; Pr(z, d);
								break; 
							}
							if(z==10||z==11){
								z=5; Pr(z, d); break;
							}
							if(z==4||z==5||z==6||z==7||z==8||z==9) break;
						 	z+=1;
						 	Pr(z, d);
						 	break;
						case 75:
							if(z==1||z==2||z==3||z==8||z==4||z==5) break; 
							if(z==7) {
								z=1; Pr(z, d); break;
							}
							z-=1;
							Pr(z,d);
							break;
						case 77:
							if(z==7) break;
							if(z==1||z==2||z==3||z==4||z==11||z==6){
								 z=7; Pr(z, d); break;
							}
							z+=1;
							Pr(z,d);
							break; 
//5 sua 6 xoa 1 them 2 tim 3 ls 4 thoat 10 11 <> 8 9 sort 7 order 12 
						case 13: vector<TTHangHoa> chk; 
							switch(z){
								case 1: dltSubTT(); fflush(stdin); hanghoa.ThemTT(); 	SubRun(hanghoa, z); break;
								case 2:	dltSubTT(); fflush(stdin); hanghoa.TimTT(chk); PrTT(chk, d); SubRun(hanghoa, z); break; 
								case 3: system("cls"); PrHis(); tab=false; break; 
								case 4: chose=1; tab=false; system("CLS"); break;
								case 5: dltSubTT(); gotoxy(15, 20); int q;
									do{
										gotoxy(15, 20); cout<<"                ";
										gotoxy(15, 20); cout<<"Chon Muc sua: "; cin>>q;
									}while(q<=0);
									hanghoa.SuaTT(q);
									gotoxy(15, 20);     cout<<"                ";
									PrList(dstt, d); dltSubTT();
									break;
								case 6: dltSubTT(); gotoxy(15, 20); int p;
									do{
										gotoxy(15, 20); cout<<"                ";
										gotoxy(15, 20); cout<<"Chon Muc xoa: "; cin>>p;
									}while(p<=0);
									dstt.erase(dstt.begin()+p-1);
									gotoxy(15, 20); cout<<"                ";
									PrList(dstt, d); dltSubTT();
									break;
								case 7: OrderRun(); tab=false; break;
								case 8: sort(dsttp, 0, dsttp.size());
										PrTT(dsttp, d); break;
								case 9: sort(dsttp, 0, dsttp.size()); reverse(dsttp.begin(), dsttp.end());
										PrTT(dsttp, d); break;
								case 10: if(d==1) break; d--;Pr(z,d); PrTT(dstt, d); break; 
								case 11: if(dstt.size()<=d*6) break; 
								d++; Pr(z,d); PrTT(dstt, d); break; 
							} 
						} 
				}	
		}
	} 
	khachhang.XuatFkh();
	hanghoa.XuatF();
	hd.XuatFHis();
	exit(0); 
}
int main(){ 
	Chay();
}
