#include <iostream>
#include "MyMiniZip.h"
int main()
{
	MyMiniZip unZip;
	/*
	@解压缩 zip文件包
	*/
	unZip.unZipPackageToLoacal("D:\\boost_1_67_0.zip", "d:\\pdf\\");
	printf_s("共计用时 %d 秒\r\n", unZip.GetCountTime());

	/*
	@ 压缩文件或目录为zip包
	*/
	unZip.CompressToPackageZip("D:\\PDF\\WPS2016ProPlus_normal.exe", "D:\\PDF\\WPS2016.zip");
	printf_s("共计用时 %d 秒\r\n", unZip.GetCountTime());
	system("pause");
	return 0;
}