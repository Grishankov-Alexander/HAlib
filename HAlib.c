#include <stddef.h>
#include <stdio.h>

#define HALIB_EXPORT
#include "HAlib.h"






HALIB_API extern int HA_skipLine(FILE *f)
{
	int assigned;

	assigned = fscanf(f, "%*[^\n]"); /* Read everything but \n */
	switch (assigned) {
		case 0:			fgetc(f); return 1; /* Read \n */
		case EOF:
		default:		return EOF;
	}
}