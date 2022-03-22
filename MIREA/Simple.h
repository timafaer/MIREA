#pragma once


template<class T>
class  Vector
{
	T* elements;
	int nlen;
	int range;
public:
	Vector() { nlen = 0; range = 0; }
	Vector(int len) :nlen{ len }, range{ len * 2 }{
		elements = new T[range];
	}

	void resize(int len) {
		if (len >= range) {
			range = len * 2;
			T* tmp = elements;
			elements = new T[range];
			for (int i = 0; i < nlen; i++) 
				elements[i] = tmp[i];
			nlen = len;
		}
		else {
			nlen = len;
		}
	}

};

