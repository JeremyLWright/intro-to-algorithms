/*
 * Application.h
 *
 *  Created on: Feb 5, 2011
 *      Author: jwright
 */

#ifndef APPLICATION_H_
#define APPLICATION_H_

#include <tr1/memory>

namespace cpp_practicum {

class Application {
public:
	typedef std::tr1::shared_ptr<Application> Ptr;
	static Application::Ptr construct();
	virtual ~Application();
	void run();
private:
	Application();
};


}

#endif /* APPLICATION_H_ */
