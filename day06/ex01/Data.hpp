
#ifndef __DATA_H__
#define __DATA_H__
#include <iostream>

typedef struct Data
{
  float x;
  float y;
  float dir;

} Data;

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);
#endif
