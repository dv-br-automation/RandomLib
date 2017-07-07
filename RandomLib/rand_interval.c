
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "RandomLib.h"
#ifdef __cplusplus
	};
#endif
/* TODO: Add your comment here */

int rand();
                                                                  
unsigned long  rand_interval(unsigned long min, unsigned long max)
{
	if(min > max)
	{
		return 0;
	}
	if((min == 0) && (max==0))
	{
		return rand();
	}
	if(min == max)
	{
		return min;
	}
	
	// Note -  This will bias the randomness slightly, but probably not anything to be concerned about if you're not doing something particularly sensitive.
	return rand() % (max + 1 - min) + min;
}

