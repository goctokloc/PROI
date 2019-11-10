#pragma once
#include <iostream>

#ifdef _DEBUG
#define DEBUG_MSG(x) std::cout << x;
#define DEBUG_OPERATOR_TEST operatorTest;
#else
#define DEBUG_MSG(x)
#define DEBUG_OPERATOR_TEST
#endif 