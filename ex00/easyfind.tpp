
template<typename T>
typename T::iterator easyfind (T &arg1, int arg2) {
	typename T::iterator it = find(arg1.begin(), arg1.end(),69);
	(void)arg1;
	(void)arg2;
	return it; 
}
