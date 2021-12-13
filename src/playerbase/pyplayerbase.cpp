// File: unknown/unknown.cpp
#include <iostream> // --trace
#include <memory> // std::allocator
#include <sstream> // __str__
#include <string> // std::basic_string
#include <string> // std::char_traits
#include <vector> // std::vector

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "playerbase.hpp"
#include "IdealSensor.hpp"
#include "OSIReporter.hpp"
#include "ScenarioEngine.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"
#include "Server.hpp"
#include "viewer.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B0_[ScenarioPlayer] ";
	{ // ScenarioPlayer file: line:35
		pybind11::class_<ScenarioPlayer, std::shared_ptr<ScenarioPlayer>> cl(M(""), "ScenarioPlayer", "");


        cl.def( pybind11::init( [](std::vector<std::string> vstr){
            int argc = vstr.size() ;
            char * argv[ argc+1 ] ;
            char * mem;
            int counter = 0 ;
            for (std::string s : vstr) {
		    mem = (char*) malloc (s.size() * sizeof(char) +1 ); //2 as it is either A or B
		    std::cout << counter << ":" << s << '\n';
		    strcpy ( mem, s.c_str()) ;
		    argv[counter] = mem;
		    counter ++ ;
		    }
            argv[counter]  = NULL ;
            return new ScenarioPlayer(argc, argv);
            }
         ) );

        cl.def("GetODRManager",  &ScenarioPlayer::GetODRManager, pybind11::return_value_policy::reference);
        cl.def_readonly("scenarioEngine", &ScenarioPlayer::scenarioEngine);
        cl.def_readonly("scenarioGateway", &ScenarioPlayer::scenarioGateway);

		cl.def_readwrite("sensor", &ScenarioPlayer::sensor);
		cl.def_readonly("maxStepSize", &ScenarioPlayer::maxStepSize);
		cl.def_readonly("minStepSize", &ScenarioPlayer::minStepSize);
		cl.def_readwrite("opt", &ScenarioPlayer::opt);
		cl.def_readwrite("objCallback", &ScenarioPlayer::objCallback);
		cl.def_readwrite("exe_path_", &ScenarioPlayer::exe_path_);
		cl.def("IsQuitRequested", (bool (ScenarioPlayer::*)()) &ScenarioPlayer::IsQuitRequested, "C++: ScenarioPlayer::IsQuitRequested() --> bool");
		cl.def("SetOSIFileStatus", [](ScenarioPlayer &o, bool const & a0) -> void { return o.SetOSIFileStatus(a0); }, "", pybind11::arg("is_on"));
		cl.def("SetOSIFileStatus", (void (ScenarioPlayer::*)(bool, const char *)) &ScenarioPlayer::SetOSIFileStatus, "C++: ScenarioPlayer::SetOSIFileStatus(bool, const char *) --> void", pybind11::arg("is_on"), pybind11::arg("filename"));
		cl.def("Frame", (void (ScenarioPlayer::*)()) &ScenarioPlayer::Frame, "C++: ScenarioPlayer::Frame() --> void");
		cl.def("Frame", (void (ScenarioPlayer::*)(double)) &ScenarioPlayer::Frame, "C++: ScenarioPlayer::Frame(double) --> void", pybind11::arg("timestep_s"));
		cl.def("ScenarioFrame", (void (ScenarioPlayer::*)(double)) &ScenarioPlayer::ScenarioFrame, "C++: ScenarioPlayer::ScenarioFrame(double) --> void", pybind11::arg("timestep_s"));
		cl.def("ScenarioFramePart", (void (ScenarioPlayer::*)(double)) &ScenarioPlayer::ScenarioFramePart, "C++: ScenarioPlayer::ScenarioFramePart(double) --> void", pybind11::arg("timestep_s"));
		cl.def("ShowObjectSensors", (void (ScenarioPlayer::*)(bool)) &ScenarioPlayer::ShowObjectSensors, "C++: ScenarioPlayer::ShowObjectSensors(bool) --> void", pybind11::arg("mode"));
		cl.def("AddObjectSensor", (void (ScenarioPlayer::*)(int, double, double, double, double, double, double, double, int)) &ScenarioPlayer::AddObjectSensor, "C++: ScenarioPlayer::AddObjectSensor(int, double, double, double, double, double, double, double, int) --> void", pybind11::arg("object_index"), pybind11::arg("pos_x"), pybind11::arg("pos_y"), pybind11::arg("pos_z"), pybind11::arg("heading"), pybind11::arg("near"), pybind11::arg("far"), pybind11::arg("fovH"), pybind11::arg("maxObj"));
		cl.def("AddOSIDetection", (void (ScenarioPlayer::*)(int)) &ScenarioPlayer::AddOSIDetection, "C++: ScenarioPlayer::AddOSIDetection(int) --> void", pybind11::arg("object_index"));
		cl.def("SetFixedTimestep", (void (ScenarioPlayer::*)(double)) &ScenarioPlayer::SetFixedTimestep, "C++: ScenarioPlayer::SetFixedTimestep(double) --> void", pybind11::arg("timestep"));
		cl.def("GetFixedTimestep", (double (ScenarioPlayer::*)()) &ScenarioPlayer::GetFixedTimestep, "C++: ScenarioPlayer::GetFixedTimestep() --> double");
		cl.def("GetOSIFreq", (int (ScenarioPlayer::*)()) &ScenarioPlayer::GetOSIFreq, "C++: ScenarioPlayer::GetOSIFreq() --> int");
		cl.def("UpdateCSV_Log", (void (ScenarioPlayer::*)()) &ScenarioPlayer::UpdateCSV_Log, "C++: ScenarioPlayer::UpdateCSV_Log() --> void");
		cl.def("GetNumberOfParameters", (int (ScenarioPlayer::*)()) &ScenarioPlayer::GetNumberOfParameters, "C++: ScenarioPlayer::GetNumberOfParameters() --> int");
		cl.def("GetParameterName", (const char * (ScenarioPlayer::*)(int, enum scenarioengine::OSCParameterDeclarations::ParameterType *)) &ScenarioPlayer::GetParameterName, "C++: ScenarioPlayer::GetParameterName(int, enum scenarioengine::OSCParameterDeclarations::ParameterType *) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("index"), pybind11::arg("type"));
		cl.def("SetParameterValue", (int (ScenarioPlayer::*)(const char *, const void *)) &ScenarioPlayer::SetParameterValue, "C++: ScenarioPlayer::SetParameterValue(const char *, const void *) --> int", pybind11::arg("name"), pybind11::arg("value"));
		cl.def("GetParameterValue", (int (ScenarioPlayer::*)(const char *, void *)) &ScenarioPlayer::GetParameterValue, "C++: ScenarioPlayer::GetParameterValue(const char *, void *) --> int", pybind11::arg("name"), pybind11::arg("value"));
		cl.def("GetParameterValueInt", (int (ScenarioPlayer::*)(const char *, int &)) &ScenarioPlayer::GetParameterValueInt, "C++: ScenarioPlayer::GetParameterValueInt(const char *, int &) --> int", pybind11::arg("name"), pybind11::arg("value"));
		cl.def("GetParameterValueDouble", (int (ScenarioPlayer::*)(const char *, double &)) &ScenarioPlayer::GetParameterValueDouble, "C++: ScenarioPlayer::GetParameterValueDouble(const char *, double &) --> int", pybind11::arg("name"), pybind11::arg("value"));
		cl.def("GetParameterValueBool", (int (ScenarioPlayer::*)(const char *, bool &)) &ScenarioPlayer::GetParameterValueBool, "C++: ScenarioPlayer::GetParameterValueBool(const char *, bool &) --> int", pybind11::arg("name"), pybind11::arg("value"));
		cl.def("SetParameterValue", (int (ScenarioPlayer::*)(const char *, int)) &ScenarioPlayer::SetParameterValue, "C++: ScenarioPlayer::SetParameterValue(const char *, int) --> int", pybind11::arg("name"), pybind11::arg("value"));
		cl.def("SetParameterValue", (int (ScenarioPlayer::*)(const char *, double)) &ScenarioPlayer::SetParameterValue, "C++: ScenarioPlayer::SetParameterValue(const char *, double) --> int", pybind11::arg("name"), pybind11::arg("value"));
		cl.def("SetParameterValue", (int (ScenarioPlayer::*)(const char *, const char *)) &ScenarioPlayer::SetParameterValue, "C++: ScenarioPlayer::SetParameterValue(const char *, const char *) --> int", pybind11::arg("name"), pybind11::arg("value"));
		cl.def("SetParameterValue", (int (ScenarioPlayer::*)(const char *, bool)) &ScenarioPlayer::SetParameterValue, "C++: ScenarioPlayer::SetParameterValue(const char *, bool) --> int", pybind11::arg("name"), pybind11::arg("value"));
		cl.def("GetNumberOfProperties", (int (ScenarioPlayer::*)(int)) &ScenarioPlayer::GetNumberOfProperties, "C++: ScenarioPlayer::GetNumberOfProperties(int) --> int", pybind11::arg("index"));
		cl.def("GetPropertyName", (const char * (ScenarioPlayer::*)(int, int)) &ScenarioPlayer::GetPropertyName, "C++: ScenarioPlayer::GetPropertyName(int, int) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("index"), pybind11::arg("propertyIndex"));
		cl.def("GetPropertyValue", (const char * (ScenarioPlayer::*)(int, int)) &ScenarioPlayer::GetPropertyValue, "C++: ScenarioPlayer::GetPropertyValue(int, int) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("index"), pybind11::arg("propertyIndex"));
	}
}


#include <map>
#include <memory>
#include <stdexcept>
#include <functional>
#include <string>

#include <pybind11/pybind11.h>

typedef std::function< pybind11::module & (std::string const &) > ModuleGetter;

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M);


PYBIND11_MODULE(pyplayerbase, root_module) {
	root_module.doc() = "pyplayerbase module";

	std::map <std::string, pybind11::module> modules;
	ModuleGetter M = [&](std::string const &namespace_) -> pybind11::module & {
		auto it = modules.find(namespace_);
		if( it == modules.end() ) throw std::runtime_error("Attempt to access pybind11::module for namespace " + namespace_ + " before it was created!!!");
		return it->second;
	};

	modules[""] = root_module;

	std::vector< std::pair<std::string, std::string> > sub_modules {
	};
	for(auto &p : sub_modules ) modules[p.first.size() ? p.first+"::"+p.second : p.second] = modules[p.first].def_submodule(p.second.c_str(), ("Bindings for " + p.first + "::" + p.second + " namespace").c_str() );

	//pybind11::class_<std::shared_ptr<void>>(M(""), "_encapsulated_data_");

	bind_unknown_unknown(M);

}

// Source list file: /home/wave/repositories/python-esmini/src/playerbase/pyplayerbase.sources
// pyplayerbase.cpp
// unknown/unknown.cpp

// Modules list file: /home/wave/repositories/python-esmini/src/playerbase/pyplayerbase.modules
// 
