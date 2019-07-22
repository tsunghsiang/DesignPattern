#ifndef ITERATOR_HPP
#define ITERATOR_HPP

template<class T>
class Iterator
{
	public:
		/* Return a boolean indicating whether or not there are more elements to iterate over */
		virtual bool HasNext() = 0;
		/* Return the next element */
		virtual T Next() = 0;
	private:
};

#endif
