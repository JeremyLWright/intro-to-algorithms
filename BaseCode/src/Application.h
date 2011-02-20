/**
 * @file Application.h
 *
 * @par
 * Copyright Jeremy Wright (c) 2011
 * Creative Commons Attribution-ShareAlike 3.0 Unported License.
 */
#ifndef APPLICATION_H_
#define APPLICATION_H_
#include <string>
namespace cpp_practicum {
using std::string;
class Application {
public:
	Application();
	virtual ~Application();
	void run(string filename);
private:

};


}

#endif /* APPLICATION_H_ */
