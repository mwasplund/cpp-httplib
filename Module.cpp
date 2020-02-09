module;

// First pass only perform includes
#define SOUP_INCLUDES
#include "httplib.h"
#undef SOUP_INCLUDES

export module HttpLib;

// Include the implementation
#include "httplib.h"