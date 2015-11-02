#ifndef __STRING__
#define __STRING__

class StringP2{


	char* str;   // es fan les propietats privades per eveitar: delete string, string = new...(allocata un munt de memoria, error de LINK), 
	unsigned int capacity;   // fas una cadena més gran que la capacity que té aleshores esta allocatant memòria on no pots

	// la classe cadena no pot tenir memory LINK, control de la seva memòria
	//1- Empty constructor, 2- copy constructor, 3- que rebi una const cadena 4 - que nomes rebi capacity
	//hem de fer destructor
	//operators: == i !=
	// c_str()  -> metode que retorni la cadena que li pasis
	StringP2();
	StringP2(const StringP2& str);
	StringP2(const char*  str);
	StringP2(unsigned int capacity);

	~StringP2();

	bool operator ==(const char* str)const;
	bool operator !=(const char* str)const;
	const char* c_str()const;
	const StringP2& operator =(const StringP2& str);
	const StringP2& operator =(const char* str);

};





#endif