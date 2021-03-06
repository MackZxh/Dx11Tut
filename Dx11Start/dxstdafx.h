// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // 从 Windows 头中排除极少使用的资料
// Windows 头文件: 
#include <windows.h>

// C 运行时头文件
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>


// TODO: 在此处引用程序需要的其他头文件
#include <shellapi.h>
#include <memory>
#include <vector>
#include <io.h>
#include <fcntl.h>
#include <Xinput.h>
#include <d3d11_4.h>
#include <wrl.h>
#include <DirectXMath.h>
#include <d3dcompiler.h>
#include <D3Dcommon.h>
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxguid.lib")
#pragma comment(lib, "d3dcompiler.lib")

template<typename T>
void SetName(T* pUnk, const char cName[]) {
	pUnk->SetPrivateData(WKPDID_D3DDebugObjectName, sizeof(cName) - 1, cName);
}
