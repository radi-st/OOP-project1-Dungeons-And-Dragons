#pragma once

class Item {
public:
	Item(unsigned buff);
	unsigned get_buff();
	virtual void print() = 0;
protected:
	unsigned m_buff;
};