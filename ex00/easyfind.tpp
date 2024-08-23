
template<typename T>
typename T::iterator easyfind (T &arg1, const int arg2) {
	typename T::iterator it = find(arg1.begin(), arg1.end(),arg2);
	if (it == arg1.end())
		throw std::out_of_range("Out of range!");
	return it; 
}
