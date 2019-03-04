#pragma once
#ifdef DLL_DEMO_EXPORTS
#define DLL_DEMOAPI extern "C" __declspec(dllexport)
#else
#define DLL_DEMOAPI extern "C" __declspec(dllimport)
#endif
DLL_DEMOAPI int add(int var1, int var2);
DLL_DEMOAPI int sub(int var1, int var2);

