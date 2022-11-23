#pragma once
#include"head.h"
#include"TTHH.h"
#include"TTKH.h"
#include"TTHD.h"
void dltttline(int i);
void prbut(int a, int b, int d);
void PrOpMenu(int a, int b, int c);
//
void PrSubBut(int c);
void PrMainBut(int c);
void PrNextPre(int c, int d);
void PrSortBut(int c); 
void PrOrder(int c);
//
void PrListBut(int a, int b);
void PrList(vector<TTHangHoa> l, int d);
void DltPrList(int a, int b);
//
void Pr( int c, int d);
void PrTT(vector<TTHangHoa> l, int d);
//
void PrSubTTBut(int c);
void dltSubTT();
void dltPrSubTTBut();
void SubRun(TTHangHoa hh, int e);
//
void PrOrderBut(int c);
void PrConfirmBut(int c);
void dltOrderRun();
void OderRun();
void PrOrderTable();
void ViewOrder(vector<int> x);
void PrOrderTT(vector<int> x);
//
void UPDATEDATA(vector<int> x, string name, string sdt, long tong);
//
void PrHisListBut();
void PrHisTT();
void PrHis();
void HisBack(int c);
