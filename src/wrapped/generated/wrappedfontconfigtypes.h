/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v1.3.0.10) *
 *******************************************************************/
#ifndef __wrappedfontconfigTYPES_H_
#define __wrappedfontconfigTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int64_t (*iFppiLi_t)(void*, void*, int64_t, uintptr_t, int64_t);

#define SUPER() ADDED_FUNCTIONS() \
	GO(FcPatternAddWeak, iFppiLi_t)

#endif // __wrappedfontconfigTYPES_H_