
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif                 
#include "RandomLib.h"
#ifdef __cplusplus
	};
#endif

int rand();

/* TODO: Add your comment here */
signed short random(void)
{
	return	rand();
}

