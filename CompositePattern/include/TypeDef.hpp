#ifndef TYPE_DEF_HPP
#define TYPE_DEF_HPP

#include "MenuItem.hpp"
#include <map>
#include <vector>
#include <utility>
#include <string.h>

using namespace std;

typedef map<string, MenuItem*> HashMenu;
typedef pair<string, MenuItem*> HashPair;
typedef vector<MenuItem> ArrayList;

#endif
