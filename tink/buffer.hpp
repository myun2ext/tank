#ifndef __MYUN2__TINK__BUFFER_HPP__
#define __MYUN2__TINK__BUFFER_HPP__

namespace myun2 {
	namespace tink
	{
		template <typename T>
		struct buffer {
			T* p;
			buffer(unsigned long n) { p = new T[n]; }
			virtual ~buffer() { delete[] p; }
		};
	}
}

#endif//__MYUN2__TINK__BUFFER_HPP__
