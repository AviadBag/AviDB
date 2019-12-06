#include "DictItem.h"

DictItem::DictItem(string k, Data* data) : Item(data) { key = k; }

string DictItem::GetKey() { return key; }
void DictItem::SetKey(string k) { key = k; }
