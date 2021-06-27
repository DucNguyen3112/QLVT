
#include "HoaDon.h"
#include "mylib.h"
#include "xulidulieu.h"
using namespace std;
//Cau truc nhan vien
struct NhanVien
{
	string maNV;
	string hoNV;
	string tenNV;
	string phai;
	DSHD ds_hd;
	
};
//Cau truc danh sach nhan vien
struct DSNV
{
	NhanVien* ds[500];
	int sl = 0;
};
//==================================
bool themNhanVien(DSNV& dsnv, int y);
void xuatDSNV(DSNV dsnv,int index);
void docFileNhanVien(DSNV& dsnv);
int chonNhanVien(DSNV dsnv);
void xoaNhanVien(DSNV& dsnv, int index);
int hieuChinhNhanVien(DSNV& dsnv, int index, int x, int y);
void ghiFileNhanVien(DSNV dsnv);
void sapXepNhanVien(DSNV& dsnv);