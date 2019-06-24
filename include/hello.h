#define DLL_EXPORTS


#ifdef DLL_EXPORTS  
#define DLL_EXPORTS_API extern "C" __declspec(dllexport)
#else  
#define DLL_EXPORTS_API extern "C" __declspec(dllimport)
#endif  

#ifndef HELLO_H
#define HELLO_H
DLL_EXPORTS_API int HelloFunc(int a,int b);
#endif