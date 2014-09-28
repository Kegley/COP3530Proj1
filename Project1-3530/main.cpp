#include <iostream>
#include <exception>
#include "ssll.h"
#include "PSLL.h"
#include "SDAL.h"
#include "CDAL.h"

using namespace cop3530;

int main(){
	cop3530::CDAL<int> CD;
	cop3530::SSLL<int> SS;
	cop3530::PSLL<int> PS;
	cop3530::SDAL<int> SD;

	SS.push_back(10000);
	PS.push_back(10000);
	SD.push_back(10000); SD.push_back(10000); SD.push_back(10000); SD.push_back(10000);
	CD.push_back(10000);

	const cop3530::SDAL<int> SDC;



	cop3530::SDAL<int>::iterator end = SD.end();

	for (cop3530::SDAL<int>::iterator begin = SD.begin(); begin != end; ++begin){
		*begin = *begin + 1;
		std::cout << *begin << std::endl;
	}

	//SDC = SD;


	//cop3530::SDAL<int>::const_iterator const_iter = SDC.begin();
	//cop3530::SDAL<int>::const_iterator const_iter_end = SDC.end();



	return 0;

}