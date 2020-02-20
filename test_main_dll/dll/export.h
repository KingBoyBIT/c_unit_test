/*此头很有必要，别人在调用的时候知道有哪些方法*/
#define BUILD_DLL

#ifdef BUILD_DLL
#define EXPORT __declspec(dllexport)
#else
#define EXPORT __declspec(dllimport)
#endif

EXPORT void export(void);