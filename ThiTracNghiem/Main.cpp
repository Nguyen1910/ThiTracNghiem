#include <iostream>
#include <string>
#include <fstream>
#include "mylib.h"
#include "GiaoDien.h"
#include "ChucNang.h"
#include "MonHoc.h"
#include "Diem.h"
#include "KhaiBao.h"
#define MAXCAUHOI 200
#define MAXLOP 200
using namespace std;

int main() {
	DS_LOP ds_lop;
	NodeMH* root = null;
	docFileDanhSachLop(ds_lop);
	docFileSinhVien(ds_lop);
	docFileDanhSachMonHoc(root);
	docFileCauHoi(root);
	docFileDiem(ds_lop, root);
	resizeConsole(1300, 700); // 175
	chucNangDangNhap(60, 10, 50, 10, ds_lop, root);
	return 0;
}