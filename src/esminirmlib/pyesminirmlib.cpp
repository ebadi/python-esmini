// File: unknown/unknown.cpp
#include <iostream> // --trace

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "esminiRMLib.hpp"
#include "CommonMini.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B0_[int RM_Init(const char *)] ";
	// RM_Init(const char *) file: line:121
	M("").def("RM_Init", (int (*)(const char *)) &RM_Init, "C++: RM_Init(const char *) --> int", pybind11::arg("odrFilename"));

	std::cout << "B1_[int RM_Close()] ";
	// RM_Close() file: line:123
	M("").def("RM_Close", (int (*)()) &RM_Close, "C++: RM_Close() --> int");

	std::cout << "B2_[void RM_SetLogFilePath(const char *)] ";
	// RM_SetLogFilePath(const char *) file: line:132
	M("").def("RM_SetLogFilePath", (void (*)(const char *)) &RM_SetLogFilePath, "	Specify logfile name, optionally including directory path\n	examples: \"../logfile.txt\" \"c:/tmp/esmini.log\" \"my.log\"\n	Set \"\" to disable logfile\n	Note: Needs to be called prior to calling RM_Init()\n	\n\n Logfile path\n\nC++: RM_SetLogFilePath(const char *) --> void", pybind11::arg("logFilePath"));

	std::cout << "B3_[int RM_CreatePosition()] ";
	// RM_CreatePosition() file: line:138
	M("").def("RM_CreatePosition", (int (*)()) &RM_CreatePosition, "	Create a position object\n	\n\n Handle >= 0 to the position object to use for operations or -1 on error\n\nC++: RM_CreatePosition() --> int");

	std::cout << "B4_[int RM_GetNrOfPositions()] ";
	// RM_GetNrOfPositions() file: line:144
	M("").def("RM_GetNrOfPositions", (int (*)()) &RM_GetNrOfPositions, "	Get the number of created position objects\n	\n\n Number of created position objects or -1 on error\n\nC++: RM_GetNrOfPositions() --> int");

	std::cout << "B5_[int RM_DeletePosition(int)] ";
	// RM_DeletePosition(int) file: line:151
	M("").def("RM_DeletePosition", (int (*)(int)) &RM_DeletePosition, "	Delete one or all position object(s)\n	\n\n Handle to the position object. Set -1 to delete all.\n	\n\n 0 if succesful, -1 if specified position(s) could not be deleted\n\nC++: RM_DeletePosition(int) --> int", pybind11::arg("handle"));

	std::cout << "B6_[int RM_CopyPosition(int)] ";
	// RM_CopyPosition(int) file: line:158
	M("").def("RM_CopyPosition", (int (*)(int)) &RM_CopyPosition, "	Copy a position object\n	\n\n Handle to the original position object.\n	\n\n handle to new position object. -1 if unsuccessful.\n\nC++: RM_CopyPosition(int) --> int", pybind11::arg("handle"));

	std::cout << "B7_[void RM_SetAlignMode(int, int)] ";
	// RM_SetAlignMode(int, int) file: line:169
	M("").def("RM_SetAlignMode", (void (*)(int, int)) &RM_SetAlignMode, "	Specify if and how position object will align to the road. This version\n	sets same mode for all components: Heading, Pitch, Roll and Z (elevation)\n	\n\n Handle to the position object. Set -1 to delete all.\n	\n\n as defined by roadmanager::Position::ALIGN_MODE:\n	0 = ALIGN_NONE // No alignment to road\n	1 = ALIGN_SOFT // Align to road but add relative orientation\n	2 = ALIGN_HARD // Completely align to road, disregard relative orientation\n\nC++: RM_SetAlignMode(int, int) --> void", pybind11::arg("handle"), pybind11::arg("mode"));

	std::cout << "B8_[void RM_SetAlignModeH(int, int)] ";
	// RM_SetAlignModeH(int, int) file: line:180
	M("").def("RM_SetAlignModeH", (void (*)(int, int)) &RM_SetAlignModeH, "	Specify if and how position object will align to the road. This version\n	sets same mode for only heading component.\n	\n\n Handle to the position object. Set -1 to delete all.\n	\n\n as defined by roadmanager::Position::ALIGN_MODE:\n	0 = ALIGN_NONE // No alignment to road\n	1 = ALIGN_SOFT // Align to road but add relative orientation\n	2 = ALIGN_HARD // Completely align to road, disregard relative orientation\n\nC++: RM_SetAlignModeH(int, int) --> void", pybind11::arg("handle"), pybind11::arg("mode"));

	std::cout << "B9_[void RM_SetAlignModeP(int, int)] ";
	// RM_SetAlignModeP(int, int) file: line:191
	M("").def("RM_SetAlignModeP", (void (*)(int, int)) &RM_SetAlignModeP, "	Specify if and how position object will align to the road. This version\n	sets same mode for only pitch component.\n	\n\n Handle to the position object. Set -1 to delete all.\n	\n\n as defined by roadmanager::Position::ALIGN_MODE:\n	0 = ALIGN_NONE // No alignment to road\n	1 = ALIGN_SOFT // Align to road but add relative orientation\n	2 = ALIGN_HARD // Completely align to road, disregard relative orientation\n\nC++: RM_SetAlignModeP(int, int) --> void", pybind11::arg("handle"), pybind11::arg("mode"));

	std::cout << "B10_[void RM_SetAlignModeR(int, int)] ";
	// RM_SetAlignModeR(int, int) file: line:202
	M("").def("RM_SetAlignModeR", (void (*)(int, int)) &RM_SetAlignModeR, "	Specify if and how position object will align to the road. This version\n	sets same mode for only roll component.\n	\n\n Handle to the position object. Set -1 to delete all.\n	\n\n as defined by roadmanager::Position::ALIGN_MODE:\n	0 = ALIGN_NONE // No alignment to road\n	1 = ALIGN_SOFT // Align to road but add relative orientation\n	2 = ALIGN_HARD // Completely align to road, disregard relative orientation\n\nC++: RM_SetAlignModeR(int, int) --> void", pybind11::arg("handle"), pybind11::arg("mode"));

	std::cout << "B11_[void RM_SetAlignModeZ(int, int)] ";
	// RM_SetAlignModeZ(int, int) file: line:213
	M("").def("RM_SetAlignModeZ", (void (*)(int, int)) &RM_SetAlignModeZ, "	Specify if and how position object will align to the road. This version\n	sets same mode for only Z (elevation) component.\n	\n\n Handle to the position object. Set -1 to delete all.\n	\n\n as defined by roadmanager::Position::ALIGN_MODE:\n	0 = ALIGN_NONE // No alignment to road\n	1 = ALIGN_SOFT // Align to road but add relative orientation\n	2 = ALIGN_HARD // Completely align to road, disregard relative orientation\n\nC++: RM_SetAlignModeZ(int, int) --> void", pybind11::arg("handle"), pybind11::arg("mode"));

	std::cout << "B12_[int RM_SetLockOnLane(int, bool)] ";
	// RM_SetLockOnLane(int, bool) file: line:220
	M("").def("RM_SetLockOnLane", (int (*)(int, bool)) &RM_SetLockOnLane, "	Controls whether to keep lane ID regardless of lateral position or snap to closest lane (default)\n	 mode True=keep lane False=Snap to closest (default)\n	\n\n 0 if successful, -1 if not\n\nC++: RM_SetLockOnLane(int, bool) --> int", pybind11::arg("handle"), pybind11::arg("mode"));

	std::cout << "B13_[int RM_GetNumberOfRoads()] ";
	// RM_GetNumberOfRoads() file: line:226
	M("").def("RM_GetNumberOfRoads", (int (*)()) &RM_GetNumberOfRoads, "	Get the total number fo roads in the road network of the currently loaded OpenDRIVE file.\n	\n\n Number of roads, -1 indicates error e.g. no roadnetwork loaded\n\nC++: RM_GetNumberOfRoads() --> int");

	std::cout << "B14_[int RM_GetIdOfRoadFromIndex(int)] ";
	// RM_GetIdOfRoadFromIndex(int) file: line:233
	M("").def("RM_GetIdOfRoadFromIndex", (int (*)(int)) &RM_GetIdOfRoadFromIndex, "	Get the Road ID of the road with specified index. E.g. if there are 4 roads, index 3 means the last one.\n	\n\n The index of the road\n	\n\n The ID of the road, -1 on error\n\nC++: RM_GetIdOfRoadFromIndex(int) --> int", pybind11::arg("index"));

	std::cout << "B15_[float RM_GetRoadLength(int)] ";
	// RM_GetRoadLength(int) file: line:240
	M("").def("RM_GetRoadLength", (float (*)(int)) &RM_GetRoadLength, "	Get the lenght of road with specified ID\n	\n\n The road ID\n	\n\n The length of the road if ID exists, else 0.0\n\nC++: RM_GetRoadLength(int) --> float", pybind11::arg("id"));

	std::cout << "B16_[int RM_GetRoadNumberOfLanes(int, float)] ";
	// RM_GetRoadNumberOfLanes(int, float) file: line:248
	M("").def("RM_GetRoadNumberOfLanes", (int (*)(int, float)) &RM_GetRoadNumberOfLanes, "	Get the number of drivable lanes of specified road\n	\n\n The road ID\n	\n\n The distance along the road at what point to check number of lanes (which can vary along the road)\n	\n\n The number of drivable lanes, -1 indicates error e.g. no roadnetwork loaded\n\nC++: RM_GetRoadNumberOfLanes(int, float) --> int", pybind11::arg("roadId"), pybind11::arg("s"));

	std::cout << "B17_[int RM_GetLaneIdByIndex(int, int, float)] ";
	// RM_GetLaneIdByIndex(int, int, float) file: line:257
	M("").def("RM_GetLaneIdByIndex", (int (*)(int, int, float)) &RM_GetLaneIdByIndex, "	Get the ID of the lane given by index\n	\n\n The road ID\n	\n\n The index of the lane\n	\n\n The distance along the road at what point to look up the lane ID\n	\n\n The lane ID, -1 indicates error e.g. no roadnetwork loaded\n\nC++: RM_GetLaneIdByIndex(int, int, float) --> int", pybind11::arg("roadId"), pybind11::arg("laneIndex"), pybind11::arg("s"));

	std::cout << "B18_[int RM_SetLanePosition(int, int, int, float, float, bool)] ";
	// RM_SetLanePosition(int, int, int, float, float, bool) file: line:269
	M("").def("RM_SetLanePosition", (int (*)(int, int, int, float, float, bool)) &RM_SetLanePosition, "	Set position from road coordinates, world coordinates being calculated\n	\n\n Handle to the position object\n	\n\n Road specifier\n	\n\n Lane specifier\n	\n\n Offset from lane center\n	\n\n Distance along the specified road\n	\n\n If true the heading will be reset to the lane driving direction (typically only at initialization)\n	\n\n 0 if successful, -1 if not\n\nC++: RM_SetLanePosition(int, int, int, float, float, bool) --> int", pybind11::arg("handle"), pybind11::arg("roadId"), pybind11::arg("laneId"), pybind11::arg("laneOffset"), pybind11::arg("s"), pybind11::arg("align"));

	std::cout << "B19_[int RM_SetS(int, float)] ";
	// RM_SetS(int, float) file: line:277
	M("").def("RM_SetS", (int (*)(int, float)) &RM_SetS, "	Set s (distance) part of a lane position, world coordinates being calculated\n	\n\n Handle to the position object\n	\n\n Distance along the specified road\n	\n\n 0 if successful, -1 if not\n\nC++: RM_SetS(int, float) --> int", pybind11::arg("handle"), pybind11::arg("s"));

	std::cout << "B20_[int RM_SetWorldPosition(int, float, float, float, float, float, float)] ";
	// RM_SetWorldPosition(int, float, float, float, float, float, float) file: line:290
	M("").def("RM_SetWorldPosition", (int (*)(int, float, float, float, float, float, float)) &RM_SetWorldPosition, "	Set position from world coordinates, road coordinates being calculated\n	\n\n Handle to the position object\n	\n\n cartesian coordinate x value\n	\n\n cartesian coordinate y value\n	\n\n cartesian coordinate z value\n	\n\n rotation heading value\n	\n\n rotation pitch value\n	\n\n rotation roll value\n	\n\n 0 if successful, -1 if not\n\nC++: RM_SetWorldPosition(int, float, float, float, float, float, float) --> int", pybind11::arg("handle"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("p"), pybind11::arg("r"));

	std::cout << "B21_[int RM_SetWorldXYHPosition(int, float, float, float)] ";
	// RM_SetWorldXYHPosition(int, float, float, float) file: line:300
	M("").def("RM_SetWorldXYHPosition", (int (*)(int, float, float, float)) &RM_SetWorldXYHPosition, "	Set position from world X, Y and heading coordinates; Z, pitch and road coordinates being calculated\n	\n\n Handle to the position object\n	\n\n cartesian coordinate x value\n	\n\n cartesian coordinate y value\n	\n\n rotation heading value\n	\n\n 0 if successful, -1 if not\n\nC++: RM_SetWorldXYHPosition(int, float, float, float) --> int", pybind11::arg("handle"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"));

	std::cout << "B22_[int RM_SetWorldXYZHPosition(int, float, float, float, float)] ";
	// RM_SetWorldXYZHPosition(int, float, float, float, float) file: line:311
	M("").def("RM_SetWorldXYZHPosition", (int (*)(int, float, float, float, float)) &RM_SetWorldXYZHPosition, "	Set position from world X, Y, Z and heading coordinates; pitch and road coordinates being calculated\n	Setting a Z value may have effect in mapping the position to the closest road, e.g. overpass\n	\n\n Handle to the position object\n	\n\n cartesian coordinate x value\n	\n\n cartesian coordinate y value\n	\n\n rotation heading value\n	\n\n 0 if successful, -1 if not\n\nC++: RM_SetWorldXYZHPosition(int, float, float, float, float) --> int", pybind11::arg("handle"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"));

	std::cout << "B23_[int RM_PositionMoveForward(int, float, float)] ";
	// RM_PositionMoveForward(int, float, float) file: line:320
	M("").def("RM_PositionMoveForward", (int (*)(int, float, float)) &RM_PositionMoveForward, "	Move position forward along the road. Choose way randomly though any junctions.\n	\n\n Handle to the position object\n	\n\n Distance (meter) to move\n	\n\n Desired direction [0:2pi] from incoming road direction (angle = 0), set -1 to randomize\n	\n\n 0 if successful, for other codes see esmini roadmanager::Position::enum class ErrorCode\n\nC++: RM_PositionMoveForward(int, float, float) --> int", pybind11::arg("handle"), pybind11::arg("dist"), pybind11::arg("junctionSelectorAngle"));

	std::cout << "B24_[float RM_GetSpeedLimit(int)] ";
	// RM_GetSpeedLimit(int) file: line:335
	M("").def("RM_GetSpeedLimit", (float (*)(int)) &RM_GetSpeedLimit, "	Retrieve current speed limit (at current road, s-value and lane) based on ODR type elements or nr of lanes\n	\n\n Handle to the position object\n	\n\n 0 if successful, -1 if not\n\nC++: RM_GetSpeedLimit(int) --> float", pybind11::arg("handle"));

	std::cout << "B25_[int RM_GetNumberOfRoadSigns(int)] ";
	// RM_GetNumberOfRoadSigns(int) file: line:373
	M("").def("RM_GetNumberOfRoadSigns", (int (*)(int)) &RM_GetNumberOfRoadSigns, "	Get the number of road signs along specified road\n	\n\n The road along which to look for signs\n	\n\n Number of road signs, -1 on error\n\nC++: RM_GetNumberOfRoadSigns(int) --> int", pybind11::arg("road_id"));

	std::cout << "B26_[int RM_GetNumberOfRoadSignValidityRecords(int, int)] ";
	// RM_GetNumberOfRoadSignValidityRecords(int, int) file: line:390
	M("").def("RM_GetNumberOfRoadSignValidityRecords", (int (*)(int, int)) &RM_GetNumberOfRoadSignValidityRecords, "		Get the number of lane validity records of specified road object/sign\n		\n\n The road of which to look for the sign\n		\n\n Index of the sign. Note: not ID\n		\n\n Number of validity records of specified road sign, -1 if not\n\nC++: RM_GetNumberOfRoadSignValidityRecords(int, int) --> int", pybind11::arg("road_id"), pybind11::arg("index"));

}


#include <map>
#include <memory>
#include <stdexcept>
#include <functional>
#include <string>

#include <pybind11/pybind11.h>

typedef std::function< pybind11::module & (std::string const &) > ModuleGetter;

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M);


PYBIND11_MODULE(pyesminirmlib, root_module) {
	root_module.doc() = "pyesminirmlib module";

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

// Source list file: /home/wave/repositories/python-esmini/src/esminirmlib/pyesminirmlib.sources
// pyesminirmlib.cpp
// unknown/unknown.cpp

// Modules list file: /home/wave/repositories/python-esmini/src/esminirmlib/pyesminirmlib.modules
// 
