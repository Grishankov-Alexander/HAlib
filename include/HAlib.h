/*************************************************************************
 * HAlib
 * Utilities library
 *------------------------------------------------------------------------
 * Copyright (c) 2022 Alexander Grishankov
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would
 *    be appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not
 *    be misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source
 *    distribution.
 *
 *************************************************************************/






#ifndef HALIB_H
    #define HALIB_H

    /* Disable symbol name mangling when using C++ compiler */
    #ifdef __cplusplus
        extern "C" {
    #endif

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