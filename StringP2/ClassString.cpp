#include <stdio.h>
#include "ClassString.h"
#include <string.h>





StringP2::StringP2(){

	str = NULL;
	capacity = 0;

}

StringP2::StringP2(const StringP2& str){

	capacity = str.capacity;
	 
	this->str = new char[capacity];
	strcpy_s(this->str, capacity ,str.str);


}


StringP2::StringP2(const char* str){

	capacity = strlen(str) + 1;
	
	this->str = new char[capacity];
	strcpy_s(this->str, capacity, str);

}

StringP2::StringP2(unsigned int capacity){

	this->capacity = capacity;
}

bool StringP2:: operator==(const char* str)const{

	return !strcmp(str, this->str);
}


bool StringP2:: operator!=(const char* str)const{

	return strcmp(str,this-> str);
}

const char* StringP2::c_str()const{


	return str;
}


const StringP2& StringP2:: operator =(const StringP2& str){

	if (str.capacity >= capacity){

		capacity = str.capacity;
		this->str = new char[capacity];
		strcpy_s(this->str, capacity, str.str);
	}
	else{


	}

}