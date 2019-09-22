#ifndef TYPE_DEF_HPP
#define TYPE_DEF_HPP

#include "MenuItem.hpp"
#include "MenuComponent.hpp"
#include <map>
#include <vector>
#include <utility>
#include <string.h>

using namespace std;

using HashMenu = map<string, MenuItem*>;
using HashPair = pair<string, MenuItem*>;
using ArrayList = vector<MenuItem>;
using MenuComponents = vector<MenuComponent*>;

#endif
