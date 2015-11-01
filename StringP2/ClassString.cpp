#include <stdio.h>
#include "ClassString.h"
#include <string.h>





String::String(){

	str = NULL;
	capacity = 0;

}

String::String(const String& str){

	capacity = strlen(str.str) + 1;
	 
	this->str = new char[capacity];
	strcpy_s(this->str, capacity ,str.str);


}


String::String(const char* str){

	capacity = strlen(str) + 1;
	
	this->str = new char[capacity];
	strcpy_s(this->str, capacity, str);

}

String::String(unsigned int capacity){

	this->capacity = capacity;
};

bool String:: operator==(const char* str)const{

	return !strcmp(str, this->str);
};



bool String:: operator!=(const char* str)const{

	return strcmp(str,this-> str);
};

const char* String::c_str()const{


	return str;
};