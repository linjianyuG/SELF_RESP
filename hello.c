#include <stdarg.h>
#include "hello.h"

void hello(void)
{
	printf("%s","hello world!");
}

void printf(const char *fmt,...)
{
	va_list args;
	int n;
	va_start(args, fmt);
	n = vsprintf(sprint_buf, fmt, args);
	va_end(args);
	write(stdout, sprint_buf, n);
	return n;
}


