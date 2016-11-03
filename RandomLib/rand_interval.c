/*************************************************************************** 
MIT License

Copyright (c)  2016  dv

Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.



******************************************************************************/
	

#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
//	#include "UserLib.h"
#ifdef __cplusplus
	};
#endif
/* TODO: Add your comment here */

int rand();

unsigned int rand_interval(unsigned int min, unsigned int max)
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

