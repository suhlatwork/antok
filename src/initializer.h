#ifndef ANTOK_INITIALIZER_H
#define ANTOK_INITIALIZER_H

#include<string>

#include<yaml-cpp/yaml.h>

class TFile;
class TTree;

namespace antok {

	class Event;
	class Cutter;
	class ObjectManager;
	class Plotter;

	class Initializer {

	  public:

		static Initializer* instance();

		bool readConfigFile(const std::string& filename);

		bool initAll() {
			return (
				initializeData() and
				initializeEvent() and
				initializeCutter() and
				initializePlotter()
			);
		}

		bool initializeCutter();
		bool initializeData();
		bool initializeEvent();
		bool initializePlotter();

	  private:

		Initializer();

		static Initializer* _initializer;

		YAML::Node* _config;

	};

}

#endif

