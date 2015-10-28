#include <stdio.h>
#include "ClassString.h"
#include <string.h>





String::String(){

	str = NULL;
	capacity = 0;

}

String::String(const String& other){

	str = other.str;
	capacity = other.capacity;

}


String::String(const char* otherString){

	capacity = strlen(otherString) + 1;
	*str = *otherString;

}

String::String(unsigned int otherCapacity){

	capacity = otherCapacity;
};

bool String:: operator==(const char* other)const{

	return !strcmp(other, str);
};



bool String:: operator!=(const char* other)const{

	return strcmp(other, str);
};

const char* String::c_str()const{


	return str;
};