#ifndef BASE_SRC_BASE_BASE_EXPORT_H_
#define BASE_SRC_BASE_BASE_EXPORT_H_


#ifdef _WIN32
#ifdef C_DLL_EXPORT
#define BASE_EXPORT __declspec(dllexport)
#else 
#define BASE_EXPORT __declspec(dllimport)
#endif
#else
#define BASE_EXPORT
#endif // _WIN32

#endif // BASE_SRC_BASE_BASE_EXPORT_H_