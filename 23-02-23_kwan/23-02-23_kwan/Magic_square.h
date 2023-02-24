#ifndef _MAGIC_H_
#define _MAGIC_H_

class Magic_square 
{
public:
	Magic_square();
	void input_size();
	void make_array();
	void access_ms();
	void print_ms();
	~Magic_square();

private:
	int size;
	int h, w;
	int** ms_array;
};

#endif