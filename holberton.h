



#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>I
#include <limits.h>
#include <unistd.h>

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _printf(const char *format, ...);

#endif
