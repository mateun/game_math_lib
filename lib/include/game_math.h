
#ifdef GAME_MATH_EXPORTS
#define GAME_MATH_API __declspec( dllexport )  
#else
#define GAME_MATH_API __declspec( dllimport )  
#endif

GAME_MATH_API bool rayIntersectPlane();
GAME_MATH_API bool rayIntersectTriangle();