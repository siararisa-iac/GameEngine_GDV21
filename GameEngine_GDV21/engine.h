#ifndef ENGINE_H
#define ENGINE_H

// Include all the libraries and header files used here
#include "graphics.h"
#include "gameObject.h"
#include "input.h"
// not to be confused with the vector3 class, this is the collection similar to list from previous lesson
#include <vector>

void Initialize();
void Update();
void PrepareEngine(int argc, char** argv);

#endif