RandomLib is a library to generate random data.

Background
Random function is not natively available in all languages supported by Automation Studio. 

Implimentation
This library encapsulates rand() from ANSI C, and impliments following function blocks to generate random values. 
- int random(void)
- unsigned int rand_interval(unsigned int min, unsigned int max)
- void RandomValue(struct RandomValue* inst)

The function blocks above can be used in any language supported by Automation Studio.
