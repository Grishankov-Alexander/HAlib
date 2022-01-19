#ifndef HALIB_H
    #define HALIB_H

    #include <stdio.h>

    #ifdef _WIN32
        #ifdef HALIB_EXPORT
            /* Building DLL on Windows */
            #define HALIB_API __declspec(dllexport)
        #else
            /* Using DLL for Windows app */
            #define HALIB_API __declspec(dllimport)
        #endif
    #else
        /* Building or using shared library of UNIX */
        #define HALIB_API
    #endif /* #ifdef _WIN32 */

    /* Disable symbol name mangling when using C++ compiler */
    #ifdef __cplusplus
        extern "C" {
    #endif






/**
* Skip the line of input from the stream f.
* 
* Return 1 on sucess.
* Return EOF on End of file or file error.
*/
HALIB_API extern int HA_skipLine(FILE *f);






    #ifdef __cplusplus
        }
    #endif

#endif /* #ifndef HALIB_H */