#if defined(__linux__)
	#define DLL_EXPORT extern __attribute ((visibility("default")))
#else
	#define DLL_EXPORT extern "C" __declspec(dllexport)
#endif

#ifndef HELLO_H
#define HELLO_H
DLL_EXPORT int HelloFunc(int a,int b);
#endif