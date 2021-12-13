// File: unknown/unknown.cpp
#include <iostream> // --trace

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "esminiLib.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B0_[int SE_AddPath(const char *)] ";
	// SE_AddPath(const char *) file: line:153
	M("").def("SE_AddPath", (int (*)(const char *)) &SE_AddPath, "		Add a search path for OpenDRIVE and 3D model files\n		Needs to be called prior to SE_Init()\n		\n\n Path to a directory\n		\n\n 0 if successful, -1 if not\n\nC++: SE_AddPath(const char *) --> int", pybind11::arg("path"));

	std::cout << "B1_[void SE_ClearPaths()] ";
	// SE_ClearPaths() file: line:159
	M("").def("SE_ClearPaths", (void (*)()) &SE_ClearPaths, "		Clear all search paths for OpenDRIVE and 3D model files\n		Needs to be called prior to SE_Init()\n\nC++: SE_ClearPaths() --> void");

	std::cout << "B2_[void SE_SetLogFilePath(const char *)] ";
	// SE_SetLogFilePath(const char *) file: line:168
	M("").def("SE_SetLogFilePath", (void (*)(const char *)) &SE_SetLogFilePath, "		Specify logfile name, optionally including directory path\n		examples: \"../logfile.txt\" \"c:/tmp/esmini.log\" \"my.log\"\n		Set \"\" to disable logfile\n		Note: Needs to be called prior to calling SE_Init()\n		\n\n Logfile path\n\nC++: SE_SetLogFilePath(const char *) --> void", pybind11::arg("logFilePath"));

	std::cout << "B3_[unsigned int SE_GetSeed()] ";
	// SE_GetSeed() file: line:176
	M("").def("SE_GetSeed", (unsigned int (*)()) &SE_GetSeed, "	Get seed that esmini uses for current session. It can then be re-used\n	in order to achieve repeatable results (for actions that involes some\n	degree of randomness, e.g. TrafficSwarmAction).\n	\n\n seed number\n\nC++: SE_GetSeed() --> unsigned int");

	std::cout << "B4_[void SE_SetSeed(unsigned int)] ";
	// SE_SetSeed(unsigned int) file: line:185
	M("").def("SE_SetSeed", (void (*)(unsigned int)) &SE_SetSeed, "		Set seed that will be used by esmini random number generator.\n		Using same seed will ensure same result.\n		Note: Also timesteps has to be equal. Make sure to use SE_StepDT()\n		with fixed timestep, or at least same sequence of dt each run.\n		\n\n number\n\nC++: SE_SetSeed(unsigned int) --> void", pybind11::arg("seed"));

	std::cout << "B5_[int SE_SetOSITolerances(double, double)] ";
	// SE_SetOSITolerances(double, double) file: line:205
	M("").def("SE_SetOSITolerances", (int (*)(double, double)) &SE_SetOSITolerances, "		Configure tolerances/resolution for OSI road features\n		\n\n Maximum distance between OSI points, even on straight road. Default=50(m)\n		\n\n Control resolution w.r.t. curvature default=0.05(m)\n		\n\n 0 if successful, -1 if not\n\nC++: SE_SetOSITolerances(double, double) --> int", pybind11::arg("maxLongitudinalDistance"), pybind11::arg("maxLateralDeviation"));

	std::cout << "B6_[int SE_Init(const char *, int, int, int, int)] ";
	// SE_Init(const char *, int, int, int, int) file: line:216
	M("").def("SE_Init", (int (*)(const char *, int, int, int, int)) &SE_Init, "		Initialize the scenario engine\n		\n\n Path to the OpenSCENARIO file\n		\n\n 1=Any controller will be disabled 0=Controllers applied according to OSC file\n		\n\n 0=no viewer, 1=use viewer\n		\n\n 0=single thread, 1=viewer in a separate thread, parallel to scenario engine\n		\n\n Create recording for later playback 0=no recording 1=recording\n		\n\n 0 if successful, -1 if not\n\nC++: SE_Init(const char *, int, int, int, int) --> int", pybind11::arg("oscFilename"), pybind11::arg("disable_ctrls"), pybind11::arg("use_viewer"), pybind11::arg("threads"), pybind11::arg("record"));

	std::cout << "B7_[int SE_InitWithString(const char *, int, int, int, int)] ";
	// SE_InitWithString(const char *, int, int, int, int) file: line:227
	M("").def("SE_InitWithString", (int (*)(const char *, int, int, int, int)) &SE_InitWithString, "		Initialize the scenario engine\n		\n\n OpenSCENARIO XML as string\n		\n\n 1=Any controller will be disabled 0=Controllers applied according to OSC file\n		\n\n 0=no viewer, 1=use viewer\n		\n\n 0=single thread, 1=viewer in a separate thread, parallel to scenario engine\n		\n\n Create recording for later playback 0=no recording 1=recording\n		\n\n 0 if successful, -1 if not\n\nC++: SE_InitWithString(const char *, int, int, int, int) --> int", pybind11::arg("oscAsXMLString"), pybind11::arg("disable_ctrls"), pybind11::arg("use_viewer"), pybind11::arg("threads"), pybind11::arg("record"));

	std::cout << "B8_[int SE_StepDT(float)] ";
	// SE_StepDT(float) file: line:243
	M("").def("SE_StepDT", (int (*)(float)) &SE_StepDT, "		Step the simulation forward with specified timestep\n		\n\n time step in seconds\n		\n\n 0 if successful, -1 if not\n\nC++: SE_StepDT(float) --> int", pybind11::arg("dt"));

	std::cout << "B9_[int SE_Step()] ";
	// SE_Step() file: line:249
	M("").def("SE_Step", (int (*)()) &SE_Step, "		Step the simulation forward. Time step will be elapsed system (world) time since last step. Useful for interactive/realtime use cases.\n		\n\n 0 if successful, -1 if not\n\nC++: SE_Step() --> int");

	std::cout << "B10_[void SE_Close()] ";
	// SE_Close() file: line:254
	M("").def("SE_Close", (void (*)()) &SE_Close, "		Stop simulation gracefully. Two purposes: 1. Release memory and 2. Prepare for next simulation, e.g. reset object lists.\n\nC++: SE_Close() --> void");

	std::cout << "B11_[void SE_LogToConsole(bool)] ";
	// SE_LogToConsole(bool) file: line:260
	M("").def("SE_LogToConsole", (void (*)(bool)) &SE_LogToConsole, "		Enable or disable log to stdout/console\n		\n\n true=enable, false=disable\n\nC++: SE_LogToConsole(bool) --> void", pybind11::arg("mode"));

	std::cout << "B12_[float SE_GetSimulationTime()] ";
	// SE_GetSimulationTime() file: line:265
	M("").def("SE_GetSimulationTime", (float (*)()) &SE_GetSimulationTime, "		Get simulation time in seconds\n\nC++: SE_GetSimulationTime() --> float");

	std::cout << "B13_[float SE_GetSimTimeStep()] ";
	// SE_GetSimTimeStep() file: line:272
	M("").def("SE_GetSimTimeStep", (float (*)()) &SE_GetSimTimeStep, "		Get simulation time step in seconds\n		The time step is calculated as difference since last call to same funtion.\n		Clamped to some reasonable values. First call returns smallest delta (typically 1 ms).\n\nC++: SE_GetSimTimeStep() --> float");

	std::cout << "B14_[int SE_GetQuitFlag()] ";
	// SE_GetQuitFlag() file: line:278
	M("").def("SE_GetQuitFlag", (int (*)()) &SE_GetQuitFlag, "		Is esmini about to quit?\n		\n\n 0 if not, 1 if yes, -1 if some error e.g. scenario not loaded\n\nC++: SE_GetQuitFlag() --> int");

	std::cout << "B15_[const char * SE_GetODRFilename()] ";
	// SE_GetODRFilename() file: line:284
	M("").def("SE_GetODRFilename", (const char * (*)()) &SE_GetODRFilename, "		Get name of currently referred and loaded OpenDRIVE file\n		\n\n filename as string (const, since it's allocated and handled by esmini)\n\nC++: SE_GetODRFilename() --> const char *", pybind11::return_value_policy::automatic);

	std::cout << "B16_[const char * SE_GetSceneGraphFilename()] ";
	// SE_GetSceneGraphFilename() file: line:290
	M("").def("SE_GetSceneGraphFilename", (const char * (*)()) &SE_GetSceneGraphFilename, "		Get name of currently referred and loaded SceneGraph file\n		\n\n filename as string (const, since it's allocated and handled by esmini)\n\nC++: SE_GetSceneGraphFilename() --> const char *", pybind11::return_value_policy::automatic);

	std::cout << "B17_[int SE_GetNumberOfParameters()] ";
	// SE_GetNumberOfParameters() file: line:296
	M("").def("SE_GetNumberOfParameters", (int (*)()) &SE_GetNumberOfParameters, "		Get the number of named parameters within the current scenario\n		\n\n number of parameters\n\nC++: SE_GetNumberOfParameters() --> int");

	std::cout << "B18_[const char * SE_GetParameterName(int, int *)] ";
	// SE_GetParameterName(int, int *) file: line:304
	M("").def("SE_GetParameterName", (const char * (*)(int, int *)) &SE_GetParameterName, "		Get the name of a named parameter\n		\n\n The index of the parameter, range [0:numberOfParameters-1]\n		\n\n parameter type 0=int, 1=double, 2=string (const char*), 3=bool, see OSCParameterDeclarations/ParameterType\n		\n\n name if found, else 0\n\nC++: SE_GetParameterName(int, int *) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("index"), pybind11::arg("type"));

	std::cout << "B19_[int SE_GetNumberOfProperties(int)] ";
	// SE_GetNumberOfProperties(int) file: line:311
	M("").def("SE_GetNumberOfProperties", (int (*)(int)) &SE_GetNumberOfProperties, "		Get the number of vehicle properties by index\n		\n\n The index of the vehicle\n		\n\n number of parameters if found, -1 indicating some error\n\nC++: SE_GetNumberOfProperties(int) --> int", pybind11::arg("index"));

	std::cout << "B20_[const char * SE_GetObjectPropertyName(int, int)] ";
	// SE_GetObjectPropertyName(int, int) file: line:318
	M("").def("SE_GetObjectPropertyName", (const char * (*)(int, int)) &SE_GetObjectPropertyName, "		Get the number of vehicle properties by index\n		\n\n The index of the vehicle\n		\n\n The index of the property\n		\n\n the name of the property by index if found, else \"\"\n\nC++: SE_GetObjectPropertyName(int, int) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("index"), pybind11::arg("propertyIndex"));

	std::cout << "B21_[const char * SE_GetObjectPropertyValue(int, const char *)] ";
	// SE_GetObjectPropertyValue(int, const char *) file: line:325
	M("").def("SE_GetObjectPropertyValue", (const char * (*)(int, const char *)) &SE_GetObjectPropertyValue, "		Get the value of a vehicle property by name\n		\n\n The index of the vehicle\n		\n\n the vehicle property name\n		\n\n the value of a vehicle property by name if found, else \"\"\n\nC++: SE_GetObjectPropertyValue(int, const char *) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("index"), pybind11::arg("objectPropertyName"));

	std::cout << "B22_[int SE_GetParameterInt(const char *, int *)] ";
	// SE_GetParameterInt(const char *, int *) file: line:346
	M("").def("SE_GetParameterInt", (int (*)(const char *, int *)) &SE_GetParameterInt, "		Get typed value of named parameter\n		 Name of the parameter\n		\n\n 0 if successful, -1 if not (e.g. wrong type)\n\nC++: SE_GetParameterInt(const char *, int *) --> int", pybind11::arg("parameterName"), pybind11::arg("value"));

	std::cout << "B23_[int SE_GetParameterDouble(const char *, double *)] ";
	// SE_GetParameterDouble(const char *, double *) file: line:353
	M("").def("SE_GetParameterDouble", (int (*)(const char *, double *)) &SE_GetParameterDouble, "		Get typed value of named parameter\n		 Name of the parameter\n		\n\n 0 if successful, -1 if not (e.g. wrong type)\n\nC++: SE_GetParameterDouble(const char *, double *) --> int", pybind11::arg("parameterName"), pybind11::arg("value"));

	std::cout << "B24_[int SE_GetParameterBool(const char *, bool *)] ";
	// SE_GetParameterBool(const char *, bool *) file: line:367
	M("").def("SE_GetParameterBool", (int (*)(const char *, bool *)) &SE_GetParameterBool, "	Get typed value of named parameter\n	 Name of the parameter\n	\n\n 0 if successful, -1 if not (e.g. wrong type)\n\nC++: SE_GetParameterBool(const char *, bool *) --> int", pybind11::arg("parameterName"), pybind11::arg("value"));

	std::cout << "B25_[int SE_SetParameterInt(const char *, int)] ";
	// SE_SetParameterInt(const char *, int) file: line:375
	M("").def("SE_SetParameterInt", (int (*)(const char *, int)) &SE_SetParameterInt, "	Set typed value of named parameter\n	 Name of the parameter\n	 Value\n	\n\n 0 if successful, -1 if not\n\nC++: SE_SetParameterInt(const char *, int) --> int", pybind11::arg("parameterName"), pybind11::arg("value"));

	std::cout << "B26_[int SE_SetParameterDouble(const char *, double)] ";
	// SE_SetParameterDouble(const char *, double) file: line:383
	M("").def("SE_SetParameterDouble", (int (*)(const char *, double)) &SE_SetParameterDouble, "	Set typed value of named parameter\n	 Name of the parameter\n	 Value\n	\n\n 0 if successful, -1 if not\n\nC++: SE_SetParameterDouble(const char *, double) --> int", pybind11::arg("parameterName"), pybind11::arg("value"));

	std::cout << "B27_[int SE_SetParameterString(const char *, const char *)] ";
	// SE_SetParameterString(const char *, const char *) file: line:391
	M("").def("SE_SetParameterString", (int (*)(const char *, const char *)) &SE_SetParameterString, "	Set typed value of named parameter\n	 Name of the parameter\n	 Value\n	\n\n 0 if successful, -1 if not\n\nC++: SE_SetParameterString(const char *, const char *) --> int", pybind11::arg("parameterName"), pybind11::arg("value"));

	std::cout << "B28_[int SE_SetParameterBool(const char *, bool)] ";
	// SE_SetParameterBool(const char *, bool) file: line:399
	M("").def("SE_SetParameterBool", (int (*)(const char *, bool)) &SE_SetParameterBool, "	Set typed value of named parameter\n	 Name of the parameter\n	 Value\n	\n\n 0 if successful, -1 if not\n\nC++: SE_SetParameterBool(const char *, bool) --> int", pybind11::arg("parameterName"), pybind11::arg("value"));

	std::cout << "B29_[void * SE_GetODRManager()] ";
	// SE_GetODRManager() file: line:401
	M("").def("SE_GetODRManager", (void * (*)()) &SE_GetODRManager, "C++: SE_GetODRManager() --> void *", pybind11::return_value_policy::automatic);

	std::cout << "B30_[void RM_SetAlignMode(int, int)] ";
	// RM_SetAlignMode(int, int) file: line:412
	M("").def("RM_SetAlignMode", (void (*)(int, int)) &RM_SetAlignMode, "		Specify if and how position object will align to the road. This version\n		sets same mode for all components: Heading, Pitch, Roll and Z (elevation)\n		 Id of the object\n		\n\n as defined by roadmanager::Position::ALIGN_MODE:\n		0 = ALIGN_NONE // No alignment to road\n		1 = ALIGN_SOFT // Align to road but add relative orientation\n		2 = ALIGN_HARD // Completely align to road, disregard relative orientation\n\nC++: RM_SetAlignMode(int, int) --> void", pybind11::arg("id"), pybind11::arg("mode"));

	std::cout << "B31_[void RM_SetAlignModeH(int, int)] ";
	// RM_SetAlignModeH(int, int) file: line:423
	M("").def("RM_SetAlignModeH", (void (*)(int, int)) &RM_SetAlignModeH, "		Specify if and how position object will align to the road. This version\n		sets same mode for only heading component.\n		 Id of the object\n		\n\n as defined by roadmanager::Position::ALIGN_MODE:\n		0 = ALIGN_NONE // No alignment to road\n		1 = ALIGN_SOFT // Align to road but add relative orientation\n		2 = ALIGN_HARD // Completely align to road, disregard relative orientation\n\nC++: RM_SetAlignModeH(int, int) --> void", pybind11::arg("id"), pybind11::arg("mode"));

	std::cout << "B32_[void RM_SetAlignModeP(int, int)] ";
	// RM_SetAlignModeP(int, int) file: line:435
	M("").def("RM_SetAlignModeP", (void (*)(int, int)) &RM_SetAlignModeP, "		Specify if and how position object will align to the road. This version\n		sets same mode for only pitch component.\n		 Id of the object\n		\n\n as defined by roadmanager::Position::ALIGN_MODE:\n		0 = ALIGN_NONE // No alignment to road\n		1 = ALIGN_SOFT // Align to road but add relative orientation\n		2 = ALIGN_HARD // Completely align to road, disregard relative orientation\n\nC++: RM_SetAlignModeP(int, int) --> void", pybind11::arg("id"), pybind11::arg("mode"));

	std::cout << "B33_[void RM_SetAlignModeR(int, int)] ";
	// RM_SetAlignModeR(int, int) file: line:445
	M("").def("RM_SetAlignModeR", (void (*)(int, int)) &RM_SetAlignModeR, "		Specify if and how position object will align to the road. This version\n		sets same mode for only roll component.\n		 Id of the object\n		\n\n as defined by roadmanager::Position::ALIGN_MODE:\n		0 = ALIGN_NONE // No alignment to road\n		1 = ALIGN_SOFT // Align to road but add relative orientation\n		2 = ALIGN_HARD // Completely align to road, disregard relative orientation\n\nC++: RM_SetAlignModeR(int, int) --> void", pybind11::arg("id"), pybind11::arg("mode"));

	std::cout << "B34_[void RM_SetAlignModeZ(int, int)] ";
	// RM_SetAlignModeZ(int, int) file: line:456
	M("").def("RM_SetAlignModeZ", (void (*)(int, int)) &RM_SetAlignModeZ, "		Specify if and how position object will align to the road. This version\n		sets same mode for only Z (elevation) component.\n		 Id of the object\n		\n\n as defined by roadmanager::Position::ALIGN_MODE:\n		0 = ALIGN_NONE // No alignment to road\n		1 = ALIGN_SOFT // Align to road but add relative orientation\n		2 = ALIGN_HARD // Completely align to road, disregard relative orientation\n\nC++: RM_SetAlignModeZ(int, int) --> void", pybind11::arg("id"), pybind11::arg("mode"));

	std::cout << "B35_[int SE_ReportObjectPos(int, float, float, float, float, float, float, float, float)] ";
	// SE_ReportObjectPos(int, float, float, float, float, float, float, float, float) file: line:471
	M("").def("SE_ReportObjectPos", (int (*)(int, float, float, float, float, float, float, float, float)) &SE_ReportObjectPos, "		Report object position in cartesian coordinates\n		\n\n Id of the object\n		\n\n Timestamp (not really used yet, OK to set 0)\n		\n\n X coordinate\n		\n\n Y coordinate\n		\n\n Z coordinate\n		\n\n Heading / yaw\n		\n\n Pitch\n		\n\n Roll\n		\n\n Speed in forward direction of the enitity\n		\n\n 0 if successful, -1 if not\n\nC++: SE_ReportObjectPos(int, float, float, float, float, float, float, float, float) --> int", pybind11::arg("id"), pybind11::arg("timestamp"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("p"), pybind11::arg("r"), pybind11::arg("speed"));

}


// File: unknown/unknown_1.cpp
#include <iostream> // --trace

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "esminiLib.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B36_[int SE_ReportObjectPosXYH(int, float, float, float, float, float)] ";
	// SE_ReportObjectPosXYH(int, float, float, float, float, float) file: line:484
	M("").def("SE_ReportObjectPosXYH", (int (*)(int, float, float, float, float, float)) &SE_ReportObjectPosXYH, "		Report object position in limited set of cartesian coordinates x, y and heading,\n		the remaining z, pitch and roll will be aligned to the road surface\n		\n\n Id of the object\n		\n\n Timestamp (not really used yet, OK to set 0)\n		\n\n X coordinate\n		\n\n Y coordinate\n		\n\n Heading / yaw\n		\n\n Speed in forward direction of the enitity\n		\n\n 0 if successful, -1 if not\n\nC++: SE_ReportObjectPosXYH(int, float, float, float, float, float) --> int", pybind11::arg("id"), pybind11::arg("timestamp"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"), pybind11::arg("speed"));

	std::cout << "B37_[int SE_ReportObjectRoadPos(int, float, int, int, float, float, float)] ";
	// SE_ReportObjectRoadPos(int, float, int, int, float, float, float) file: line:497
	M("").def("SE_ReportObjectRoadPos", (int (*)(int, float, int, int, float, float, float)) &SE_ReportObjectRoadPos, "		Report object position in road coordinates\n		\n\n Id of the object\n		\n\n Timestamp (not really used yet, OK to set 0)\n		\n\n Id of the road\n		\n\n Id of the lane\n		\n\n Lateral offset from center of specified lane\n		\n\n Longitudinal distance of the position along the specified road\n		\n\n Speed in forward direction (s axis) of the enitity\n		\n\n 0 if successful, -1 if not\n\nC++: SE_ReportObjectRoadPos(int, float, int, int, float, float, float) --> int", pybind11::arg("id"), pybind11::arg("timestamp"), pybind11::arg("roadId"), pybind11::arg("laneId"), pybind11::arg("laneOffset"), pybind11::arg("s"), pybind11::arg("speed"));

	std::cout << "B38_[int SE_ReportObjectSpeed(int, float)] ";
	// SE_ReportObjectSpeed(int, float) file: line:505
	M("").def("SE_ReportObjectSpeed", (int (*)(int, float)) &SE_ReportObjectSpeed, "		Report object longitudinal speed. Useful for an external longitudinal controller.\n		\n\n Id of the object\n		\n\n Speed in forward direction of the enitity\n		\n\n 0 if successful, -1 if not\n\nC++: SE_ReportObjectSpeed(int, float) --> int", pybind11::arg("id"), pybind11::arg("speed"));

	std::cout << "B39_[int SE_ReportObjectLateralPosition(int, float)] ";
	// SE_ReportObjectLateralPosition(int, float) file: line:513
	M("").def("SE_ReportObjectLateralPosition", (int (*)(int, float)) &SE_ReportObjectLateralPosition, "		Report object lateral position relative road centerline. Useful for an external lateral controller.\n		\n\n Id of the object\n		\n\n Lateral position\n		\n\n 0 if successful, -1 if not\n\nC++: SE_ReportObjectLateralPosition(int, float) --> int", pybind11::arg("id"), pybind11::arg("t"));

	std::cout << "B40_[int SE_ReportObjectLateralLanePosition(int, int, float)] ";
	// SE_ReportObjectLateralLanePosition(int, int, float) file: line:522
	M("").def("SE_ReportObjectLateralLanePosition", (int (*)(int, int, float)) &SE_ReportObjectLateralLanePosition, "		Report object lateral position by lane id and lane offset. Useful for an external lateral controller.\n		\n\n Id of the object\n		\n\n Id of the lane\n		\n\n Lateral offset from center of specified lane\n		\n\n 0 if successful, -1 if not\n\nC++: SE_ReportObjectLateralLanePosition(int, int, float) --> int", pybind11::arg("id"), pybind11::arg("laneId"), pybind11::arg("laneOffset"));

	std::cout << "B41_[int SE_ReportObjectVel(int, float, float, float, float)] ";
	// SE_ReportObjectVel(int, float, float, float, float) file: line:534
	M("").def("SE_ReportObjectVel", (int (*)(int, float, float, float, float)) &SE_ReportObjectVel, "		Report object position in cartesian coordinates\n		\n\n Id of the object\n		\n\n Timestamp (not really used yet, OK to set 0)\n		\n\n X component of linear velocity\n		\n\n Y component of linear velocity\n		\n\n Z component of linear velocity\n		\n\n 0 if successful, -1 if not\n\n	\n\nC++: SE_ReportObjectVel(int, float, float, float, float) --> int", pybind11::arg("id"), pybind11::arg("timestamp"), pybind11::arg("x_vel"), pybind11::arg("y_vel"), pybind11::arg("z_vel"));

	std::cout << "B42_[int SE_ReportObjectAngularVel(int, float, float, float, float)] ";
	// SE_ReportObjectAngularVel(int, float, float, float, float) file: line:545
	M("").def("SE_ReportObjectAngularVel", (int (*)(int, float, float, float, float)) &SE_ReportObjectAngularVel, "		Report object position in cartesian coordinates\n		\n\n Id of the object\n		\n\n Timestamp (not really used yet, OK to set 0)\n		\n\n Heading component of angular velocity\n		\n\n Pitch component of angular velocity\n		\n\n Roll component of angular velocity\n		\n\n 0 if successful, -1 if not\n\nC++: SE_ReportObjectAngularVel(int, float, float, float, float) --> int", pybind11::arg("id"), pybind11::arg("timestamp"), pybind11::arg("h_rate"), pybind11::arg("p_rate"), pybind11::arg("r_rate"));

	std::cout << "B43_[int SE_ReportObjectAcc(int, float, float, float, float)] ";
	// SE_ReportObjectAcc(int, float, float, float, float) file: line:556
	M("").def("SE_ReportObjectAcc", (int (*)(int, float, float, float, float)) &SE_ReportObjectAcc, "		Report object position in cartesian coordinates\n		\n\n Id of the object\n		\n\n Timestamp (not really used yet, OK to set 0)\n		\n\n X component of linear acceleration\n		\n\n Y component of linear acceleration\n		\n\n Z component of linear acceleration\n		\n\n 0 if successful, -1 if not\n\nC++: SE_ReportObjectAcc(int, float, float, float, float) --> int", pybind11::arg("id"), pybind11::arg("timestamp"), pybind11::arg("x_acc"), pybind11::arg("y_acc"), pybind11::arg("z_acc"));

	std::cout << "B44_[int SE_ReportObjectAngularAcc(int, float, float, float, float)] ";
	// SE_ReportObjectAngularAcc(int, float, float, float, float) file: line:567
	M("").def("SE_ReportObjectAngularAcc", (int (*)(int, float, float, float, float)) &SE_ReportObjectAngularAcc, "		Report object position in cartesian coordinates\n		\n\n Id of the object\n		\n\n Timestamp (not really used yet, OK to set 0)\n		\n\n Heading component of angular acceleration\n		\n\n Pitch component of angular acceleration\n		\n\n Roll component of angular acceleration\n		\n\n 0 if successful, -1 if not\n\nC++: SE_ReportObjectAngularAcc(int, float, float, float, float) --> int", pybind11::arg("id"), pybind11::arg("timestamp"), pybind11::arg("h_acc"), pybind11::arg("p_acc"), pybind11::arg("r_acc"));

	std::cout << "B45_[int SE_SetLockOnLane(int, bool)] ";
	// SE_SetLockOnLane(int, bool) file: line:574
	M("").def("SE_SetLockOnLane", (int (*)(int, bool)) &SE_SetLockOnLane, "		Controls whether to keep lane ID regardless of lateral position or snap to closest lane (default)\n		 mode True=keep lane False=Snap to closest (default)\n		\n\n 0 if successful, -1 if not\n\nC++: SE_SetLockOnLane(int, bool) --> int", pybind11::arg("id"), pybind11::arg("mode"));

	std::cout << "B46_[int SE_GetNumberOfObjects()] ";
	// SE_GetNumberOfObjects() file: line:580
	M("").def("SE_GetNumberOfObjects", (int (*)()) &SE_GetNumberOfObjects, "		Get the number of entities in the current scenario\n		\n\n Number of entities, -1 on error e.g. scenario not initialized\n\nC++: SE_GetNumberOfObjects() --> int");

	std::cout << "B47_[const char * SE_GetObjectTypeName(int)] ";
	// SE_GetObjectTypeName(int) file: line:603
	M("").def("SE_GetObjectTypeName", (const char * (*)(int)) &SE_GetObjectTypeName, "		Get the type name of the specifed vehicle-, pedestrian- or misc object\n		\n\n Index of the object. Note: not ID\n		\n\n Name\n\nC++: SE_GetObjectTypeName(int) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("index"));

	std::cout << "B48_[const char * SE_GetObjectName(int)] ";
	// SE_GetObjectName(int) file: line:610
	M("").def("SE_GetObjectName", (const char * (*)(int)) &SE_GetObjectName, "		Get the name of specified object\n		\n\n Index of the object. Note: not ID\n		\n\n Name\n\nC++: SE_GetObjectName(int) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("index"));

	std::cout << "B49_[const char * SE_GetObjectModelFileName(int)] ";
	// SE_GetObjectModelFileName(int) file: line:617
	M("").def("SE_GetObjectModelFileName", (const char * (*)(int)) &SE_GetObjectModelFileName, "		Get the 3D model filename of the specifed object\n		\n\n Index of the object. Note: not ID\n		\n\n Name\n\nC++: SE_GetObjectModelFileName(int) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("index"));

	std::cout << "B50_[int SE_ObjectHasGhost(int)] ";
	// SE_ObjectHasGhost(int) file: line:624
	M("").def("SE_ObjectHasGhost", (int (*)(int)) &SE_ObjectHasGhost, "		Check whether an object has a ghost (special purpose lead vehicle)\n		\n\n Index of the object. Note: not ID\n		\n\n 1 if ghost, 0 if not, -1 indicates error e.g. scenario not loaded\n\nC++: SE_ObjectHasGhost(int) --> int", pybind11::arg("index"));

	std::cout << "B51_[int SE_AddObjectSensor(int, float, float, float, float, float, float, float, int)] ";
	// SE_AddObjectSensor(int, float, float, float, float, float, float, float, int) file: line:668
	M("").def("SE_AddObjectSensor", (int (*)(int, float, float, float, float, float, float, float, int)) &SE_AddObjectSensor, "		Create an ideal object sensor and attach to specified vehicle\n		\n\n Handle to the object to which the sensor should be attached\n		\n\n Position x coordinate of the sensor in vehicle local coordinates\n		\n\n Position y coordinate of the sensor in vehicle local coordinates\n		\n\n Position z coordinate of the sensor in vehicle local coordinates\n		\n\n heading of the sensor in vehicle local coordinates\n		\n\n Horizontal field of view, in degrees\n		\n\n Near value of the sensor depth range\n		\n\n Far value of the sensor depth range\n		\n\n Maximum number of objects theat the sensor can track\n		\n\n Sensor ID (Global index of sensor), -1 if unsucessful\n\nC++: SE_AddObjectSensor(int, float, float, float, float, float, float, float, int) --> int", pybind11::arg("object_id"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("rangeNear"), pybind11::arg("rangeFar"), pybind11::arg("fovH"), pybind11::arg("maxObj"));

	std::cout << "B52_[int SE_ViewSensorData(int)] ";
	// SE_ViewSensorData(int) file: line:675
	M("").def("SE_ViewSensorData", (int (*)(int)) &SE_ViewSensorData, "		Allow to view detected sensor data.\n		\n\n Handle to the object to which the sensor should be attached\n		\n\n Sensor ID (Global index of sensor), -1 if unsucessful\n\nC++: SE_ViewSensorData(int) --> int", pybind11::arg("object_id"));

	std::cout << "B53_[int SE_FetchSensorObjectList(int, int *)] ";
	// SE_FetchSensorObjectList(int, int *) file: line:683
	M("").def("SE_FetchSensorObjectList", (int (*)(int, int *)) &SE_FetchSensorObjectList, "		Fetch list of identified objects from a sensor\n		\n\n Handle (index) to the sensor\n		\n\n Array of object indices\n		\n\n Number of identified objects, i.e. length of list. -1 if unsuccesful.\n\nC++: SE_FetchSensorObjectList(int, int *) --> int", pybind11::arg("sensor_id"), pybind11::arg("list"));

	std::cout << "B54_[int SE_GetNumberOfRoadSigns(int)] ";
	// SE_GetNumberOfRoadSigns(int) file: line:701
	M("").def("SE_GetNumberOfRoadSigns", (int (*)(int)) &SE_GetNumberOfRoadSigns, "		Get the number of road signs along specified road\n		\n\n The road along which to look for signs\n		\n\n Number of road signs\n\nC++: SE_GetNumberOfRoadSigns(int) --> int", pybind11::arg("road_id"));

	std::cout << "B55_[int SE_GetNumberOfRoadSignValidityRecords(int, int)] ";
	// SE_GetNumberOfRoadSignValidityRecords(int, int) file: line:718
	M("").def("SE_GetNumberOfRoadSignValidityRecords", (int (*)(int, int)) &SE_GetNumberOfRoadSignValidityRecords, "		Get the number of lane validity records of specified road object/sign\n		\n\n The road of which to look for the sign\n		\n\n Index of the sign. Note: not ID\n		\n\n Number of validity records of specified road sign\n\nC++: SE_GetNumberOfRoadSignValidityRecords(int, int) --> int", pybind11::arg("road_id"), pybind11::arg("index"));

	std::cout << "B56_[int SE_OpenOSISocket(const char *)] ";
	// SE_OpenOSISocket(const char *) file: line:736
	M("").def("SE_OpenOSISocket", (int (*)(const char *)) &SE_OpenOSISocket, "		Send OSI packages over UDP to specified IP address\n\nC++: SE_OpenOSISocket(const char *) --> int", pybind11::arg("ipaddr"));

	std::cout << "B57_[void SE_DisableOSIFile()] ";
	// SE_DisableOSIFile() file: line:742
	M("").def("SE_DisableOSIFile", (void (*)()) &SE_DisableOSIFile, "		Switch off logging to OSI file(s)\n		\n\n 0 if successful, -1 if not\n\nC++: SE_DisableOSIFile() --> void");

	std::cout << "B58_[void SE_EnableOSIFile(const char *)] ";
	// SE_EnableOSIFile(const char *) file: line:748
	M("").def("SE_EnableOSIFile", (void (*)(const char *)) &SE_EnableOSIFile, "		Switch on logging to OSI file(s)\n		\n\n Optional filename, including path. Set to 0 or \"\" to use default.\n\nC++: SE_EnableOSIFile(const char *) --> void", pybind11::arg("filename"));

	std::cout << "B59_[int SE_ClearOSIGroundTruth()] ";
	// SE_ClearOSIGroundTruth() file: line:755
	M("").def("SE_ClearOSIGroundTruth", (int (*)()) &SE_ClearOSIGroundTruth, "		The SE_ClearOSIGroundTruth clears the certain groundtruth data\n		This function should only be used together with SE_UpdateOSIStaticGroundTruth and SE_UpdateOSIDynamicGroundTruth\n		\n\n 0\n\nC++: SE_ClearOSIGroundTruth() --> int");

	std::cout << "B60_[int SE_UpdateOSIGroundTruth()] ";
	// SE_UpdateOSIGroundTruth() file: line:761
	M("").def("SE_UpdateOSIGroundTruth", (int (*)()) &SE_UpdateOSIGroundTruth, "		The SE_UpdateOSIGroundTruth function calls SE_UpdateOSIStaticGroundTruth and SE_UpdateOSIDynamicGroundTruth and updates OSI Groundtruth\n		\n\n 0\n\nC++: SE_UpdateOSIGroundTruth() --> int");

	std::cout << "B61_[int SE_UpdateOSIStaticGroundTruth()] ";
	// SE_UpdateOSIStaticGroundTruth() file: line:767
	M("").def("SE_UpdateOSIStaticGroundTruth", (int (*)()) &SE_UpdateOSIStaticGroundTruth, "		The SE_UpdateOSIStaticGroundTruth function updates OSI static Groundtruth\n		\n\n 0\n\nC++: SE_UpdateOSIStaticGroundTruth() --> int");

	std::cout << "B62_[int SE_UpdateOSIDynamicGroundTruth(bool)] ";
	// SE_UpdateOSIDynamicGroundTruth(bool) file: line:774
	M("").def("SE_UpdateOSIDynamicGroundTruth", []() -> int { return SE_UpdateOSIDynamicGroundTruth(); }, "");
	M("").def("SE_UpdateOSIDynamicGroundTruth", (int (*)(bool)) &SE_UpdateOSIDynamicGroundTruth, "		The SE_UpdateOSIDynamicGroundTruth function updates OSI dynamic Groundtruth\n		\n\n Optional flag, if we should include ghost vehicle info in the osi messages\n		\n\n 0\n\nC++: SE_UpdateOSIDynamicGroundTruth(bool) --> int", pybind11::arg("reportGhost"));

	std::cout << "B63_[const char * SE_GetOSIGroundTruth(int *)] ";
	// SE_GetOSIGroundTruth(int *) file: line:780
	M("").def("SE_GetOSIGroundTruth", (const char * (*)(int *)) &SE_GetOSIGroundTruth, "		The SE_GetOSIGroundTruth function returns a char array containing the osi GroundTruth serialized to a string\n		\n\n osi3::GroundTruth*\n\nC++: SE_GetOSIGroundTruth(int *) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("size"));

	std::cout << "B64_[const char * SE_GetOSIGroundTruthRaw()] ";
	// SE_GetOSIGroundTruthRaw() file: line:786
	M("").def("SE_GetOSIGroundTruthRaw", (const char * (*)()) &SE_GetOSIGroundTruthRaw, "		The SE_GetOSIGroundTruthRaw function returns a char array containing the OSI GroundTruth information\n		\n\n osi3::GroundTruth*\n\nC++: SE_GetOSIGroundTruthRaw() --> const char *", pybind11::return_value_policy::automatic);

	std::cout << "B65_[int SE_SetOSISensorDataRaw(const char *)] ";
	// SE_SetOSISensorDataRaw(const char *) file: line:792
	M("").def("SE_SetOSISensorDataRaw", (int (*)(const char *)) &SE_SetOSISensorDataRaw, "		The SE_SetOSISensorDataRaw function returns a char array containing the OSI GroundTruth information\n		\n\n 0\n\nC++: SE_SetOSISensorDataRaw(const char *) --> int", pybind11::arg("sensordata"));

	std::cout << "B66_[const char * SE_GetOSISensorDataRaw()] ";
	// SE_GetOSISensorDataRaw() file: line:798
	M("").def("SE_GetOSISensorDataRaw", (const char * (*)()) &SE_GetOSISensorDataRaw, "		The SE_GetOSISensorDataRaw function returns a char array containing the OSI SensorData information\n		\n\n osi3::SensorData*\n\nC++: SE_GetOSISensorDataRaw() --> const char *", pybind11::return_value_policy::automatic);

}


// File: unknown/unknown_2.cpp
#include <iostream> // --trace

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "esminiLib.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown_2(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B67_[const char * SE_GetOSIRoadLane(int *, int)] ";
	// SE_GetOSIRoadLane(int *, int) file: line:803
	M("").def("SE_GetOSIRoadLane", (const char * (*)(int *, int)) &SE_GetOSIRoadLane, "		The SE_GetOSIRoadLane function returns a char array containing the osi Lane information/message of the lane where the object with object_id is, serialized to a string\n\nC++: SE_GetOSIRoadLane(int *, int) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("size"), pybind11::arg("object_id"));

	std::cout << "B68_[const char * SE_GetOSILaneBoundary(int *, int)] ";
	// SE_GetOSILaneBoundary(int *, int) file: line:808
	M("").def("SE_GetOSILaneBoundary", (const char * (*)(int *, int)) &SE_GetOSILaneBoundary, "		The SE_GetOSIRoadLane function returns a char array containing the osi Lane Boundary information/message with the specified GLOBAL id\n\nC++: SE_GetOSILaneBoundary(int *, int) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("size"), pybind11::arg("global_id"));

	std::cout << "B69_[bool SE_OSIFileOpen(const char *)] ";
	// SE_OSIFileOpen(const char *) file: line:826
	M("").def("SE_OSIFileOpen", (bool (*)(const char *)) &SE_OSIFileOpen, "		Create and open osi file\n\nC++: SE_OSIFileOpen(const char *) --> bool", pybind11::arg("filename"));

	std::cout << "B70_[bool SE_OSIFileWrite(bool)] ";
	// SE_OSIFileWrite(bool) file: line:831
	M("").def("SE_OSIFileWrite", []() -> bool { return SE_OSIFileWrite(); }, "");
	M("").def("SE_OSIFileWrite", (bool (*)(bool)) &SE_OSIFileWrite, "		Create and open osi file\n\nC++: SE_OSIFileWrite(bool) --> bool", pybind11::arg("flush"));

	std::cout << "B71_[int SE_OSISetTimeStamp(unsigned long long)] ";
	// SE_OSISetTimeStamp(unsigned long long) file: line:841
	M("").def("SE_OSISetTimeStamp", (int (*)(unsigned long long)) &SE_OSISetTimeStamp, "		Set explicit OSI timestap\n		Note that this timestamp does NOT affect esmini simulation time\n		Also note that setting timestamp with this function will move into explicit time mode\n		and from that point OSI timestamp is exclusively controlled by this function.\n		\n\n Nano seconds (1e-9 s)\n		\n\n 0 if successful, -1 if not\n\nC++: SE_OSISetTimeStamp(unsigned long long) --> int", pybind11::arg("nanoseconds"));

	std::cout << "B72_[void SE_LogMessage(const char *)] ";
	// SE_LogMessage(const char *) file: line:844
	M("").def("SE_LogMessage", (void (*)(const char *)) &SE_LogMessage, "C++: SE_LogMessage(const char *) --> void", pybind11::arg("message"));

	std::cout << "B73_[void SE_ViewerShowFeature(int, bool)] ";
	// SE_ViewerShowFeature(int, bool) file: line:852
	M("").def("SE_ViewerShowFeature", (void (*)(int, bool)) &SE_ViewerShowFeature, "		Switch on/off visualization of specified features\n		\n\n Type of the features, see viewer::NodeMask typedef\n		\n\n Set true to show features, false to hide\n\nC++: SE_ViewerShowFeature(int, bool) --> void", pybind11::arg("featureType"), pybind11::arg("enable"));

	std::cout << "B74_[void * SE_SimpleVehicleCreate(float, float, float, float, float)] ";
	// SE_SimpleVehicleCreate(float, float, float, float, float) file: line:864
	M("").def("SE_SimpleVehicleCreate", (void * (*)(float, float, float, float, float)) &SE_SimpleVehicleCreate, "		Create an instance of a simplistic vehicle based on a 2D bicycle kincematic model\n		\n\n Initial position X world coordinate\n		\n\n Initial position Y world coordinate\n		\n\n Initial heading\n		\n\n Length of the vehicle\n		\n\n Initial speed\n		\n\n Handle to the created object\n\nC++: SE_SimpleVehicleCreate(float, float, float, float, float) --> void *", pybind11::return_value_policy::automatic, pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"), pybind11::arg("length"), pybind11::arg("speed"));

	std::cout << "B75_[void SE_SimpleVehicleDelete(void *)] ";
	// SE_SimpleVehicleDelete(void *) file: line:869
	M("").def("SE_SimpleVehicleDelete", (void (*)(void *)) &SE_SimpleVehicleDelete, "		Delete an instance of the simplistic vehicle model\n\nC++: SE_SimpleVehicleDelete(void *) --> void", pybind11::arg("handleSimpleVehicle"));

	std::cout << "B76_[void SE_SimpleVehicleControlBinary(void *, double, int, int)] ";
	// SE_SimpleVehicleControlBinary(void *, double, int, int) file: line:878
	M("").def("SE_SimpleVehicleControlBinary", (void (*)(void *, double, int, int)) &SE_SimpleVehicleControlBinary, "		Control the speed and steering with discreet [-1, 0, 1] values, suitable for keyboard control (e.g. up/none/down).\n		The function also steps the vehicle model, updating its position according to motion state and timestep.\n		\n\n timesStep (s)\n		\n\n Longitudinal control, -1: brake, 0: none, +1: accelerate\n		\n\n Lateral control, -1: left, 0: straight, 1: right\n\nC++: SE_SimpleVehicleControlBinary(void *, double, int, int) --> void", pybind11::arg("handleSimpleVehicle"), pybind11::arg("dt"), pybind11::arg("throttle"), pybind11::arg("steering"));

	std::cout << "B77_[void SE_SimpleVehicleControlAnalog(void *, double, double, double)] ";
	// SE_SimpleVehicleControlAnalog(void *, double, double, double) file: line:887
	M("").def("SE_SimpleVehicleControlAnalog", (void (*)(void *, double, double, double)) &SE_SimpleVehicleControlAnalog, "		Control the speed and steering with floating values in the range [-1, 1], suitable for driver models.\n		The function also steps the vehicle model, updating its position according to motion state and timestep.\n		\n\n timesStep (s)\n		\n\n Longitudinal control, -1: maximum brake, 0: no acceleration, +1: maximum acceleration\n		\n\n Lateral control, -1: max left, 0: straight, 1: max right\n\nC++: SE_SimpleVehicleControlAnalog(void *, double, double, double) --> void", pybind11::arg("handleSimpleVehicle"), pybind11::arg("dt"), pybind11::arg("throttle"), pybind11::arg("steering"));

	std::cout << "B78_[void SE_SimpleVehicleControlTarget(void *, double, double, double)] ";
	// SE_SimpleVehicleControlTarget(void *, double, double, double) file: line:896
	M("").def("SE_SimpleVehicleControlTarget", (void (*)(void *, double, double, double)) &SE_SimpleVehicleControlTarget, "		Control the speed and steering by providing steering and speed targets\n		The function also steps the vehicle model, updating its position according to motion state and timestep.\n		\n\n timesStep (s)\n		\n\n Requested speed\n		\n\n Heading angle to a target position\n\nC++: SE_SimpleVehicleControlTarget(void *, double, double, double) --> void", pybind11::arg("handleSimpleVehicle"), pybind11::arg("dt"), pybind11::arg("target_speed"), pybind11::arg("heading_to_target"));

	std::cout << "B79_[void SE_SimpleVehicleSetMaxSpeed(void *, float)] ";
	// SE_SimpleVehicleSetMaxSpeed(void *, float) file: line:902
	M("").def("SE_SimpleVehicleSetMaxSpeed", (void (*)(void *, float)) &SE_SimpleVehicleSetMaxSpeed, "		Set maximum vehicle speed.\n		\n\n Maximum speed (km/h)\n\nC++: SE_SimpleVehicleSetMaxSpeed(void *, float) --> void", pybind11::arg("handleSimpleVehicle"), pybind11::arg("speed"));

	std::cout << "B80_[void SE_SimpleVehicleSetMaxAcceleration(void *, float)] ";
	// SE_SimpleVehicleSetMaxAcceleration(void *, float) file: line:908
	M("").def("SE_SimpleVehicleSetMaxAcceleration", (void (*)(void *, float)) &SE_SimpleVehicleSetMaxAcceleration, "		Set maximum vehicle acceleration.\n		\n\n Maximum acceleration (m/s^2)\n\nC++: SE_SimpleVehicleSetMaxAcceleration(void *, float) --> void", pybind11::arg("handleSimpleVehicle"), pybind11::arg("maxAcceleration"));

	std::cout << "B81_[void SE_SimpleVehicleSetEngineBrakeFactor(void *, float)] ";
	// SE_SimpleVehicleSetEngineBrakeFactor(void *, float) file: line:914
	M("").def("SE_SimpleVehicleSetEngineBrakeFactor", (void (*)(void *, float)) &SE_SimpleVehicleSetEngineBrakeFactor, "		Set engine brake factor, applied when no throttle is applied\n		\n\n recommended range = [0.0, 0.01], default = 0.001\n\nC++: SE_SimpleVehicleSetEngineBrakeFactor(void *, float) --> void", pybind11::arg("handleSimpleVehicle"), pybind11::arg("engineBrakeFactor"));

	std::cout << "B82_[void SE_SimpleVehicleSteeringScale(void *, float)] ";
	// SE_SimpleVehicleSteeringScale(void *, float) file: line:920
	M("").def("SE_SimpleVehicleSteeringScale", (void (*)(void *, float)) &SE_SimpleVehicleSteeringScale, "		Set steering scale factor, which will limit the steering range as speed increases\n		\n\n recommended range = [0.0, 0.1], default = 0.018\n\nC++: SE_SimpleVehicleSteeringScale(void *, float) --> void", pybind11::arg("handleSimpleVehicle"), pybind11::arg("steeringScale"));

	std::cout << "B83_[void SE_SimpleVehicleSteeringReturnFactor(void *, float)] ";
	// SE_SimpleVehicleSteeringReturnFactor(void *, float) file: line:926
	M("").def("SE_SimpleVehicleSteeringReturnFactor", (void (*)(void *, float)) &SE_SimpleVehicleSteeringReturnFactor, "		Set steering return factor, which will make the steering wheel strive to neutral position (0 angle)\n		\n\n recommended range = [0.0, 10], default = 4.0\n\nC++: SE_SimpleVehicleSteeringReturnFactor(void *, float) --> void", pybind11::arg("handleSimpleVehicle"), pybind11::arg("steeringReturnFactor"));

	std::cout << "B84_[void SE_SimpleVehicleSteeringRate(void *, float)] ";
	// SE_SimpleVehicleSteeringRate(void *, float) file: line:932
	M("").def("SE_SimpleVehicleSteeringRate", (void (*)(void *, float)) &SE_SimpleVehicleSteeringRate, "		Set steering rate, which will affect the angular speed of which the steering wheel will turn\n		\n\n recommended range = [0.0, 50.0], default = 8.0\n\nC++: SE_SimpleVehicleSteeringRate(void *, float) --> void", pybind11::arg("handleSimpleVehicle"), pybind11::arg("steeringRate"));

	std::cout << "B85_[int SE_CaptureNextFrame()] ";
	// SE_CaptureNextFrame() file: line:950
	M("").def("SE_CaptureNextFrame", (int (*)()) &SE_CaptureNextFrame, "		Capture screen of next frame and save as jpeg file\n		\n\n 0 if successful, -1 if not\n\nC++: SE_CaptureNextFrame() --> int");

	std::cout << "B86_[int SE_CaptureContinuously(bool)] ";
	// SE_CaptureContinuously(bool) file: line:957
	M("").def("SE_CaptureContinuously", (int (*)(bool)) &SE_CaptureContinuously, "		Activate or deactivate continuous screen capture\n		\n\n true=activate, false=deactivate\n		\n\n 0 if successful, -1 if not\n\nC++: SE_CaptureContinuously(bool) --> int", pybind11::arg("state"));

	std::cout << "B87_[int SE_AddCustomCamera(double, double, double, double, double)] ";
	// SE_AddCustomCamera(double, double, double, double, double) file: line:968
	M("").def("SE_AddCustomCamera", (int (*)(double, double, double, double, double)) &SE_AddCustomCamera, "	Add a camera mode with custom position and orientation (heading and pitch)\n	\n\n X coordinate relative vehicle curerntly in focus\n	\n\n Y coordinate relative vehicle curerntly in focus\n	\n\n Z coordinate relative vehicle curerntly in focus\n	\n\n H Heading (yaw) relative vehicle curerntly in focus\n	\n\n P Pitch relative vehicle curerntly in focus\n	\n\n 0 if successful, -1 if not\n\nC++: SE_AddCustomCamera(double, double, double, double, double) --> int", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("p"));

}


#include <map>
#include <memory>
#include <stdexcept>
#include <functional>
#include <string>

#include <pybind11/pybind11.h>

typedef std::function< pybind11::module & (std::string const &) > ModuleGetter;

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_2(std::function< pybind11::module &(std::string const &namespace_) > &M);


PYBIND11_MODULE(pyesminilib, root_module) {
	root_module.doc() = "pyesminilib module";

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
	bind_unknown_unknown_1(M);
	bind_unknown_unknown_2(M);

}

// Source list file: /home/wave/repositories/python-esmini/src/esminilib/pyesminilib.sources
// pyesminilib.cpp
// unknown/unknown.cpp
// unknown/unknown_1.cpp
// unknown/unknown_2.cpp

// Modules list file: /home/wave/repositories/python-esmini/src/esminilib/pyesminilib.modules
// 
