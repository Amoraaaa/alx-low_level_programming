#include <unistd.h>
#include "main.h"
/**
 *
 *
 *
 */
int _puctchar(char c)
{
	return (write(1, &c, 1));
}
