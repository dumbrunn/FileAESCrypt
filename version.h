#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "18";
	static const char MONTH[] = "03";
	static const char YEAR[] = "2016";
	static const char UBUNTU_VERSION_STYLE[] = "15.06";
	
	//Software Status
	static const char STATUS[] = "Beta";
	static const char STATUS_SHORT[] = "b";
	
	//Standard Version Type
	static const long MAJOR = 0;
	static const long MINOR = 9;
	static const long BUILD = 15;
	static const long REVISION = 103;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT = 143;
	#define RC_FILEVERSION 0,9,15,103
	#define RC_FILEVERSION_STRING "0, 9, 15, 103\0"
	static const char FULLVERSION_STRING[] = "0.9.15.103";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY = 14;
	

}
#endif //VERSION_H
