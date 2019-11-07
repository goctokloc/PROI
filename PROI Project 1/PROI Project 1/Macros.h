#pragma once
#ifdef _DEBUG
#define DEBUG_MSG(x) std::cout << x;
#else
#define DEBUG_MSG(x) 
#endif 