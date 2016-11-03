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
 	#include "RandomLib.h"
#ifdef __cplusplus
	};
#endif

static char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789,.-#'?!";

/* TODO: Add your comment here */
void RandomValue(struct RandomValue* inst)
{
	// inst->BOOL_
	inst->BOOL_ = (rand_interval(0,1));
	
	
	//inst->SINT_
	if(rand_interval(0,100) > 50)
	{inst->SINT_ = -1*rand_interval(0,128);}
	else
	{inst->SINT_ = rand_interval(0,127);}
	
	
	//inst->USINT_
	inst->USINT_ = rand_interval(0,255);
	
	
	//inst->INT
	if(rand_interval(0,100) > 50)
	{inst->INT_ = -1*rand_interval(0,32768);}
	else
	{inst->INT_ = rand_interval(0,32767);}
	
	
	//inst->REAL
	inst->REAL_ = (float)rand();
	
	//inst->STRING_
	int length = sizeof(inst->STRING_) - 1; 
	int l = (int) (sizeof(charset) -1);
	int n;
	for (n = 0;n < length;n++) {
	int key = rand() % l;          // per-iteration instantiation
	inst->STRING_[n] = charset[key];
	}
	inst->STRING_[length] = '\0';

	
	
}
