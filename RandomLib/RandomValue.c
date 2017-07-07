
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
extern int rand();

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
