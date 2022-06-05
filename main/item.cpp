#include "item.h"

Item::Item(unsigned buff) :m_buff{ buff } {}
unsigned Item::get_buff() {
	return m_buff;
}