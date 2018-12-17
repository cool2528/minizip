# 简单的封装了下ZLIB的minizip

## 构建
> vs2013直接打开项目下的miniZip.sln文件编译即可
> 如果是其他版本的Visual Studio 可以参考如何构建ZLIB静态库[ZLIB静态库构建教程](https://www.cnblogs.com/guolongzheng/p/10129894.html)
## 使用
> 在项目中MyMiniZip类中 有两个函数一个是 `unZipPackageToLoacal` 负责解压zip文件,<br/>
另外一个`CompressToPackageZip`负责压缩成zip文件包的函数.<br/>
大致使用流程如下代码<br/>
```
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
```
