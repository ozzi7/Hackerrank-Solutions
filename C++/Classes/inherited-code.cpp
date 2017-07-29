class BadLengthException: public exception {
	int nofdigits;
	
	public: 
	BadLengthException(int n) {
		nofdigits = n;
	}
	char const* what()
	{
		string stringy = to_string(nofdigits);
		return stringy.c_str();
	}
};