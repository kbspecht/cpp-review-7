[[maybe_unused]] constexpr int gx { 2 }; // this internal g_x is only accessible within a.cpp

// global variable definitions
int g_x { 2 }; // non-constant globals have external linkage by default
extern const int g_y { 3 }; // this extern gives g_y external linkage
