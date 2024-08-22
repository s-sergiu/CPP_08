
template<typename T>
T easyfind (T &arg1, int arg2) {
	T it = find(arg1.begin(), arg1.end(), arg2);
	(void)it;
	(void)arg1;
	(void)arg2;
	return it;
}
