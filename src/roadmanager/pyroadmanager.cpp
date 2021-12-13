// File: unknown/unknown.cpp
#include <iostream> // --trace
#include <iterator> // __gnu_cxx::__normal_iterator
#include <memory> // std::allocator
#include <sstream> // __str__
#include <vector> // std::vector

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "esminiLib.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

// roadmanager::Geometry file: line:91
struct PyCallBack_roadmanager_Geometry : public roadmanager::Geometry {
	using roadmanager::Geometry::Geometry;

	double GetX() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Geometry *>(this), "GetX");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetX();
	}
	double GetY() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Geometry *>(this), "GetY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetY();
	}
	double GetHdg() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Geometry *>(this), "GetHdg");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetHdg();
	}
	double EvaluateCurvatureDS(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Geometry *>(this), "EvaluateCurvatureDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Geometry::EvaluateCurvatureDS\"");
	}
	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Geometry *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Geometry::Print();
	}
	void EvaluateDS(double a0, double * a1, double * a2, double * a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Geometry *>(this), "EvaluateDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Geometry::EvaluateDS(a0, a1, a2, a3);
	}
};

// roadmanager::Line file: line:132
struct PyCallBack_roadmanager_Line : public roadmanager::Line {
	using roadmanager::Line::Line;

	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Line *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Line::Print();
	}
	void EvaluateDS(double a0, double * a1, double * a2, double * a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Line *>(this), "EvaluateDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Line::EvaluateDS(a0, a1, a2, a3);
	}
	double EvaluateCurvatureDS(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Line *>(this), "EvaluateCurvatureDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Line::EvaluateCurvatureDS(a0);
	}
	double GetX() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Line *>(this), "GetX");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetX();
	}
	double GetY() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Line *>(this), "GetY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetY();
	}
	double GetHdg() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Line *>(this), "GetHdg");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetHdg();
	}
};

// roadmanager::Arc file: line:146
struct PyCallBack_roadmanager_Arc : public roadmanager::Arc {
	using roadmanager::Arc::Arc;

	double EvaluateCurvatureDS(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Arc *>(this), "EvaluateCurvatureDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Arc::EvaluateCurvatureDS(a0);
	}
	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Arc *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Arc::Print();
	}
	void EvaluateDS(double a0, double * a1, double * a2, double * a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Arc *>(this), "EvaluateDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Arc::EvaluateDS(a0, a1, a2, a3);
	}
	double GetX() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Arc *>(this), "GetX");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetX();
	}
	double GetY() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Arc *>(this), "GetY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetY();
	}
	double GetHdg() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Arc *>(this), "GetHdg");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetHdg();
	}
};

// roadmanager::Spiral file: line:165
struct PyCallBack_roadmanager_Spiral : public roadmanager::Spiral {
	using roadmanager::Spiral::Spiral;

	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Spiral *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Spiral::Print();
	}
	void EvaluateDS(double a0, double * a1, double * a2, double * a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Spiral *>(this), "EvaluateDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Spiral::EvaluateDS(a0, a1, a2, a3);
	}
	double EvaluateCurvatureDS(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Spiral *>(this), "EvaluateCurvatureDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Spiral::EvaluateCurvatureDS(a0);
	}
	double GetX() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Spiral *>(this), "GetX");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetX();
	}
	double GetY() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Spiral *>(this), "GetY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetY();
	}
	double GetHdg() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Spiral *>(this), "GetHdg");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetHdg();
	}
};

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B0_[int roadmanager::GetNewGlobalLaneId()] ";
	// roadmanager::GetNewGlobalLaneId() file: line:28
	M("roadmanager").def("GetNewGlobalLaneId", (int (*)()) &roadmanager::GetNewGlobalLaneId, "C++: roadmanager::GetNewGlobalLaneId() --> int");

	std::cout << "B1_[int roadmanager::GetNewGlobalLaneBoundaryId()] ";
	// roadmanager::GetNewGlobalLaneBoundaryId() file: line:29
	M("roadmanager").def("GetNewGlobalLaneBoundaryId", (int (*)()) &roadmanager::GetNewGlobalLaneBoundaryId, "C++: roadmanager::GetNewGlobalLaneBoundaryId() --> int");

	std::cout << "B2_[roadmanager::Polynomial] ";
	{ // roadmanager::Polynomial file: line:32
		pybind11::class_<roadmanager::Polynomial, std::shared_ptr<roadmanager::Polynomial>> cl(M("roadmanager"), "Polynomial", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Polynomial(); } ) );
		cl.def( pybind11::init( [](double const & a0, double const & a1, double const & a2, double const & a3){ return new roadmanager::Polynomial(a0, a1, a2, a3); } ), "doc" , pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d"));
		cl.def( pybind11::init<double, double, double, double, double>(), pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d"), pybind11::arg("p_scale") );

		cl.def( pybind11::init( [](roadmanager::Polynomial const &o){ return new roadmanager::Polynomial(o); } ) );
		cl.def("Set", [](roadmanager::Polynomial &o, double const & a0, double const & a1, double const & a2, double const & a3) -> void { return o.Set(a0, a1, a2, a3); }, "", pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d"));
		cl.def("Set", (void (roadmanager::Polynomial::*)(double, double, double, double, double)) &roadmanager::Polynomial::Set, "C++: roadmanager::Polynomial::Set(double, double, double, double, double) --> void", pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d"), pybind11::arg("p_scale"));
		cl.def("SetA", (void (roadmanager::Polynomial::*)(double)) &roadmanager::Polynomial::SetA, "C++: roadmanager::Polynomial::SetA(double) --> void", pybind11::arg("a"));
		cl.def("SetB", (void (roadmanager::Polynomial::*)(double)) &roadmanager::Polynomial::SetB, "C++: roadmanager::Polynomial::SetB(double) --> void", pybind11::arg("b"));
		cl.def("SetC", (void (roadmanager::Polynomial::*)(double)) &roadmanager::Polynomial::SetC, "C++: roadmanager::Polynomial::SetC(double) --> void", pybind11::arg("c"));
		cl.def("SetD", (void (roadmanager::Polynomial::*)(double)) &roadmanager::Polynomial::SetD, "C++: roadmanager::Polynomial::SetD(double) --> void", pybind11::arg("d"));
		cl.def("GetA", (double (roadmanager::Polynomial::*)()) &roadmanager::Polynomial::GetA, "C++: roadmanager::Polynomial::GetA() --> double");
		cl.def("GetB", (double (roadmanager::Polynomial::*)()) &roadmanager::Polynomial::GetB, "C++: roadmanager::Polynomial::GetB() --> double");
		cl.def("GetC", (double (roadmanager::Polynomial::*)()) &roadmanager::Polynomial::GetC, "C++: roadmanager::Polynomial::GetC() --> double");
		cl.def("GetD", (double (roadmanager::Polynomial::*)()) &roadmanager::Polynomial::GetD, "C++: roadmanager::Polynomial::GetD() --> double");
		cl.def("GetPscale", (double (roadmanager::Polynomial::*)()) &roadmanager::Polynomial::GetPscale, "C++: roadmanager::Polynomial::GetPscale() --> double");
		cl.def("Evaluate", (double (roadmanager::Polynomial::*)(double)) &roadmanager::Polynomial::Evaluate, "C++: roadmanager::Polynomial::Evaluate(double) --> double", pybind11::arg("s"));
		cl.def("EvaluatePrim", (double (roadmanager::Polynomial::*)(double)) &roadmanager::Polynomial::EvaluatePrim, "C++: roadmanager::Polynomial::EvaluatePrim(double) --> double", pybind11::arg("s"));
		cl.def("EvaluatePrimPrim", (double (roadmanager::Polynomial::*)(double)) &roadmanager::Polynomial::EvaluatePrimPrim, "C++: roadmanager::Polynomial::EvaluatePrimPrim(double) --> double", pybind11::arg("s"));
		cl.def("assign", (class roadmanager::Polynomial & (roadmanager::Polynomial::*)(const class roadmanager::Polynomial &)) &roadmanager::Polynomial::operator=, "C++: roadmanager::Polynomial::operator=(const class roadmanager::Polynomial &) --> class roadmanager::Polynomial &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B3_[roadmanager::OSIPoints] ";
	{ // roadmanager::OSIPoints file: line:68
		pybind11::class_<roadmanager::OSIPoints, std::shared_ptr<roadmanager::OSIPoints>> cl(M("roadmanager"), "OSIPoints", "");
		cl.def( pybind11::init( [](){ return new roadmanager::OSIPoints(); } ) );
		cl.def( pybind11::init( [](roadmanager::OSIPoints const &o){ return new roadmanager::OSIPoints(o); } ) );
		cl.def("GetXfromIdx", (double (roadmanager::OSIPoints::*)(int)) &roadmanager::OSIPoints::GetXfromIdx, "C++: roadmanager::OSIPoints::GetXfromIdx(int) --> double", pybind11::arg("i"));
		cl.def("GetYfromIdx", (double (roadmanager::OSIPoints::*)(int)) &roadmanager::OSIPoints::GetYfromIdx, "C++: roadmanager::OSIPoints::GetYfromIdx(int) --> double", pybind11::arg("i"));
		cl.def("GetZfromIdx", (double (roadmanager::OSIPoints::*)(int)) &roadmanager::OSIPoints::GetZfromIdx, "C++: roadmanager::OSIPoints::GetZfromIdx(int) --> double", pybind11::arg("i"));
		cl.def("GetNumOfOSIPoints", (int (roadmanager::OSIPoints::*)()) &roadmanager::OSIPoints::GetNumOfOSIPoints, "C++: roadmanager::OSIPoints::GetNumOfOSIPoints() --> int");
		cl.def("GetLength", (double (roadmanager::OSIPoints::*)()) &roadmanager::OSIPoints::GetLength, "C++: roadmanager::OSIPoints::GetLength() --> double");
	}
	std::cout << "B4_[int roadmanager::CheckOverlapingOSIPoints(class roadmanager::OSIPoints *, class roadmanager::OSIPoints *, double)] ";
	// roadmanager::CheckOverlapingOSIPoints(class roadmanager::OSIPoints *, class roadmanager::OSIPoints *, double) file: line:89
	M("roadmanager").def("CheckOverlapingOSIPoints", (int (*)(class roadmanager::OSIPoints *, class roadmanager::OSIPoints *, double)) &roadmanager::CheckOverlapingOSIPoints, "		function that checks if two sets of osi points has the same start/end\n		\n\n the number of points that are within tolerance (0,1 or 2)\n\nC++: roadmanager::CheckOverlapingOSIPoints(class roadmanager::OSIPoints *, class roadmanager::OSIPoints *, double) --> int", pybind11::arg("first_set"), pybind11::arg("second_set"), pybind11::arg("tolerance"));

	std::cout << "B5_[roadmanager::Geometry] ";
	{ // roadmanager::Geometry file: line:91
		pybind11::class_<roadmanager::Geometry, std::shared_ptr<roadmanager::Geometry>, PyCallBack_roadmanager_Geometry> cl(M("roadmanager"), "Geometry", "");
		cl.def( pybind11::init( [](){ return new PyCallBack_roadmanager_Geometry(); } ) );
		cl.def( pybind11::init<double, double, double, double, double, roadmanager::Geometry::GeometryType>(), pybind11::arg("s"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("hdg"), pybind11::arg("length"), pybind11::arg("type") );

		cl.def(pybind11::init<PyCallBack_roadmanager_Geometry const &>());
		cl.def("GetType", (roadmanager::Geometry::GeometryType (roadmanager::Geometry::*)()) &roadmanager::Geometry::GetType, "C++: roadmanager::Geometry::GetType() --> roadmanager::Geometry::GeometryType");
		cl.def("GetLength", (double (roadmanager::Geometry::*)()) &roadmanager::Geometry::GetLength, "C++: roadmanager::Geometry::GetLength() --> double");
		cl.def("GetX", (double (roadmanager::Geometry::*)()) &roadmanager::Geometry::GetX, "C++: roadmanager::Geometry::GetX() --> double");
		cl.def("SetX", (void (roadmanager::Geometry::*)(double)) &roadmanager::Geometry::SetX, "C++: roadmanager::Geometry::SetX(double) --> void", pybind11::arg("x"));
		cl.def("GetY", (double (roadmanager::Geometry::*)()) &roadmanager::Geometry::GetY, "C++: roadmanager::Geometry::GetY() --> double");
		cl.def("SetY", (void (roadmanager::Geometry::*)(double)) &roadmanager::Geometry::SetY, "C++: roadmanager::Geometry::SetY(double) --> void", pybind11::arg("y"));
		cl.def("GetHdg", (double (roadmanager::Geometry::*)()) &roadmanager::Geometry::GetHdg, "C++: roadmanager::Geometry::GetHdg() --> double");
		cl.def("SetHdg", (void (roadmanager::Geometry::*)(double)) &roadmanager::Geometry::SetHdg, "C++: roadmanager::Geometry::SetHdg(double) --> void", pybind11::arg("hdg"));
		cl.def("GetS", (double (roadmanager::Geometry::*)()) &roadmanager::Geometry::GetS, "C++: roadmanager::Geometry::GetS() --> double");
		cl.def("EvaluateCurvatureDS", (double (roadmanager::Geometry::*)(double)) &roadmanager::Geometry::EvaluateCurvatureDS, "C++: roadmanager::Geometry::EvaluateCurvatureDS(double) --> double", pybind11::arg("ds"));
		cl.def("Print", (void (roadmanager::Geometry::*)()) &roadmanager::Geometry::Print, "C++: roadmanager::Geometry::Print() --> void");
		cl.def("EvaluateDS", (void (roadmanager::Geometry::*)(double, double *, double *, double *)) &roadmanager::Geometry::EvaluateDS, "C++: roadmanager::Geometry::EvaluateDS(double, double *, double *, double *) --> void", pybind11::arg("ds"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"));
		cl.def("assign", (class roadmanager::Geometry & (roadmanager::Geometry::*)(const class roadmanager::Geometry &)) &roadmanager::Geometry::operator=, "C++: roadmanager::Geometry::operator=(const class roadmanager::Geometry &) --> class roadmanager::Geometry &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B6_[roadmanager::Line] ";
	{ // roadmanager::Line file: line:132
		pybind11::class_<roadmanager::Line, std::shared_ptr<roadmanager::Line>, PyCallBack_roadmanager_Line, roadmanager::Geometry> cl(M("roadmanager"), "Line", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Line(); }, [](){ return new PyCallBack_roadmanager_Line(); } ) );
		cl.def( pybind11::init<double, double, double, double, double>(), pybind11::arg("s"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("hdg"), pybind11::arg("length") );

		cl.def( pybind11::init( [](PyCallBack_roadmanager_Line const &o){ return new PyCallBack_roadmanager_Line(o); } ) );
		cl.def( pybind11::init( [](roadmanager::Line const &o){ return new roadmanager::Line(o); } ) );
		cl.def("Print", (void (roadmanager::Line::*)()) &roadmanager::Line::Print, "C++: roadmanager::Line::Print() --> void");
		cl.def("EvaluateDS", (void (roadmanager::Line::*)(double, double *, double *, double *)) &roadmanager::Line::EvaluateDS, "C++: roadmanager::Line::EvaluateDS(double, double *, double *, double *) --> void", pybind11::arg("ds"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"));
		cl.def("EvaluateCurvatureDS", (double (roadmanager::Line::*)(double)) &roadmanager::Line::EvaluateCurvatureDS, "C++: roadmanager::Line::EvaluateCurvatureDS(double) --> double", pybind11::arg("ds"));
		cl.def("assign", (class roadmanager::Line & (roadmanager::Line::*)(const class roadmanager::Line &)) &roadmanager::Line::operator=, "C++: roadmanager::Line::operator=(const class roadmanager::Line &) --> class roadmanager::Line &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B7_[roadmanager::Arc] ";
	{ // roadmanager::Arc file: line:146
		pybind11::class_<roadmanager::Arc, std::shared_ptr<roadmanager::Arc>, PyCallBack_roadmanager_Arc, roadmanager::Geometry> cl(M("roadmanager"), "Arc", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Arc(); }, [](){ return new PyCallBack_roadmanager_Arc(); } ) );
		cl.def( pybind11::init<double, double, double, double, double, double>(), pybind11::arg("s"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("hdg"), pybind11::arg("length"), pybind11::arg("curvature") );

		cl.def( pybind11::init( [](PyCallBack_roadmanager_Arc const &o){ return new PyCallBack_roadmanager_Arc(o); } ) );
		cl.def( pybind11::init( [](roadmanager::Arc const &o){ return new roadmanager::Arc(o); } ) );
		cl.def("EvaluateCurvatureDS", (double (roadmanager::Arc::*)(double)) &roadmanager::Arc::EvaluateCurvatureDS, "C++: roadmanager::Arc::EvaluateCurvatureDS(double) --> double", pybind11::arg("ds"));
		cl.def("GetRadius", (double (roadmanager::Arc::*)()) &roadmanager::Arc::GetRadius, "C++: roadmanager::Arc::GetRadius() --> double");
		cl.def("GetCurvature", (double (roadmanager::Arc::*)()) &roadmanager::Arc::GetCurvature, "C++: roadmanager::Arc::GetCurvature() --> double");
		cl.def("Print", (void (roadmanager::Arc::*)()) &roadmanager::Arc::Print, "C++: roadmanager::Arc::Print() --> void");
		cl.def("EvaluateDS", (void (roadmanager::Arc::*)(double, double *, double *, double *)) &roadmanager::Arc::EvaluateDS, "C++: roadmanager::Arc::EvaluateDS(double, double *, double *, double *) --> void", pybind11::arg("ds"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"));
		cl.def("assign", (class roadmanager::Arc & (roadmanager::Arc::*)(const class roadmanager::Arc &)) &roadmanager::Arc::operator=, "C++: roadmanager::Arc::operator=(const class roadmanager::Arc &) --> class roadmanager::Arc &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B8_[roadmanager::Spiral] ";
	{ // roadmanager::Spiral file: line:165
		pybind11::class_<roadmanager::Spiral, std::shared_ptr<roadmanager::Spiral>, PyCallBack_roadmanager_Spiral, roadmanager::Geometry> cl(M("roadmanager"), "Spiral", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Spiral(); }, [](){ return new PyCallBack_roadmanager_Spiral(); } ) );
		cl.def( pybind11::init<double, double, double, double, double, double, double>(), pybind11::arg("s"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("hdg"), pybind11::arg("length"), pybind11::arg("curv_start"), pybind11::arg("curv_end") );

		cl.def( pybind11::init( [](PyCallBack_roadmanager_Spiral const &o){ return new PyCallBack_roadmanager_Spiral(o); } ) );
		cl.def( pybind11::init( [](roadmanager::Spiral const &o){ return new roadmanager::Spiral(o); } ) );
		cl.def("GetCurvStart", (double (roadmanager::Spiral::*)()) &roadmanager::Spiral::GetCurvStart, "C++: roadmanager::Spiral::GetCurvStart() --> double");
		cl.def("GetCurvEnd", (double (roadmanager::Spiral::*)()) &roadmanager::Spiral::GetCurvEnd, "C++: roadmanager::Spiral::GetCurvEnd() --> double");
		cl.def("GetX0", (double (roadmanager::Spiral::*)()) &roadmanager::Spiral::GetX0, "C++: roadmanager::Spiral::GetX0() --> double");
		cl.def("GetY0", (double (roadmanager::Spiral::*)()) &roadmanager::Spiral::GetY0, "C++: roadmanager::Spiral::GetY0() --> double");
		cl.def("GetH0", (double (roadmanager::Spiral::*)()) &roadmanager::Spiral::GetH0, "C++: roadmanager::Spiral::GetH0() --> double");
		cl.def("GetS0", (double (roadmanager::Spiral::*)()) &roadmanager::Spiral::GetS0, "C++: roadmanager::Spiral::GetS0() --> double");
		cl.def("GetCDot", (double (roadmanager::Spiral::*)()) &roadmanager::Spiral::GetCDot, "C++: roadmanager::Spiral::GetCDot() --> double");
		cl.def("SetX0", (void (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::SetX0, "C++: roadmanager::Spiral::SetX0(double) --> void", pybind11::arg("x0"));
		cl.def("SetY0", (void (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::SetY0, "C++: roadmanager::Spiral::SetY0(double) --> void", pybind11::arg("y0"));
		cl.def("SetH0", (void (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::SetH0, "C++: roadmanager::Spiral::SetH0(double) --> void", pybind11::arg("h0"));
		cl.def("SetS0", (void (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::SetS0, "C++: roadmanager::Spiral::SetS0(double) --> void", pybind11::arg("s0"));
		cl.def("SetCDot", (void (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::SetCDot, "C++: roadmanager::Spiral::SetCDot(double) --> void", pybind11::arg("c_dot"));
		cl.def("Print", (void (roadmanager::Spiral::*)()) &roadmanager::Spiral::Print, "C++: roadmanager::Spiral::Print() --> void");
		cl.def("EvaluateDS", (void (roadmanager::Spiral::*)(double, double *, double *, double *)) &roadmanager::Spiral::EvaluateDS, "C++: roadmanager::Spiral::EvaluateDS(double, double *, double *, double *) --> void", pybind11::arg("ds"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"));
		cl.def("EvaluateCurvatureDS", (double (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::EvaluateCurvatureDS, "C++: roadmanager::Spiral::EvaluateCurvatureDS(double) --> double", pybind11::arg("ds"));
		cl.def("SetX", (void (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::SetX, "C++: roadmanager::Spiral::SetX(double) --> void", pybind11::arg("x"));
		cl.def("SetY", (void (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::SetY, "C++: roadmanager::Spiral::SetY(double) --> void", pybind11::arg("y"));
		cl.def("SetHdg", (void (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::SetHdg, "C++: roadmanager::Spiral::SetHdg(double) --> void", pybind11::arg("h"));
		cl.def("assign", (class roadmanager::Spiral & (roadmanager::Spiral::*)(const class roadmanager::Spiral &)) &roadmanager::Spiral::operator=, "C++: roadmanager::Spiral::operator=(const class roadmanager::Spiral &) --> class roadmanager::Spiral &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}


// File: unknown/unknown_1.cpp
#include <iostream> // --trace
#include <sstream> // __str__

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "esminiLib.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

// roadmanager::Poly3 file: line:206
struct PyCallBack_roadmanager_Poly3 : public roadmanager::Poly3 {
	using roadmanager::Poly3::Poly3;

	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Poly3 *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Poly3::Print();
	}
	void EvaluateDS(double a0, double * a1, double * a2, double * a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Poly3 *>(this), "EvaluateDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Poly3::EvaluateDS(a0, a1, a2, a3);
	}
	double EvaluateCurvatureDS(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Poly3 *>(this), "EvaluateCurvatureDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Poly3::EvaluateCurvatureDS(a0);
	}
	double GetX() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Poly3 *>(this), "GetX");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetX();
	}
	double GetY() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Poly3 *>(this), "GetY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetY();
	}
	double GetHdg() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Poly3 *>(this), "GetHdg");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetHdg();
	}
};

// roadmanager::ParamPoly3 file: line:228
struct PyCallBack_roadmanager_ParamPoly3 : public roadmanager::ParamPoly3 {
	using roadmanager::ParamPoly3::ParamPoly3;

	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::ParamPoly3 *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return ParamPoly3::Print();
	}
	void EvaluateDS(double a0, double * a1, double * a2, double * a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::ParamPoly3 *>(this), "EvaluateDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return ParamPoly3::EvaluateDS(a0, a1, a2, a3);
	}
	double EvaluateCurvatureDS(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::ParamPoly3 *>(this), "EvaluateCurvatureDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return ParamPoly3::EvaluateCurvatureDS(a0);
	}
	double GetX() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::ParamPoly3 *>(this), "GetX");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetX();
	}
	double GetY() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::ParamPoly3 *>(this), "GetY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetY();
	}
	double GetHdg() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::ParamPoly3 *>(this), "GetHdg");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetHdg();
	}
};

void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B9_[roadmanager::Poly3] ";
	{ // roadmanager::Poly3 file: line:206
		pybind11::class_<roadmanager::Poly3, std::shared_ptr<roadmanager::Poly3>, PyCallBack_roadmanager_Poly3, roadmanager::Geometry> cl(M("roadmanager"), "Poly3", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Poly3(); }, [](){ return new PyCallBack_roadmanager_Poly3(); } ) );
		cl.def( pybind11::init<double, double, double, double, double, double, double, double, double>(), pybind11::arg("s"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("hdg"), pybind11::arg("length"), pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d") );

		cl.def( pybind11::init( [](PyCallBack_roadmanager_Poly3 const &o){ return new PyCallBack_roadmanager_Poly3(o); } ) );
		cl.def( pybind11::init( [](roadmanager::Poly3 const &o){ return new roadmanager::Poly3(o); } ) );
		cl.def_readwrite("poly3_", &roadmanager::Poly3::poly3_);
		cl.def("SetUMax", (void (roadmanager::Poly3::*)(double)) &roadmanager::Poly3::SetUMax, "C++: roadmanager::Poly3::SetUMax(double) --> void", pybind11::arg("umax"));
		cl.def("GetUMax", (double (roadmanager::Poly3::*)()) &roadmanager::Poly3::GetUMax, "C++: roadmanager::Poly3::GetUMax() --> double");
		cl.def("Print", (void (roadmanager::Poly3::*)()) &roadmanager::Poly3::Print, "C++: roadmanager::Poly3::Print() --> void");
		cl.def("GetPoly3", (class roadmanager::Polynomial (roadmanager::Poly3::*)()) &roadmanager::Poly3::GetPoly3, "C++: roadmanager::Poly3::GetPoly3() --> class roadmanager::Polynomial");
		cl.def("EvaluateDS", (void (roadmanager::Poly3::*)(double, double *, double *, double *)) &roadmanager::Poly3::EvaluateDS, "C++: roadmanager::Poly3::EvaluateDS(double, double *, double *, double *) --> void", pybind11::arg("ds"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"));
		cl.def("EvaluateCurvatureDS", (double (roadmanager::Poly3::*)(double)) &roadmanager::Poly3::EvaluateCurvatureDS, "C++: roadmanager::Poly3::EvaluateCurvatureDS(double) --> double", pybind11::arg("ds"));
		cl.def("assign", (class roadmanager::Poly3 & (roadmanager::Poly3::*)(const class roadmanager::Poly3 &)) &roadmanager::Poly3::operator=, "C++: roadmanager::Poly3::operator=(const class roadmanager::Poly3 &) --> class roadmanager::Poly3 &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B10_[roadmanager::ParamPoly3] ";
	{ // roadmanager::ParamPoly3 file: line:228
		pybind11::class_<roadmanager::ParamPoly3, std::shared_ptr<roadmanager::ParamPoly3>, PyCallBack_roadmanager_ParamPoly3, roadmanager::Geometry> cl(M("roadmanager"), "ParamPoly3", "");
		cl.def( pybind11::init( [](){ return new roadmanager::ParamPoly3(); }, [](){ return new PyCallBack_roadmanager_ParamPoly3(); } ) );
		cl.def( pybind11::init<double, double, double, double, double, double, double, double, double, double, double, double, double, enum roadmanager::ParamPoly3::PRangeType>(), pybind11::arg("s"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("hdg"), pybind11::arg("length"), pybind11::arg("aU"), pybind11::arg("bU"), pybind11::arg("cU"), pybind11::arg("dU"), pybind11::arg("aV"), pybind11::arg("bV"), pybind11::arg("cV"), pybind11::arg("dV"), pybind11::arg("p_range") );

		cl.def( pybind11::init( [](PyCallBack_roadmanager_ParamPoly3 const &o){ return new PyCallBack_roadmanager_ParamPoly3(o); } ) );
		cl.def( pybind11::init( [](roadmanager::ParamPoly3 const &o){ return new roadmanager::ParamPoly3(o); } ) );

		pybind11::enum_<roadmanager::ParamPoly3::PRangeType>(cl, "PRangeType", pybind11::arithmetic(), "")
			.value("P_RANGE_UNKNOWN", roadmanager::ParamPoly3::P_RANGE_UNKNOWN)
			.value("P_RANGE_NORMALIZED", roadmanager::ParamPoly3::P_RANGE_NORMALIZED)
			.value("P_RANGE_ARC_LENGTH", roadmanager::ParamPoly3::P_RANGE_ARC_LENGTH)
			.export_values();

		cl.def_readwrite("poly3U_", &roadmanager::ParamPoly3::poly3U_);
		cl.def_readwrite("poly3V_", &roadmanager::ParamPoly3::poly3V_);
		cl.def("Print", (void (roadmanager::ParamPoly3::*)()) &roadmanager::ParamPoly3::Print, "C++: roadmanager::ParamPoly3::Print() --> void");
		cl.def("GetPoly3U", (class roadmanager::Polynomial (roadmanager::ParamPoly3::*)()) &roadmanager::ParamPoly3::GetPoly3U, "C++: roadmanager::ParamPoly3::GetPoly3U() --> class roadmanager::Polynomial");
		cl.def("GetPoly3V", (class roadmanager::Polynomial (roadmanager::ParamPoly3::*)()) &roadmanager::ParamPoly3::GetPoly3V, "C++: roadmanager::ParamPoly3::GetPoly3V() --> class roadmanager::Polynomial");
		cl.def("EvaluateDS", (void (roadmanager::ParamPoly3::*)(double, double *, double *, double *)) &roadmanager::ParamPoly3::EvaluateDS, "C++: roadmanager::ParamPoly3::EvaluateDS(double, double *, double *, double *) --> void", pybind11::arg("ds"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"));
		cl.def("EvaluateCurvatureDS", (double (roadmanager::ParamPoly3::*)(double)) &roadmanager::ParamPoly3::EvaluateCurvatureDS, "C++: roadmanager::ParamPoly3::EvaluateCurvatureDS(double) --> double", pybind11::arg("ds"));
		cl.def("calcS2PMap", (void (roadmanager::ParamPoly3::*)(enum roadmanager::ParamPoly3::PRangeType)) &roadmanager::ParamPoly3::calcS2PMap, "C++: roadmanager::ParamPoly3::calcS2PMap(enum roadmanager::ParamPoly3::PRangeType) --> void", pybind11::arg("p_range"));
		cl.def("S2P", (double (roadmanager::ParamPoly3::*)(double)) &roadmanager::ParamPoly3::S2P, "C++: roadmanager::ParamPoly3::S2P(double) --> double", pybind11::arg("s"));
		cl.def("assign", (class roadmanager::ParamPoly3 & (roadmanager::ParamPoly3::*)(const class roadmanager::ParamPoly3 &)) &roadmanager::ParamPoly3::operator=, "C++: roadmanager::ParamPoly3::operator=(const class roadmanager::ParamPoly3 &) --> class roadmanager::ParamPoly3 &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B11_[roadmanager::Elevation] ";
	{ // roadmanager::Elevation file: line:264
		pybind11::class_<roadmanager::Elevation, std::shared_ptr<roadmanager::Elevation>> cl(M("roadmanager"), "Elevation", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Elevation(); } ) );
		cl.def( pybind11::init<double, double, double, double, double>(), pybind11::arg("s"), pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d") );

		cl.def_readwrite("poly3_", &roadmanager::Elevation::poly3_);
		cl.def("GetS", (double (roadmanager::Elevation::*)()) &roadmanager::Elevation::GetS, "C++: roadmanager::Elevation::GetS() --> double");
		cl.def("SetLength", (void (roadmanager::Elevation::*)(double)) &roadmanager::Elevation::SetLength, "C++: roadmanager::Elevation::SetLength(double) --> void", pybind11::arg("length"));
		cl.def("GetLength", (double (roadmanager::Elevation::*)()) &roadmanager::Elevation::GetLength, "C++: roadmanager::Elevation::GetLength() --> double");
		cl.def("Print", (void (roadmanager::Elevation::*)()) &roadmanager::Elevation::Print, "C++: roadmanager::Elevation::Print() --> void");
	}
}


// File: unknown/unknown_2.cpp
#include <iostream> // --trace
#include <iterator> // __gnu_cxx::__normal_iterator
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
#include "esminiLib.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown_2(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B12_[roadmanager::LaneLink] ";
	{ // roadmanager::LaneLink file: line:295
		pybind11::class_<roadmanager::LaneLink, std::shared_ptr<roadmanager::LaneLink>> cl(M("roadmanager"), "LaneLink", "");
		cl.def( pybind11::init<roadmanager::LinkType, int>(), pybind11::arg("type"), pybind11::arg("id") );

		cl.def("GetType", (roadmanager::LinkType (roadmanager::LaneLink::*)()) &roadmanager::LaneLink::GetType, "C++: roadmanager::LaneLink::GetType() --> roadmanager::LinkType");
		cl.def("GetId", (int (roadmanager::LaneLink::*)()) &roadmanager::LaneLink::GetId, "C++: roadmanager::LaneLink::GetId() --> int");
		cl.def("Print", (void (roadmanager::LaneLink::*)()) &roadmanager::LaneLink::Print, "C++: roadmanager::LaneLink::Print() --> void");
	}
	std::cout << "B13_[roadmanager::LaneWidth] ";
	{ // roadmanager::LaneWidth file: line:309
		pybind11::class_<roadmanager::LaneWidth, std::shared_ptr<roadmanager::LaneWidth>> cl(M("roadmanager"), "LaneWidth", "");
		cl.def( pybind11::init<double, double, double, double, double>(), pybind11::arg("s_offset"), pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d") );

		cl.def_readwrite("poly3_", &roadmanager::LaneWidth::poly3_);
		cl.def("GetSOffset", (double (roadmanager::LaneWidth::*)()) &roadmanager::LaneWidth::GetSOffset, "C++: roadmanager::LaneWidth::GetSOffset() --> double");
		cl.def("Print", (void (roadmanager::LaneWidth::*)()) &roadmanager::LaneWidth::Print, "C++: roadmanager::LaneWidth::Print() --> void");
	}
	std::cout << "B14_[roadmanager::LaneBoundaryOSI] ";
	{ // roadmanager::LaneBoundaryOSI file: line:326
		pybind11::class_<roadmanager::LaneBoundaryOSI, std::shared_ptr<roadmanager::LaneBoundaryOSI>> cl(M("roadmanager"), "LaneBoundaryOSI", "");
		cl.def( pybind11::init<int>(), pybind11::arg("gbid") );

		cl.def_readwrite("osi_points_", &roadmanager::LaneBoundaryOSI::osi_points_);
		cl.def("SetGlobalId", (void (roadmanager::LaneBoundaryOSI::*)()) &roadmanager::LaneBoundaryOSI::SetGlobalId, "C++: roadmanager::LaneBoundaryOSI::SetGlobalId() --> void");
		cl.def("GetGlobalId", (int (roadmanager::LaneBoundaryOSI::*)()) &roadmanager::LaneBoundaryOSI::GetGlobalId, "C++: roadmanager::LaneBoundaryOSI::GetGlobalId() --> int");
		cl.def("GetOSIPoints", (class roadmanager::OSIPoints * (roadmanager::LaneBoundaryOSI::*)()) &roadmanager::LaneBoundaryOSI::GetOSIPoints, "C++: roadmanager::LaneBoundaryOSI::GetOSIPoints() --> class roadmanager::OSIPoints *", pybind11::return_value_policy::automatic);
	}
	std::cout << "B15_[roadmanager::RoadMarkInfo] ";
	{ // roadmanager::RoadMarkInfo file: line:339
		pybind11::class_<roadmanager::RoadMarkInfo, std::shared_ptr<roadmanager::RoadMarkInfo>> cl(M("roadmanager"), "RoadMarkInfo", "");
		cl.def( pybind11::init( [](){ return new roadmanager::RoadMarkInfo(); } ) );
		cl.def_readwrite("roadmark_idx_", &roadmanager::RoadMarkInfo::roadmark_idx_);
		cl.def_readwrite("roadmarkline_idx_", &roadmanager::RoadMarkInfo::roadmarkline_idx_);
	}
	std::cout << "B16_[roadmanager::LaneRoadMarkTypeLine] ";
	{ // roadmanager::LaneRoadMarkTypeLine file: line:345
		pybind11::class_<roadmanager::LaneRoadMarkTypeLine, std::shared_ptr<roadmanager::LaneRoadMarkTypeLine>> cl(M("roadmanager"), "LaneRoadMarkTypeLine", "");
		cl.def( pybind11::init<double, double, double, double, enum roadmanager::LaneRoadMarkTypeLine::RoadMarkTypeLineRule, double>(), pybind11::arg("length"), pybind11::arg("space"), pybind11::arg("t_offset"), pybind11::arg("s_offset"), pybind11::arg("rule"), pybind11::arg("width") );


		pybind11::enum_<roadmanager::LaneRoadMarkTypeLine::RoadMarkTypeLineRule>(cl, "RoadMarkTypeLineRule", pybind11::arithmetic(), "")
			.value("NO_PASSING", roadmanager::LaneRoadMarkTypeLine::NO_PASSING)
			.value("CAUTION", roadmanager::LaneRoadMarkTypeLine::CAUTION)
			.value("NONE", roadmanager::LaneRoadMarkTypeLine::NONE)
			.export_values();

		cl.def_readwrite("osi_points_", &roadmanager::LaneRoadMarkTypeLine::osi_points_);
		cl.def("GetSOffset", (double (roadmanager::LaneRoadMarkTypeLine::*)()) &roadmanager::LaneRoadMarkTypeLine::GetSOffset, "C++: roadmanager::LaneRoadMarkTypeLine::GetSOffset() --> double");
		cl.def("GetTOffset", (double (roadmanager::LaneRoadMarkTypeLine::*)()) &roadmanager::LaneRoadMarkTypeLine::GetTOffset, "C++: roadmanager::LaneRoadMarkTypeLine::GetTOffset() --> double");
		cl.def("GetLength", (double (roadmanager::LaneRoadMarkTypeLine::*)()) &roadmanager::LaneRoadMarkTypeLine::GetLength, "C++: roadmanager::LaneRoadMarkTypeLine::GetLength() --> double");
		cl.def("GetSpace", (double (roadmanager::LaneRoadMarkTypeLine::*)()) &roadmanager::LaneRoadMarkTypeLine::GetSpace, "C++: roadmanager::LaneRoadMarkTypeLine::GetSpace() --> double");
		cl.def("GetWidth", (double (roadmanager::LaneRoadMarkTypeLine::*)()) &roadmanager::LaneRoadMarkTypeLine::GetWidth, "C++: roadmanager::LaneRoadMarkTypeLine::GetWidth() --> double");
		cl.def("GetOSIPoints", (class roadmanager::OSIPoints * (roadmanager::LaneRoadMarkTypeLine::*)()) &roadmanager::LaneRoadMarkTypeLine::GetOSIPoints, "C++: roadmanager::LaneRoadMarkTypeLine::GetOSIPoints() --> class roadmanager::OSIPoints *", pybind11::return_value_policy::automatic);
		cl.def("SetGlobalId", (void (roadmanager::LaneRoadMarkTypeLine::*)()) &roadmanager::LaneRoadMarkTypeLine::SetGlobalId, "C++: roadmanager::LaneRoadMarkTypeLine::SetGlobalId() --> void");
		cl.def("GetGlobalId", (int (roadmanager::LaneRoadMarkTypeLine::*)()) &roadmanager::LaneRoadMarkTypeLine::GetGlobalId, "C++: roadmanager::LaneRoadMarkTypeLine::GetGlobalId() --> int");
	}
	std::cout << "B17_[roadmanager::LaneRoadMarkType] ";
	{ // roadmanager::LaneRoadMarkType file: line:378
		pybind11::class_<roadmanager::LaneRoadMarkType, std::shared_ptr<roadmanager::LaneRoadMarkType>> cl(M("roadmanager"), "LaneRoadMarkType", "");
		cl.def( pybind11::init( [](roadmanager::LaneRoadMarkType const &o){ return new roadmanager::LaneRoadMarkType(o); } ) );
		cl.def("AddLine", (void (roadmanager::LaneRoadMarkType::*)(class roadmanager::LaneRoadMarkTypeLine *)) &roadmanager::LaneRoadMarkType::AddLine, "C++: roadmanager::LaneRoadMarkType::AddLine(class roadmanager::LaneRoadMarkTypeLine *) --> void", pybind11::arg("lane_roadMarkTypeLine"));
		cl.def("GetWidth", (double (roadmanager::LaneRoadMarkType::*)()) &roadmanager::LaneRoadMarkType::GetWidth, "C++: roadmanager::LaneRoadMarkType::GetWidth() --> double");
		cl.def("GetLaneRoadMarkTypeLineByIdx", (class roadmanager::LaneRoadMarkTypeLine * (roadmanager::LaneRoadMarkType::*)(int)) &roadmanager::LaneRoadMarkType::GetLaneRoadMarkTypeLineByIdx, "C++: roadmanager::LaneRoadMarkType::GetLaneRoadMarkTypeLineByIdx(int) --> class roadmanager::LaneRoadMarkTypeLine *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetNumberOfRoadMarkTypeLines", (int (roadmanager::LaneRoadMarkType::*)()) &roadmanager::LaneRoadMarkType::GetNumberOfRoadMarkTypeLines, "C++: roadmanager::LaneRoadMarkType::GetNumberOfRoadMarkTypeLines() --> int");
	}
	std::cout << "B18_[roadmanager::LaneRoadMark] ";
	{ // roadmanager::LaneRoadMark file: line:395
		pybind11::class_<roadmanager::LaneRoadMark, std::shared_ptr<roadmanager::LaneRoadMark>> cl(M("roadmanager"), "LaneRoadMark", "");
		cl.def( pybind11::init<double, enum roadmanager::LaneRoadMark::RoadMarkType, enum roadmanager::LaneRoadMark::RoadMarkWeight, enum roadmanager::LaneRoadMark::RoadMarkColor, enum roadmanager::LaneRoadMark::RoadMarkMaterial, enum roadmanager::LaneRoadMark::RoadMarkLaneChange, double, double>(), pybind11::arg("s_offset"), pybind11::arg("type"), pybind11::arg("weight"), pybind11::arg("color"), pybind11::arg("material"), pybind11::arg("lane_change"), pybind11::arg("width"), pybind11::arg("height") );

		cl.def( pybind11::init( [](roadmanager::LaneRoadMark const &o){ return new roadmanager::LaneRoadMark(o); } ) );

		pybind11::enum_<roadmanager::LaneRoadMark::RoadMarkType>(cl, "RoadMarkType", pybind11::arithmetic(), "")
			.value("NONE_TYPE", roadmanager::LaneRoadMark::NONE_TYPE)
			.value("SOLID", roadmanager::LaneRoadMark::SOLID)
			.value("BROKEN", roadmanager::LaneRoadMark::BROKEN)
			.value("SOLID_SOLID", roadmanager::LaneRoadMark::SOLID_SOLID)
			.value("SOLID_BROKEN", roadmanager::LaneRoadMark::SOLID_BROKEN)
			.value("BROKEN_SOLID", roadmanager::LaneRoadMark::BROKEN_SOLID)
			.value("BROKEN_BROKEN", roadmanager::LaneRoadMark::BROKEN_BROKEN)
			.value("BOTTS_DOTS", roadmanager::LaneRoadMark::BOTTS_DOTS)
			.value("GRASS", roadmanager::LaneRoadMark::GRASS)
			.value("CURB", roadmanager::LaneRoadMark::CURB)
			.export_values();


		pybind11::enum_<roadmanager::LaneRoadMark::RoadMarkWeight>(cl, "RoadMarkWeight", pybind11::arithmetic(), "")
			.value("STANDARD", roadmanager::LaneRoadMark::STANDARD)
			.value("BOLD", roadmanager::LaneRoadMark::BOLD)
			.export_values();


		pybind11::enum_<roadmanager::LaneRoadMark::RoadMarkColor>(cl, "RoadMarkColor", pybind11::arithmetic(), "")
			.value("STANDARD_COLOR", roadmanager::LaneRoadMark::STANDARD_COLOR)
			.value("BLUE", roadmanager::LaneRoadMark::BLUE)
			.value("GREEN", roadmanager::LaneRoadMark::GREEN)
			.value("RED", roadmanager::LaneRoadMark::RED)
			.value("WHITE", roadmanager::LaneRoadMark::WHITE)
			.value("YELLOW", roadmanager::LaneRoadMark::YELLOW)
			.export_values();


		pybind11::enum_<roadmanager::LaneRoadMark::RoadMarkMaterial>(cl, "RoadMarkMaterial", pybind11::arithmetic(), "")
			.value("STANDARD_MATERIAL", roadmanager::LaneRoadMark::STANDARD_MATERIAL)
			.export_values();


		pybind11::enum_<roadmanager::LaneRoadMark::RoadMarkLaneChange>(cl, "RoadMarkLaneChange", pybind11::arithmetic(), "")
			.value("INCREASE", roadmanager::LaneRoadMark::INCREASE)
			.value("DECREASE", roadmanager::LaneRoadMark::DECREASE)
			.value("BOTH", roadmanager::LaneRoadMark::BOTH)
			.value("NONE_LANECHANGE", roadmanager::LaneRoadMark::NONE_LANECHANGE)
			.export_values();

		cl.def("AddType", (void (roadmanager::LaneRoadMark::*)(class roadmanager::LaneRoadMarkType *)) &roadmanager::LaneRoadMark::AddType, "C++: roadmanager::LaneRoadMark::AddType(class roadmanager::LaneRoadMarkType *) --> void", pybind11::arg("lane_roadMarkType"));
		cl.def("GetSOffset", (double (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetSOffset, "C++: roadmanager::LaneRoadMark::GetSOffset() --> double");
		cl.def("GetWidth", (double (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetWidth, "C++: roadmanager::LaneRoadMark::GetWidth() --> double");
		cl.def("GetHeight", (double (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetHeight, "C++: roadmanager::LaneRoadMark::GetHeight() --> double");
		cl.def("GetType", (enum roadmanager::LaneRoadMark::RoadMarkType (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetType, "C++: roadmanager::LaneRoadMark::GetType() --> enum roadmanager::LaneRoadMark::RoadMarkType");
		cl.def("GetWeight", (enum roadmanager::LaneRoadMark::RoadMarkWeight (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetWeight, "C++: roadmanager::LaneRoadMark::GetWeight() --> enum roadmanager::LaneRoadMark::RoadMarkWeight");
		cl.def("GetColor", (enum roadmanager::LaneRoadMark::RoadMarkColor (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetColor, "C++: roadmanager::LaneRoadMark::GetColor() --> enum roadmanager::LaneRoadMark::RoadMarkColor");
		cl.def("GetMaterial", (enum roadmanager::LaneRoadMark::RoadMarkMaterial (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetMaterial, "C++: roadmanager::LaneRoadMark::GetMaterial() --> enum roadmanager::LaneRoadMark::RoadMarkMaterial");
		cl.def("GetLaneChange", (enum roadmanager::LaneRoadMark::RoadMarkLaneChange (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetLaneChange, "C++: roadmanager::LaneRoadMark::GetLaneChange() --> enum roadmanager::LaneRoadMark::RoadMarkLaneChange");
		cl.def("GetNumberOfRoadMarkTypes", (int (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetNumberOfRoadMarkTypes, "C++: roadmanager::LaneRoadMark::GetNumberOfRoadMarkTypes() --> int");
		cl.def("GetLaneRoadMarkTypeByIdx", (class roadmanager::LaneRoadMarkType * (roadmanager::LaneRoadMark::*)(int)) &roadmanager::LaneRoadMark::GetLaneRoadMarkTypeByIdx, "C++: roadmanager::LaneRoadMark::GetLaneRoadMarkTypeByIdx(int) --> class roadmanager::LaneRoadMarkType *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
	}
	std::cout << "B19_[roadmanager::LaneOffset] ";
	{ // roadmanager::LaneOffset file: line:472
		pybind11::class_<roadmanager::LaneOffset, std::shared_ptr<roadmanager::LaneOffset>> cl(M("roadmanager"), "LaneOffset", "");
		cl.def( pybind11::init( [](){ return new roadmanager::LaneOffset(); } ) );
		cl.def( pybind11::init<double, double, double, double, double>(), pybind11::arg("s"), pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d") );

		cl.def("Set", (void (roadmanager::LaneOffset::*)(double, double, double, double, double)) &roadmanager::LaneOffset::Set, "C++: roadmanager::LaneOffset::Set(double, double, double, double, double) --> void", pybind11::arg("s"), pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d"));
		cl.def("SetLength", (void (roadmanager::LaneOffset::*)(double)) &roadmanager::LaneOffset::SetLength, "C++: roadmanager::LaneOffset::SetLength(double) --> void", pybind11::arg("length"));
		cl.def("GetS", (double (roadmanager::LaneOffset::*)()) &roadmanager::LaneOffset::GetS, "C++: roadmanager::LaneOffset::GetS() --> double");
		cl.def("GetPolynomial", (class roadmanager::Polynomial (roadmanager::LaneOffset::*)()) &roadmanager::LaneOffset::GetPolynomial, "C++: roadmanager::LaneOffset::GetPolynomial() --> class roadmanager::Polynomial");
		cl.def("GetLength", (double (roadmanager::LaneOffset::*)()) &roadmanager::LaneOffset::GetLength, "C++: roadmanager::LaneOffset::GetLength() --> double");
		cl.def("GetLaneOffset", (double (roadmanager::LaneOffset::*)(double)) &roadmanager::LaneOffset::GetLaneOffset, "C++: roadmanager::LaneOffset::GetLaneOffset(double) --> double", pybind11::arg("s"));
		cl.def("GetLaneOffsetPrim", (double (roadmanager::LaneOffset::*)(double)) &roadmanager::LaneOffset::GetLaneOffsetPrim, "C++: roadmanager::LaneOffset::GetLaneOffsetPrim(double) --> double", pybind11::arg("s"));
		cl.def("Print", (void (roadmanager::LaneOffset::*)()) &roadmanager::LaneOffset::Print, "C++: roadmanager::LaneOffset::Print() --> void");
	}
	std::cout << "B20_[roadmanager::Lane] ";
	{ // roadmanager::Lane file: line:501
		pybind11::class_<roadmanager::Lane, std::shared_ptr<roadmanager::Lane>> cl(M("roadmanager"), "Lane", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Lane(); } ) );
		cl.def( pybind11::init<int, roadmanager::Lane::LaneType>(), pybind11::arg("id"), pybind11::arg("type") );

		cl.def( pybind11::init( [](roadmanager::Lane const &o){ return new roadmanager::Lane(o); } ) );

		pybind11::enum_<roadmanager::Lane::LanePosition>(cl, "LanePosition", pybind11::arithmetic(), "")
			.value("LANE_POS_CENTER", roadmanager::Lane::LANE_POS_CENTER)
			.value("LANE_POS_LEFT", roadmanager::Lane::LANE_POS_LEFT)
			.value("LANE_POS_RIGHT", roadmanager::Lane::LANE_POS_RIGHT)
			.export_values();

		cl.def_readwrite("osi_points_", &roadmanager::Lane::osi_points_);
		cl.def("GetId", (int (roadmanager::Lane::*)()) &roadmanager::Lane::GetId, "C++: roadmanager::Lane::GetId() --> int");
		cl.def("GetOffsetFromRef", (double (roadmanager::Lane::*)()) &roadmanager::Lane::GetOffsetFromRef, "C++: roadmanager::Lane::GetOffsetFromRef() --> double");
		cl.def("GetLaneType", (roadmanager::Lane::LaneType (roadmanager::Lane::*)()) &roadmanager::Lane::GetLaneType, "C++: roadmanager::Lane::GetLaneType() --> roadmanager::Lane::LaneType");
		cl.def("GetGlobalId", (int (roadmanager::Lane::*)()) &roadmanager::Lane::GetGlobalId, "C++: roadmanager::Lane::GetGlobalId() --> int");
		cl.def("AddLink", (void (roadmanager::Lane::*)(class roadmanager::LaneLink *)) &roadmanager::Lane::AddLink, "C++: roadmanager::Lane::AddLink(class roadmanager::LaneLink *) --> void", pybind11::arg("lane_link"));
		cl.def("AddLaneWidth", (void (roadmanager::Lane::*)(class roadmanager::LaneWidth *)) &roadmanager::Lane::AddLaneWidth, "C++: roadmanager::Lane::AddLaneWidth(class roadmanager::LaneWidth *) --> void", pybind11::arg("lane_width"));
		cl.def("AddLaneRoadMark", (void (roadmanager::Lane::*)(class roadmanager::LaneRoadMark *)) &roadmanager::Lane::AddLaneRoadMark, "C++: roadmanager::Lane::AddLaneRoadMark(class roadmanager::LaneRoadMark *) --> void", pybind11::arg("lane_roadMark"));
		cl.def("GetNumberOfRoadMarks", (int (roadmanager::Lane::*)()) &roadmanager::Lane::GetNumberOfRoadMarks, "C++: roadmanager::Lane::GetNumberOfRoadMarks() --> int");
		cl.def("GetNumberOfLinks", (int (roadmanager::Lane::*)()) &roadmanager::Lane::GetNumberOfLinks, "C++: roadmanager::Lane::GetNumberOfLinks() --> int");
		cl.def("GetNumberOfLaneWidths", (int (roadmanager::Lane::*)()) &roadmanager::Lane::GetNumberOfLaneWidths, "C++: roadmanager::Lane::GetNumberOfLaneWidths() --> int");
		cl.def("GetLink", (class roadmanager::LaneLink * (roadmanager::Lane::*)(roadmanager::LinkType)) &roadmanager::Lane::GetLink, "C++: roadmanager::Lane::GetLink(roadmanager::LinkType) --> class roadmanager::LaneLink *", pybind11::return_value_policy::automatic, pybind11::arg("type"));
		cl.def("GetWidthByIndex", (class roadmanager::LaneWidth * (roadmanager::Lane::*)(int)) &roadmanager::Lane::GetWidthByIndex, "C++: roadmanager::Lane::GetWidthByIndex(int) --> class roadmanager::LaneWidth *", pybind11::return_value_policy::automatic, pybind11::arg("index"));
		cl.def("GetWidthByS", (class roadmanager::LaneWidth * (roadmanager::Lane::*)(double)) &roadmanager::Lane::GetWidthByS, "C++: roadmanager::Lane::GetWidthByS(double) --> class roadmanager::LaneWidth *", pybind11::return_value_policy::automatic, pybind11::arg("s"));
		cl.def("GetLaneRoadMarkByIdx", (class roadmanager::LaneRoadMark * (roadmanager::Lane::*)(int)) &roadmanager::Lane::GetLaneRoadMarkByIdx, "C++: roadmanager::Lane::GetLaneRoadMarkByIdx(int) --> class roadmanager::LaneRoadMark *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetRoadMarkInfoByS", (struct roadmanager::RoadMarkInfo (roadmanager::Lane::*)(int, int, double)) &roadmanager::Lane::GetRoadMarkInfoByS, "C++: roadmanager::Lane::GetRoadMarkInfoByS(int, int, double) --> struct roadmanager::RoadMarkInfo", pybind11::arg("track_id"), pybind11::arg("lane_id"), pybind11::arg("s"));
		cl.def("GetOSIPoints", (class roadmanager::OSIPoints * (roadmanager::Lane::*)()) &roadmanager::Lane::GetOSIPoints, "C++: roadmanager::Lane::GetOSIPoints() --> class roadmanager::OSIPoints *", pybind11::return_value_policy::automatic);
		cl.def("GetLaneBoundary", (class roadmanager::LaneBoundaryOSI * (roadmanager::Lane::*)()) &roadmanager::Lane::GetLaneBoundary, "C++: roadmanager::Lane::GetLaneBoundary() --> class roadmanager::LaneBoundaryOSI *", pybind11::return_value_policy::automatic);
		cl.def("GetLaneBoundaryGlobalId", (int (roadmanager::Lane::*)()) &roadmanager::Lane::GetLaneBoundaryGlobalId, "C++: roadmanager::Lane::GetLaneBoundaryGlobalId() --> int");
		cl.def("SetGlobalId", (void (roadmanager::Lane::*)()) &roadmanager::Lane::SetGlobalId, "C++: roadmanager::Lane::SetGlobalId() --> void");
		cl.def("SetLaneBoundary", (void (roadmanager::Lane::*)(class roadmanager::LaneBoundaryOSI *)) &roadmanager::Lane::SetLaneBoundary, "C++: roadmanager::Lane::SetLaneBoundary(class roadmanager::LaneBoundaryOSI *) --> void", pybind11::arg("lane_boundary"));
		cl.def("SetOffsetFromRef", (void (roadmanager::Lane::*)(double)) &roadmanager::Lane::SetOffsetFromRef, "C++: roadmanager::Lane::SetOffsetFromRef(double) --> void", pybind11::arg("offset"));
		cl.def("IsType", (bool (roadmanager::Lane::*)(roadmanager::Lane::LaneType)) &roadmanager::Lane::IsType, "C++: roadmanager::Lane::IsType(roadmanager::Lane::LaneType) --> bool", pybind11::arg("type"));
		cl.def("IsCenter", (bool (roadmanager::Lane::*)()) &roadmanager::Lane::IsCenter, "C++: roadmanager::Lane::IsCenter() --> bool");
		cl.def("IsDriving", (bool (roadmanager::Lane::*)()) &roadmanager::Lane::IsDriving, "C++: roadmanager::Lane::IsDriving() --> bool");
		cl.def("IsOSIIntersection", (bool (roadmanager::Lane::*)()) &roadmanager::Lane::IsOSIIntersection, "C++: roadmanager::Lane::IsOSIIntersection() --> bool");
		cl.def("SetOSIIntersection", (void (roadmanager::Lane::*)(int)) &roadmanager::Lane::SetOSIIntersection, "C++: roadmanager::Lane::SetOSIIntersection(int) --> void", pybind11::arg("is_osi_intersection"));
		cl.def("GetOSIIntersectionId", (int (roadmanager::Lane::*)()) &roadmanager::Lane::GetOSIIntersectionId, "C++: roadmanager::Lane::GetOSIIntersectionId() --> int");
		cl.def("Print", (void (roadmanager::Lane::*)()) &roadmanager::Lane::Print, "C++: roadmanager::Lane::Print() --> void");
	}
}


// File: unknown/unknown_3.cpp
#include <iostream> // --trace
#include <iterator> // __gnu_cxx::__normal_iterator
#include <memory> // std::allocator
#include <ostream> // std::basic_ostream
#include <sstream> // __str__
#include <string> // std::basic_string
#include <string> // std::char_traits

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "esminiLib.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown_3(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B21_[roadmanager::LaneSection] ";
	{ // roadmanager::LaneSection file: line:606
		pybind11::class_<roadmanager::LaneSection, std::shared_ptr<roadmanager::LaneSection>> cl(M("roadmanager"), "LaneSection", "");
		cl.def( pybind11::init<double>(), pybind11::arg("s") );

		cl.def( pybind11::init( [](roadmanager::LaneSection const &o){ return new roadmanager::LaneSection(o); } ) );
		cl.def("AddLane", (void (roadmanager::LaneSection::*)(class roadmanager::Lane *)) &roadmanager::LaneSection::AddLane, "C++: roadmanager::LaneSection::AddLane(class roadmanager::Lane *) --> void", pybind11::arg("lane"));
		cl.def("GetS", (double (roadmanager::LaneSection::*)()) &roadmanager::LaneSection::GetS, "C++: roadmanager::LaneSection::GetS() --> double");
		cl.def("GetLaneByIdx", (class roadmanager::Lane * (roadmanager::LaneSection::*)(int)) &roadmanager::LaneSection::GetLaneByIdx, "C++: roadmanager::LaneSection::GetLaneByIdx(int) --> class roadmanager::Lane *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetLaneById", (class roadmanager::Lane * (roadmanager::LaneSection::*)(int)) &roadmanager::LaneSection::GetLaneById, "C++: roadmanager::LaneSection::GetLaneById(int) --> class roadmanager::Lane *", pybind11::return_value_policy::automatic, pybind11::arg("id"));
		cl.def("GetLaneIdByIdx", (int (roadmanager::LaneSection::*)(int)) &roadmanager::LaneSection::GetLaneIdByIdx, "C++: roadmanager::LaneSection::GetLaneIdByIdx(int) --> int", pybind11::arg("idx"));
		cl.def("GetLaneIdxById", (int (roadmanager::LaneSection::*)(int)) &roadmanager::LaneSection::GetLaneIdxById, "C++: roadmanager::LaneSection::GetLaneIdxById(int) --> int", pybind11::arg("id"));
		cl.def("IsOSILaneById", (bool (roadmanager::LaneSection::*)(int)) &roadmanager::LaneSection::IsOSILaneById, "C++: roadmanager::LaneSection::IsOSILaneById(int) --> bool", pybind11::arg("id"));
		cl.def("GetLaneGlobalIdByIdx", (int (roadmanager::LaneSection::*)(int)) &roadmanager::LaneSection::GetLaneGlobalIdByIdx, "C++: roadmanager::LaneSection::GetLaneGlobalIdByIdx(int) --> int", pybind11::arg("idx"));
		cl.def("GetLaneGlobalIdById", (int (roadmanager::LaneSection::*)(int)) &roadmanager::LaneSection::GetLaneGlobalIdById, "C++: roadmanager::LaneSection::GetLaneGlobalIdById(int) --> int", pybind11::arg("id"));
		cl.def("GetOuterOffset", (double (roadmanager::LaneSection::*)(double, int)) &roadmanager::LaneSection::GetOuterOffset, "C++: roadmanager::LaneSection::GetOuterOffset(double, int) --> double", pybind11::arg("s"), pybind11::arg("lane_id"));
		cl.def("GetWidth", (double (roadmanager::LaneSection::*)(double, int)) &roadmanager::LaneSection::GetWidth, "C++: roadmanager::LaneSection::GetWidth(double, int) --> double", pybind11::arg("s"), pybind11::arg("lane_id"));
		cl.def("GetClosestLaneIdx", [](roadmanager::LaneSection &o, double const & a0, double const & a1, double & a2, bool const & a3) -> int { return o.GetClosestLaneIdx(a0, a1, a2, a3); }, "", pybind11::arg("s"), pybind11::arg("t"), pybind11::arg("offset"), pybind11::arg("noZeroWidth"));
		cl.def("GetClosestLaneIdx", (int (roadmanager::LaneSection::*)(double, double, double &, bool, int)) &roadmanager::LaneSection::GetClosestLaneIdx, "C++: roadmanager::LaneSection::GetClosestLaneIdx(double, double, double &, bool, int) --> int", pybind11::arg("s"), pybind11::arg("t"), pybind11::arg("offset"), pybind11::arg("noZeroWidth"), pybind11::arg("laneTypeMask"));
		cl.def("GetCenterOffset", (double (roadmanager::LaneSection::*)(double, int)) &roadmanager::LaneSection::GetCenterOffset, "		Get lateral position of lane center, from road reference lane (lane id=0)\n		Example: If lane id 1 is 5 m wide and lane id 2 is 4 m wide, then\n				lane 1 center offset is 5/2 = 2.5 and lane 2 center offset is 5 + 4/2 = 7\n		\n\n distance along the road segment\n		\n\n lane specifier, starting from center -1, -2, ... is on the right side, 1, 2... on the left\n\nC++: roadmanager::LaneSection::GetCenterOffset(double, int) --> double", pybind11::arg("s"), pybind11::arg("lane_id"));
		cl.def("GetOuterOffsetHeading", (double (roadmanager::LaneSection::*)(double, int)) &roadmanager::LaneSection::GetOuterOffsetHeading, "C++: roadmanager::LaneSection::GetOuterOffsetHeading(double, int) --> double", pybind11::arg("s"), pybind11::arg("lane_id"));
		cl.def("GetCenterOffsetHeading", (double (roadmanager::LaneSection::*)(double, int)) &roadmanager::LaneSection::GetCenterOffsetHeading, "C++: roadmanager::LaneSection::GetCenterOffsetHeading(double, int) --> double", pybind11::arg("s"), pybind11::arg("lane_id"));
		cl.def("GetLength", (double (roadmanager::LaneSection::*)()) &roadmanager::LaneSection::GetLength, "C++: roadmanager::LaneSection::GetLength() --> double");
		cl.def("GetNumberOfLanes", (int (roadmanager::LaneSection::*)()) &roadmanager::LaneSection::GetNumberOfLanes, "C++: roadmanager::LaneSection::GetNumberOfLanes() --> int");
		cl.def("GetNumberOfDrivingLanes", (int (roadmanager::LaneSection::*)()) &roadmanager::LaneSection::GetNumberOfDrivingLanes, "C++: roadmanager::LaneSection::GetNumberOfDrivingLanes() --> int");
		cl.def("GetNumberOfDrivingLanesSide", (int (roadmanager::LaneSection::*)(int)) &roadmanager::LaneSection::GetNumberOfDrivingLanesSide, "C++: roadmanager::LaneSection::GetNumberOfDrivingLanesSide(int) --> int", pybind11::arg("side"));
		cl.def("GetNUmberOfLanesRight", (int (roadmanager::LaneSection::*)()) &roadmanager::LaneSection::GetNUmberOfLanesRight, "C++: roadmanager::LaneSection::GetNUmberOfLanesRight() --> int");
		cl.def("GetNUmberOfLanesLeft", (int (roadmanager::LaneSection::*)()) &roadmanager::LaneSection::GetNUmberOfLanesLeft, "C++: roadmanager::LaneSection::GetNUmberOfLanesLeft() --> int");
		cl.def("SetLength", (void (roadmanager::LaneSection::*)(double)) &roadmanager::LaneSection::SetLength, "C++: roadmanager::LaneSection::SetLength(double) --> void", pybind11::arg("length"));
		cl.def("GetConnectingLaneId", (int (roadmanager::LaneSection::*)(int, roadmanager::LinkType)) &roadmanager::LaneSection::GetConnectingLaneId, "C++: roadmanager::LaneSection::GetConnectingLaneId(int, roadmanager::LinkType) --> int", pybind11::arg("incoming_lane_id"), pybind11::arg("link_type"));
		cl.def("GetWidthBetweenLanes", (double (roadmanager::LaneSection::*)(int, int, double)) &roadmanager::LaneSection::GetWidthBetweenLanes, "C++: roadmanager::LaneSection::GetWidthBetweenLanes(int, int, double) --> double", pybind11::arg("lane_id1"), pybind11::arg("lane_id2"), pybind11::arg("s"));
		cl.def("GetOffsetBetweenLanes", (double (roadmanager::LaneSection::*)(int, int, double)) &roadmanager::LaneSection::GetOffsetBetweenLanes, "C++: roadmanager::LaneSection::GetOffsetBetweenLanes(int, int, double) --> double", pybind11::arg("lane_id1"), pybind11::arg("lane_id2"), pybind11::arg("s"));
		cl.def("Print", (void (roadmanager::LaneSection::*)()) &roadmanager::LaneSection::Print, "C++: roadmanager::LaneSection::Print() --> void");
	}
	std::cout << "B22_[roadmanager::ContactPointType] ";
	// roadmanager::ContactPointType file: line:651
	pybind11::enum_<roadmanager::ContactPointType>(M("roadmanager"), "ContactPointType", pybind11::arithmetic(), "")
		.value("CONTACT_POINT_UNKNOWN", roadmanager::CONTACT_POINT_UNKNOWN)
		.value("CONTACT_POINT_START", roadmanager::CONTACT_POINT_START)
		.value("CONTACT_POINT_END", roadmanager::CONTACT_POINT_END)
		.value("CONTACT_POINT_NONE", roadmanager::CONTACT_POINT_NONE)
		.export_values();

;

	std::cout << "B23_[roadmanager::RoadLink] ";
	{ // roadmanager::RoadLink file: line:659
		pybind11::class_<roadmanager::RoadLink, std::shared_ptr<roadmanager::RoadLink>> cl(M("roadmanager"), "RoadLink", "");
		cl.def( pybind11::init( [](){ return new roadmanager::RoadLink(); } ) );
		cl.def( pybind11::init<roadmanager::LinkType, roadmanager::RoadLink::ElementType, int, enum roadmanager::ContactPointType>(), pybind11::arg("type"), pybind11::arg("element_type"), pybind11::arg("element_id"), pybind11::arg("contact_point_type") );

		cl.def("GetElementId", (int (roadmanager::RoadLink::*)()) &roadmanager::RoadLink::GetElementId, "C++: roadmanager::RoadLink::GetElementId() --> int");
		cl.def("GetType", (roadmanager::LinkType (roadmanager::RoadLink::*)()) &roadmanager::RoadLink::GetType, "C++: roadmanager::RoadLink::GetType() --> roadmanager::LinkType");
		cl.def("GetElementType", (roadmanager::RoadLink::ElementType (roadmanager::RoadLink::*)()) &roadmanager::RoadLink::GetElementType, "C++: roadmanager::RoadLink::GetElementType() --> roadmanager::RoadLink::ElementType");
		cl.def("GetContactPointType", (enum roadmanager::ContactPointType (roadmanager::RoadLink::*)()) &roadmanager::RoadLink::GetContactPointType, "C++: roadmanager::RoadLink::GetContactPointType() --> enum roadmanager::ContactPointType");
		cl.def("Print", (void (roadmanager::RoadLink::*)()) &roadmanager::RoadLink::Print, "C++: roadmanager::RoadLink::Print() --> void");
	}
	std::cout << "B24_[roadmanager::LaneInfo] ";
	{ // roadmanager::LaneInfo file: line:688
		pybind11::class_<roadmanager::LaneInfo, std::shared_ptr<roadmanager::LaneInfo>> cl(M("roadmanager"), "LaneInfo", "");
		cl.def( pybind11::init( [](){ return new roadmanager::LaneInfo(); } ) );
		cl.def_readwrite("lane_section_idx_", &roadmanager::LaneInfo::lane_section_idx_);
		cl.def_readwrite("lane_id_", &roadmanager::LaneInfo::lane_id_);
	}
	std::cout << "B25_[roadmanager::RoadObject] ";
	{ // roadmanager::RoadObject file: line:700
		pybind11::class_<roadmanager::RoadObject, std::shared_ptr<roadmanager::RoadObject>> cl(M("roadmanager"), "RoadObject", "");
		cl.def( pybind11::init( [](roadmanager::RoadObject const &o){ return new roadmanager::RoadObject(o); } ) );
		cl.def( pybind11::init( [](){ return new roadmanager::RoadObject(); } ) );

		pybind11::enum_<roadmanager::RoadObject::Orientation>(cl, "Orientation", pybind11::arithmetic(), "")
			.value("POSITIVE", roadmanager::RoadObject::POSITIVE)
			.value("NEGATIVE", roadmanager::RoadObject::NEGATIVE)
			.value("NONE", roadmanager::RoadObject::NONE)
			.export_values();

		cl.def_readwrite("validity_", &roadmanager::RoadObject::validity_);
		cl.def("assign", (class roadmanager::RoadObject & (roadmanager::RoadObject::*)(const class roadmanager::RoadObject &)) &roadmanager::RoadObject::operator=, "C++: roadmanager::RoadObject::operator=(const class roadmanager::RoadObject &) --> class roadmanager::RoadObject &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B26_[roadmanager::Signal] ";
	{ // roadmanager::Signal file: line:713
		pybind11::class_<roadmanager::Signal, std::shared_ptr<roadmanager::Signal>, roadmanager::RoadObject> cl(M("roadmanager"), "Signal", "");
		cl.def( pybind11::init( [](roadmanager::Signal const &o){ return new roadmanager::Signal(o); } ) );

		pybind11::enum_<roadmanager::Signal::Type>(cl, "Type", pybind11::arithmetic(), "")
			.value("TYPE_UNKNOWN", roadmanager::Signal::TYPE_UNKNOWN)
			.value("TYPE_OTHER", roadmanager::Signal::TYPE_OTHER)
			.value("TYPE_DANGER_SPOT", roadmanager::Signal::TYPE_DANGER_SPOT)
			.value("TYPE_ZEBRA_CROSSING", roadmanager::Signal::TYPE_ZEBRA_CROSSING)
			.value("TYPE_FLIGHT", roadmanager::Signal::TYPE_FLIGHT)
			.value("TYPE_CATTLE", roadmanager::Signal::TYPE_CATTLE)
			.value("TYPE_HORSE_RIDERS", roadmanager::Signal::TYPE_HORSE_RIDERS)
			.value("TYPE_AMPHIBIANS", roadmanager::Signal::TYPE_AMPHIBIANS)
			.value("TYPE_FALLING_ROCKS", roadmanager::Signal::TYPE_FALLING_ROCKS)
			.value("TYPE_SNOW_OR_ICE", roadmanager::Signal::TYPE_SNOW_OR_ICE)
			.value("TYPE_LOOSE_GRAVEL", roadmanager::Signal::TYPE_LOOSE_GRAVEL)
			.value("TYPE_WATERSIDE", roadmanager::Signal::TYPE_WATERSIDE)
			.value("TYPE_CLEARANCE", roadmanager::Signal::TYPE_CLEARANCE)
			.value("TYPE_MOVABLE_BRIDGE", roadmanager::Signal::TYPE_MOVABLE_BRIDGE)
			.value("TYPE_RIGHT_BEFORE_LEFT_NEXT_INTERSECTION", roadmanager::Signal::TYPE_RIGHT_BEFORE_LEFT_NEXT_INTERSECTION)
			.value("TYPE_TURN_LEFT", roadmanager::Signal::TYPE_TURN_LEFT)
			.value("TYPE_TURN_RIGHT", roadmanager::Signal::TYPE_TURN_RIGHT)
			.value("TYPE_DOUBLE_TURN_LEFT", roadmanager::Signal::TYPE_DOUBLE_TURN_LEFT)
			.value("TYPE_DOUBLE_TURN_RIGHT", roadmanager::Signal::TYPE_DOUBLE_TURN_RIGHT)
			.value("TYPE_HILL_DOWNWARDS", roadmanager::Signal::TYPE_HILL_DOWNWARDS)
			.value("TYPE_HILL_UPWARDS", roadmanager::Signal::TYPE_HILL_UPWARDS)
			.value("TYPE_UNEVEN_ROAD", roadmanager::Signal::TYPE_UNEVEN_ROAD)
			.value("TYPE_ROAD_SLIPPERY_WET_OR_DIRTY", roadmanager::Signal::TYPE_ROAD_SLIPPERY_WET_OR_DIRTY)
			.value("TYPE_SIDE_WINDS", roadmanager::Signal::TYPE_SIDE_WINDS)
			.value("TYPE_ROAD_NARROWING", roadmanager::Signal::TYPE_ROAD_NARROWING)
			.value("TYPE_ROAD_NARROWING_RIGHT", roadmanager::Signal::TYPE_ROAD_NARROWING_RIGHT)
			.value("TYPE_ROAD_NARROWING_LEFT", roadmanager::Signal::TYPE_ROAD_NARROWING_LEFT)
			.value("TYPE_ROAD_WORKS", roadmanager::Signal::TYPE_ROAD_WORKS)
			.value("TYPE_TRAFFIC_QUEUES", roadmanager::Signal::TYPE_TRAFFIC_QUEUES)
			.value("TYPE_TWO_WAY_TRAFFIC", roadmanager::Signal::TYPE_TWO_WAY_TRAFFIC)
			.value("TYPE_ATTENTION_TRAFFIC_LIGHT", roadmanager::Signal::TYPE_ATTENTION_TRAFFIC_LIGHT)
			.value("TYPE_PEDESTRIANS", roadmanager::Signal::TYPE_PEDESTRIANS)
			.value("TYPE_CHILDREN_CROSSING", roadmanager::Signal::TYPE_CHILDREN_CROSSING)
			.value("TYPE_CYCLE_ROUTE", roadmanager::Signal::TYPE_CYCLE_ROUTE)
			.value("TYPE_DEER_CROSSING", roadmanager::Signal::TYPE_DEER_CROSSING)
			.value("TYPE_UNGATED_LEVEL_CROSSING", roadmanager::Signal::TYPE_UNGATED_LEVEL_CROSSING)
			.value("TYPE_LEVEL_CROSSING_MARKER", roadmanager::Signal::TYPE_LEVEL_CROSSING_MARKER)
			.value("TYPE_RAILWAY_TRAFFIC_PRIORITY", roadmanager::Signal::TYPE_RAILWAY_TRAFFIC_PRIORITY)
			.value("TYPE_GIVE_WAY", roadmanager::Signal::TYPE_GIVE_WAY)
			.value("TYPE_STOP", roadmanager::Signal::TYPE_STOP)
			.value("TYPE_PRIORITY_TO_OPPOSITE_DIRECTION", roadmanager::Signal::TYPE_PRIORITY_TO_OPPOSITE_DIRECTION)
			.value("TYPE_PRIORITY_TO_OPPOSITE_DIRECTION_UPSIDE_DOWN", roadmanager::Signal::TYPE_PRIORITY_TO_OPPOSITE_DIRECTION_UPSIDE_DOWN)
			.value("TYPE_PRESCRIBED_LEFT_TURN", roadmanager::Signal::TYPE_PRESCRIBED_LEFT_TURN)
			.value("TYPE_PRESCRIBED_RIGHT_TURN", roadmanager::Signal::TYPE_PRESCRIBED_RIGHT_TURN)
			.value("TYPE_PRESCRIBED_STRAIGHT", roadmanager::Signal::TYPE_PRESCRIBED_STRAIGHT)
			.value("TYPE_PRESCRIBED_RIGHT_WAY", roadmanager::Signal::TYPE_PRESCRIBED_RIGHT_WAY)
			.value("TYPE_PRESCRIBED_LEFT_WAY", roadmanager::Signal::TYPE_PRESCRIBED_LEFT_WAY)
			.value("TYPE_PRESCRIBED_RIGHT_TURN_AND_STRAIGHT", roadmanager::Signal::TYPE_PRESCRIBED_RIGHT_TURN_AND_STRAIGHT)
			.value("TYPE_PRESCRIBED_LEFT_TURN_AND_STRAIGHT", roadmanager::Signal::TYPE_PRESCRIBED_LEFT_TURN_AND_STRAIGHT)
			.value("TYPE_PRESCRIBED_LEFT_TURN_AND_RIGHT_TURN", roadmanager::Signal::TYPE_PRESCRIBED_LEFT_TURN_AND_RIGHT_TURN)
			.value("TYPE_PRESCRIBED_LEFT_TURN_RIGHT_TURN_AND_STRAIGHT", roadmanager::Signal::TYPE_PRESCRIBED_LEFT_TURN_RIGHT_TURN_AND_STRAIGHT)
			.value("TYPE_ROUNDABOUT", roadmanager::Signal::TYPE_ROUNDABOUT)
			.value("TYPE_ONEWAY_LEFT", roadmanager::Signal::TYPE_ONEWAY_LEFT)
			.value("TYPE_ONEWAY_RIGHT", roadmanager::Signal::TYPE_ONEWAY_RIGHT)
			.value("TYPE_PASS_LEFT", roadmanager::Signal::TYPE_PASS_LEFT)
			.value("TYPE_PASS_RIGHT", roadmanager::Signal::TYPE_PASS_RIGHT)
			.value("TYPE_SIDE_LANE_OPEN_FOR_TRAFFIC", roadmanager::Signal::TYPE_SIDE_LANE_OPEN_FOR_TRAFFIC)
			.value("TYPE_SIDE_LANE_CLOSED_FOR_TRAFFIC", roadmanager::Signal::TYPE_SIDE_LANE_CLOSED_FOR_TRAFFIC)
			.value("TYPE_SIDE_LANE_CLOSING_FOR_TRAFFIC", roadmanager::Signal::TYPE_SIDE_LANE_CLOSING_FOR_TRAFFIC)
			.value("TYPE_BUS_STOP", roadmanager::Signal::TYPE_BUS_STOP)
			.value("TYPE_TAXI_STAND", roadmanager::Signal::TYPE_TAXI_STAND)
			.value("TYPE_BICYCLES_ONLY", roadmanager::Signal::TYPE_BICYCLES_ONLY)
			.value("TYPE_HORSE_RIDERS_ONLY", roadmanager::Signal::TYPE_HORSE_RIDERS_ONLY)
			.value("TYPE_PEDESTRIANS_ONLY", roadmanager::Signal::TYPE_PEDESTRIANS_ONLY)
			.value("TYPE_BICYCLES_PEDESTRIANS_SHARED_ONLY", roadmanager::Signal::TYPE_BICYCLES_PEDESTRIANS_SHARED_ONLY)
			.value("TYPE_BICYCLES_PEDESTRIANS_SEPARATED_LEFT_ONLY", roadmanager::Signal::TYPE_BICYCLES_PEDESTRIANS_SEPARATED_LEFT_ONLY)
			.value("TYPE_BICYCLES_PEDESTRIANS_SEPARATED_RIGHT_ONLY", roadmanager::Signal::TYPE_BICYCLES_PEDESTRIANS_SEPARATED_RIGHT_ONLY)
			.value("TYPE_PEDESTRIAN_ZONE_BEGIN", roadmanager::Signal::TYPE_PEDESTRIAN_ZONE_BEGIN)
			.value("TYPE_PEDESTRIAN_ZONE_END", roadmanager::Signal::TYPE_PEDESTRIAN_ZONE_END)
			.value("TYPE_BICYCLE_ROAD_BEGIN", roadmanager::Signal::TYPE_BICYCLE_ROAD_BEGIN)
			.value("TYPE_BICYCLE_ROAD_END", roadmanager::Signal::TYPE_BICYCLE_ROAD_END)
			.value("TYPE_BUS_LANE", roadmanager::Signal::TYPE_BUS_LANE)
			.value("TYPE_BUS_LANE_BEGIN", roadmanager::Signal::TYPE_BUS_LANE_BEGIN)
			.value("TYPE_BUS_LANE_END", roadmanager::Signal::TYPE_BUS_LANE_END)
			.value("TYPE_ALL_PROHIBITED", roadmanager::Signal::TYPE_ALL_PROHIBITED)
			.value("TYPE_MOTORIZED_MULTITRACK_PROHIBITED", roadmanager::Signal::TYPE_MOTORIZED_MULTITRACK_PROHIBITED)
			.value("TYPE_TRUCKS_PROHIBITED", roadmanager::Signal::TYPE_TRUCKS_PROHIBITED)
			.value("TYPE_BICYCLES_PROHIBITED", roadmanager::Signal::TYPE_BICYCLES_PROHIBITED)
			.value("TYPE_MOTORCYCLES_PROHIBITED", roadmanager::Signal::TYPE_MOTORCYCLES_PROHIBITED)
			.value("TYPE_MOPEDS_PROHIBITED", roadmanager::Signal::TYPE_MOPEDS_PROHIBITED)
			.value("TYPE_HORSE_RIDERS_PROHIBITED", roadmanager::Signal::TYPE_HORSE_RIDERS_PROHIBITED)
			.value("TYPE_HORSE_CARRIAGES_PROHIBITED", roadmanager::Signal::TYPE_HORSE_CARRIAGES_PROHIBITED)
			.value("TYPE_CATTLE_PROHIBITED", roadmanager::Signal::TYPE_CATTLE_PROHIBITED)
			.value("TYPE_BUSES_PROHIBITED", roadmanager::Signal::TYPE_BUSES_PROHIBITED)
			.value("TYPE_CARS_PROHIBITED", roadmanager::Signal::TYPE_CARS_PROHIBITED)
			.value("TYPE_CARS_TRAILERS_PROHIBITED", roadmanager::Signal::TYPE_CARS_TRAILERS_PROHIBITED)
			.value("TYPE_TRUCKS_TRAILERS_PROHIBITED", roadmanager::Signal::TYPE_TRUCKS_TRAILERS_PROHIBITED)
			.value("TYPE_TRACTORS_PROHIBITED", roadmanager::Signal::TYPE_TRACTORS_PROHIBITED)
			.value("TYPE_PEDESTRIANS_PROHIBITED", roadmanager::Signal::TYPE_PEDESTRIANS_PROHIBITED)
			.value("TYPE_MOTOR_VEHICLES_PROHIBITED", roadmanager::Signal::TYPE_MOTOR_VEHICLES_PROHIBITED)
			.value("TYPE_HAZARDOUS_GOODS_VEHICLES_PROHIBITED", roadmanager::Signal::TYPE_HAZARDOUS_GOODS_VEHICLES_PROHIBITED)
			.value("TYPE_OVER_WEIGHT_VEHICLES_PROHIBITED", roadmanager::Signal::TYPE_OVER_WEIGHT_VEHICLES_PROHIBITED)
			.value("TYPE_VEHICLES_AXLE_OVER_WEIGHT_PROHIBITED", roadmanager::Signal::TYPE_VEHICLES_AXLE_OVER_WEIGHT_PROHIBITED)
			.value("TYPE_VEHICLES_EXCESS_WIDTH_PROHIBITED", roadmanager::Signal::TYPE_VEHICLES_EXCESS_WIDTH_PROHIBITED)
			.value("TYPE_VEHICLES_EXCESS_HEIGHT_PROHIBITED", roadmanager::Signal::TYPE_VEHICLES_EXCESS_HEIGHT_PROHIBITED)
			.value("TYPE_VEHICLES_EXCESS_LENGTH_PROHIBITED", roadmanager::Signal::TYPE_VEHICLES_EXCESS_LENGTH_PROHIBITED)
			.value("TYPE_DO_NOT_ENTER", roadmanager::Signal::TYPE_DO_NOT_ENTER)
			.value("TYPE_SNOW_CHAINS_REQUIRED", roadmanager::Signal::TYPE_SNOW_CHAINS_REQUIRED)
			.value("TYPE_WATER_POLLUTANT_VEHICLES_PROHIBITED", roadmanager::Signal::TYPE_WATER_POLLUTANT_VEHICLES_PROHIBITED)
			.value("TYPE_ENVIRONMENTAL_ZONE_BEGIN", roadmanager::Signal::TYPE_ENVIRONMENTAL_ZONE_BEGIN)
			.value("TYPE_ENVIRONMENTAL_ZONE_END", roadmanager::Signal::TYPE_ENVIRONMENTAL_ZONE_END)
			.value("TYPE_NO_U_TURN_LEFT", roadmanager::Signal::TYPE_NO_U_TURN_LEFT)
			.value("TYPE_NO_U_TURN_RIGHT", roadmanager::Signal::TYPE_NO_U_TURN_RIGHT)
			.value("TYPE_PRESCRIBED_U_TURN_LEFT", roadmanager::Signal::TYPE_PRESCRIBED_U_TURN_LEFT)
			.value("TYPE_PRESCRIBED_U_TURN_RIGHT", roadmanager::Signal::TYPE_PRESCRIBED_U_TURN_RIGHT)
			.value("TYPE_MINIMUM_DISTANCE_FOR_TRUCKS", roadmanager::Signal::TYPE_MINIMUM_DISTANCE_FOR_TRUCKS)
			.value("TYPE_SPEED_LIMIT_BEGIN", roadmanager::Signal::TYPE_SPEED_LIMIT_BEGIN)
			.value("TYPE_SPEED_LIMIT_ZONE_BEGIN", roadmanager::Signal::TYPE_SPEED_LIMIT_ZONE_BEGIN)
			.value("TYPE_SPEED_LIMIT_ZONE_END", roadmanager::Signal::TYPE_SPEED_LIMIT_ZONE_END)
			.value("TYPE_MINIMUM_SPEED_BEGIN", roadmanager::Signal::TYPE_MINIMUM_SPEED_BEGIN)
			.value("TYPE_OVERTAKING_BAN_BEGIN", roadmanager::Signal::TYPE_OVERTAKING_BAN_BEGIN)
			.value("TYPE_OVERTAKING_BAN_FOR_TRUCKS_BEGIN", roadmanager::Signal::TYPE_OVERTAKING_BAN_FOR_TRUCKS_BEGIN)
			.value("TYPE_SPEED_LIMIT_END", roadmanager::Signal::TYPE_SPEED_LIMIT_END)
			.value("TYPE_MINIMUM_SPEED_END", roadmanager::Signal::TYPE_MINIMUM_SPEED_END)
			.value("TYPE_OVERTAKING_BAN_END", roadmanager::Signal::TYPE_OVERTAKING_BAN_END)
			.value("TYPE_OVERTAKING_BAN_FOR_TRUCKS_END", roadmanager::Signal::TYPE_OVERTAKING_BAN_FOR_TRUCKS_END)
			.value("TYPE_ALL_RESTRICTIONS_END", roadmanager::Signal::TYPE_ALL_RESTRICTIONS_END)
			.value("TYPE_NO_STOPPING", roadmanager::Signal::TYPE_NO_STOPPING)
			.value("TYPE_NO_PARKING", roadmanager::Signal::TYPE_NO_PARKING)
			.value("TYPE_NO_PARKING_ZONE_BEGIN", roadmanager::Signal::TYPE_NO_PARKING_ZONE_BEGIN)
			.value("TYPE_NO_PARKING_ZONE_END", roadmanager::Signal::TYPE_NO_PARKING_ZONE_END)
			.value("TYPE_RIGHT_OF_WAY_NEXT_INTERSECTION", roadmanager::Signal::TYPE_RIGHT_OF_WAY_NEXT_INTERSECTION)
			.value("TYPE_RIGHT_OF_WAY_BEGIN", roadmanager::Signal::TYPE_RIGHT_OF_WAY_BEGIN)
			.value("TYPE_RIGHT_OF_WAY_END", roadmanager::Signal::TYPE_RIGHT_OF_WAY_END)
			.value("TYPE_PRIORITY_OVER_OPPOSITE_DIRECTION", roadmanager::Signal::TYPE_PRIORITY_OVER_OPPOSITE_DIRECTION)
			.value("TYPE_PRIORITY_OVER_OPPOSITE_DIRECTION_UPSIDE_DOWN", roadmanager::Signal::TYPE_PRIORITY_OVER_OPPOSITE_DIRECTION_UPSIDE_DOWN)
			.value("TYPE_TOWN_BEGIN", roadmanager::Signal::TYPE_TOWN_BEGIN)
			.value("TYPE_TOWN_END", roadmanager::Signal::TYPE_TOWN_END)
			.value("TYPE_CAR_PARKING", roadmanager::Signal::TYPE_CAR_PARKING)
			.value("TYPE_CAR_PARKING_ZONE_BEGIN", roadmanager::Signal::TYPE_CAR_PARKING_ZONE_BEGIN)
			.value("TYPE_CAR_PARKING_ZONE_END", roadmanager::Signal::TYPE_CAR_PARKING_ZONE_END)
			.value("TYPE_SIDEWALK_HALF_PARKING_LEFT", roadmanager::Signal::TYPE_SIDEWALK_HALF_PARKING_LEFT)
			.value("TYPE_SIDEWALK_HALF_PARKING_RIGHT", roadmanager::Signal::TYPE_SIDEWALK_HALF_PARKING_RIGHT)
			.value("TYPE_SIDEWALK_PARKING_LEFT", roadmanager::Signal::TYPE_SIDEWALK_PARKING_LEFT)
			.value("TYPE_SIDEWALK_PARKING_RIGHT", roadmanager::Signal::TYPE_SIDEWALK_PARKING_RIGHT)
			.value("TYPE_SIDEWALK_PERPENDICULAR_HALF_PARKING_LEFT", roadmanager::Signal::TYPE_SIDEWALK_PERPENDICULAR_HALF_PARKING_LEFT)
			.value("TYPE_SIDEWALK_PERPENDICULAR_HALF_PARKING_RIGHT", roadmanager::Signal::TYPE_SIDEWALK_PERPENDICULAR_HALF_PARKING_RIGHT)
			.value("TYPE_SIDEWALK_PERPENDICULAR_PARKING_LEFT", roadmanager::Signal::TYPE_SIDEWALK_PERPENDICULAR_PARKING_LEFT)
			.value("TYPE_SIDEWALK_PERPENDICULAR_PARKING_RIGHT", roadmanager::Signal::TYPE_SIDEWALK_PERPENDICULAR_PARKING_RIGHT)
			.value("TYPE_LIVING_STREET_BEGIN", roadmanager::Signal::TYPE_LIVING_STREET_BEGIN)
			.value("TYPE_LIVING_STREET_END", roadmanager::Signal::TYPE_LIVING_STREET_END)
			.value("TYPE_TUNNEL", roadmanager::Signal::TYPE_TUNNEL)
			.value("TYPE_EMERGENCY_STOPPING_LEFT", roadmanager::Signal::TYPE_EMERGENCY_STOPPING_LEFT)
			.value("TYPE_EMERGENCY_STOPPING_RIGHT", roadmanager::Signal::TYPE_EMERGENCY_STOPPING_RIGHT)
			.value("TYPE_HIGHWAY_BEGIN", roadmanager::Signal::TYPE_HIGHWAY_BEGIN)
			.value("TYPE_HIGHWAY_END", roadmanager::Signal::TYPE_HIGHWAY_END)
			.value("TYPE_EXPRESSWAY_BEGIN", roadmanager::Signal::TYPE_EXPRESSWAY_BEGIN)
			.value("TYPE_EXPRESSWAY_END", roadmanager::Signal::TYPE_EXPRESSWAY_END)
			.value("TYPE_NAMED_HIGHWAY_EXIT", roadmanager::Signal::TYPE_NAMED_HIGHWAY_EXIT)
			.value("TYPE_NAMED_EXPRESSWAY_EXIT", roadmanager::Signal::TYPE_NAMED_EXPRESSWAY_EXIT)
			.value("TYPE_NAMED_ROAD_EXIT", roadmanager::Signal::TYPE_NAMED_ROAD_EXIT)
			.value("TYPE_HIGHWAY_EXIT", roadmanager::Signal::TYPE_HIGHWAY_EXIT)
			.value("TYPE_EXPRESSWAY_EXIT", roadmanager::Signal::TYPE_EXPRESSWAY_EXIT)
			.value("TYPE_ONEWAY_STREET", roadmanager::Signal::TYPE_ONEWAY_STREET)
			.value("TYPE_CROSSING_GUARDS", roadmanager::Signal::TYPE_CROSSING_GUARDS)
			.value("TYPE_DEADEND", roadmanager::Signal::TYPE_DEADEND)
			.value("TYPE_DEADEND_EXCLUDING_DESIGNATED_ACTORS", roadmanager::Signal::TYPE_DEADEND_EXCLUDING_DESIGNATED_ACTORS)
			.value("TYPE_FIRST_AID_STATION", roadmanager::Signal::TYPE_FIRST_AID_STATION)
			.value("TYPE_POLICE_STATION", roadmanager::Signal::TYPE_POLICE_STATION)
			.value("TYPE_TELEPHONE", roadmanager::Signal::TYPE_TELEPHONE)
			.value("TYPE_FILLING_STATION", roadmanager::Signal::TYPE_FILLING_STATION)
			.value("TYPE_HOTEL", roadmanager::Signal::TYPE_HOTEL)
			.value("TYPE_INN", roadmanager::Signal::TYPE_INN)
			.value("TYPE_KIOSK", roadmanager::Signal::TYPE_KIOSK)
			.value("TYPE_TOILET", roadmanager::Signal::TYPE_TOILET)
			.value("TYPE_CHAPEL", roadmanager::Signal::TYPE_CHAPEL)
			.value("TYPE_TOURIST_INFO", roadmanager::Signal::TYPE_TOURIST_INFO)
			.value("TYPE_REPAIR_SERVICE", roadmanager::Signal::TYPE_REPAIR_SERVICE)
			.value("TYPE_PEDESTRIAN_UNDERPASS", roadmanager::Signal::TYPE_PEDESTRIAN_UNDERPASS)
			.value("TYPE_PEDESTRIAN_BRIDGE", roadmanager::Signal::TYPE_PEDESTRIAN_BRIDGE)
			.value("TYPE_CAMPER_PLACE", roadmanager::Signal::TYPE_CAMPER_PLACE)
			.value("TYPE_ADVISORY_SPEED_LIMIT_BEGIN", roadmanager::Signal::TYPE_ADVISORY_SPEED_LIMIT_BEGIN)
			.value("TYPE_ADVISORY_SPEED_LIMIT_END", roadmanager::Signal::TYPE_ADVISORY_SPEED_LIMIT_END)
			.value("TYPE_PLACE_NAME", roadmanager::Signal::TYPE_PLACE_NAME)
			.value("TYPE_TOURIST_ATTRACTION", roadmanager::Signal::TYPE_TOURIST_ATTRACTION)
			.value("TYPE_TOURIST_ROUTE", roadmanager::Signal::TYPE_TOURIST_ROUTE)
			.value("TYPE_TOURIST_AREA", roadmanager::Signal::TYPE_TOURIST_AREA)
			.value("TYPE_SHOULDER_NOT_PASSABLE_MOTOR_VEHICLES", roadmanager::Signal::TYPE_SHOULDER_NOT_PASSABLE_MOTOR_VEHICLES)
			.value("TYPE_SHOULDER_UNSAFE_TRUCKS_TRACTORS", roadmanager::Signal::TYPE_SHOULDER_UNSAFE_TRUCKS_TRACTORS)
			.value("TYPE_TOLL_BEGIN", roadmanager::Signal::TYPE_TOLL_BEGIN)
			.value("TYPE_TOLL_END", roadmanager::Signal::TYPE_TOLL_END)
			.value("TYPE_TOLL_ROAD", roadmanager::Signal::TYPE_TOLL_ROAD)
			.value("TYPE_CUSTOMS", roadmanager::Signal::TYPE_CUSTOMS)
			.value("TYPE_INTERNATIONAL_BORDER_INFO", roadmanager::Signal::TYPE_INTERNATIONAL_BORDER_INFO)
			.value("TYPE_STREETLIGHT_RED_BAND", roadmanager::Signal::TYPE_STREETLIGHT_RED_BAND)
			.value("TYPE_FEDERAL_HIGHWAY_ROUTE_NUMBER", roadmanager::Signal::TYPE_FEDERAL_HIGHWAY_ROUTE_NUMBER)
			.value("TYPE_HIGHWAY_ROUTE_NUMBER", roadmanager::Signal::TYPE_HIGHWAY_ROUTE_NUMBER)
			.value("TYPE_HIGHWAY_INTERCHANGE_NUMBER", roadmanager::Signal::TYPE_HIGHWAY_INTERCHANGE_NUMBER)
			.value("TYPE_EUROPEAN_ROUTE_NUMBER", roadmanager::Signal::TYPE_EUROPEAN_ROUTE_NUMBER)
			.value("TYPE_FEDERAL_HIGHWAY_DIRECTION_LEFT", roadmanager::Signal::TYPE_FEDERAL_HIGHWAY_DIRECTION_LEFT)
			.value("TYPE_FEDERAL_HIGHWAY_DIRECTION_RIGHT", roadmanager::Signal::TYPE_FEDERAL_HIGHWAY_DIRECTION_RIGHT)
			.value("TYPE_PRIMARY_ROAD_DIRECTION_LEFT", roadmanager::Signal::TYPE_PRIMARY_ROAD_DIRECTION_LEFT)
			.value("TYPE_PRIMARY_ROAD_DIRECTION_RIGHT", roadmanager::Signal::TYPE_PRIMARY_ROAD_DIRECTION_RIGHT)
			.value("TYPE_SECONDARY_ROAD_DIRECTION_LEFT", roadmanager::Signal::TYPE_SECONDARY_ROAD_DIRECTION_LEFT)
			.value("TYPE_SECONDARY_ROAD_DIRECTION_RIGHT", roadmanager::Signal::TYPE_SECONDARY_ROAD_DIRECTION_RIGHT)
			.value("TYPE_DIRECTION_DESIGNATED_ACTORS_LEFT", roadmanager::Signal::TYPE_DIRECTION_DESIGNATED_ACTORS_LEFT)
			.value("TYPE_DIRECTION_DESIGNATED_ACTORS_RIGHT", roadmanager::Signal::TYPE_DIRECTION_DESIGNATED_ACTORS_RIGHT)
			.value("TYPE_ROUTING_DESIGNATED_ACTORS", roadmanager::Signal::TYPE_ROUTING_DESIGNATED_ACTORS)
			.value("TYPE_DIRECTION_TO_HIGHWAY_LEFT", roadmanager::Signal::TYPE_DIRECTION_TO_HIGHWAY_LEFT)
			.value("TYPE_DIRECTION_TO_HIGHWAY_RIGHT", roadmanager::Signal::TYPE_DIRECTION_TO_HIGHWAY_RIGHT)
			.value("TYPE_DIRECTION_TO_LOCAL_DESTINATION_LEFT", roadmanager::Signal::TYPE_DIRECTION_TO_LOCAL_DESTINATION_LEFT)
			.value("TYPE_DIRECTION_TO_LOCAL_DESTINATION_RIGHT", roadmanager::Signal::TYPE_DIRECTION_TO_LOCAL_DESTINATION_RIGHT)
			.value("TYPE_CONSOLIDATED_DIRECTIONS", roadmanager::Signal::TYPE_CONSOLIDATED_DIRECTIONS)
			.value("TYPE_STREET_NAME", roadmanager::Signal::TYPE_STREET_NAME)
			.value("TYPE_DIRECTION_PREANNOUNCEMENT", roadmanager::Signal::TYPE_DIRECTION_PREANNOUNCEMENT)
			.value("TYPE_DIRECTION_PREANNOUNCEMENT_LANE_CONFIG", roadmanager::Signal::TYPE_DIRECTION_PREANNOUNCEMENT_LANE_CONFIG)
			.value("TYPE_DIRECTION_PREANNOUNCEMENT_HIGHWAY_ENTRIES", roadmanager::Signal::TYPE_DIRECTION_PREANNOUNCEMENT_HIGHWAY_ENTRIES)
			.value("TYPE_HIGHWAY_ANNOUNCEMENT", roadmanager::Signal::TYPE_HIGHWAY_ANNOUNCEMENT)
			.value("TYPE_OTHER_ROAD_ANNOUNCEMENT", roadmanager::Signal::TYPE_OTHER_ROAD_ANNOUNCEMENT)
			.value("TYPE_HIGHWAY_ANNOUNCEMENT_TRUCK_STOP", roadmanager::Signal::TYPE_HIGHWAY_ANNOUNCEMENT_TRUCK_STOP)
			.value("TYPE_HIGHWAY_PREANNOUNCEMENT_DIRECTIONS", roadmanager::Signal::TYPE_HIGHWAY_PREANNOUNCEMENT_DIRECTIONS)
			.value("TYPE_POLE_EXIT", roadmanager::Signal::TYPE_POLE_EXIT)
			.value("TYPE_HIGHWAY_DISTANCE_BOARD", roadmanager::Signal::TYPE_HIGHWAY_DISTANCE_BOARD)
			.value("TYPE_DETOUR_LEFT", roadmanager::Signal::TYPE_DETOUR_LEFT)
			.value("TYPE_DETOUR_RIGHT", roadmanager::Signal::TYPE_DETOUR_RIGHT)
			.value("TYPE_NUMBERED_DETOUR", roadmanager::Signal::TYPE_NUMBERED_DETOUR)
			.value("TYPE_DETOUR_BEGIN", roadmanager::Signal::TYPE_DETOUR_BEGIN)
			.value("TYPE_DETOUR_END", roadmanager::Signal::TYPE_DETOUR_END)
			.value("TYPE_DETOUR_ROUTING_BOARD", roadmanager::Signal::TYPE_DETOUR_ROUTING_BOARD)
			.value("TYPE_OPTIONAL_DETOUR", roadmanager::Signal::TYPE_OPTIONAL_DETOUR)
			.value("TYPE_OPTIONAL_DETOUR_ROUTING", roadmanager::Signal::TYPE_OPTIONAL_DETOUR_ROUTING)
			.value("TYPE_ROUTE_RECOMMENDATION", roadmanager::Signal::TYPE_ROUTE_RECOMMENDATION)
			.value("TYPE_ROUTE_RECOMMENDATION_END", roadmanager::Signal::TYPE_ROUTE_RECOMMENDATION_END)
			.value("TYPE_ANNOUNCE_LANE_TRANSITION_LEFT", roadmanager::Signal::TYPE_ANNOUNCE_LANE_TRANSITION_LEFT)
			.value("TYPE_ANNOUNCE_LANE_TRANSITION_RIGHT", roadmanager::Signal::TYPE_ANNOUNCE_LANE_TRANSITION_RIGHT)
			.value("TYPE_ANNOUNCE_RIGHT_LANE_END", roadmanager::Signal::TYPE_ANNOUNCE_RIGHT_LANE_END)
			.value("TYPE_ANNOUNCE_LEFT_LANE_END", roadmanager::Signal::TYPE_ANNOUNCE_LEFT_LANE_END)
			.value("TYPE_ANNOUNCE_RIGHT_LANE_BEGIN", roadmanager::Signal::TYPE_ANNOUNCE_RIGHT_LANE_BEGIN)
			.value("TYPE_ANNOUNCE_LEFT_LANE_BEGIN", roadmanager::Signal::TYPE_ANNOUNCE_LEFT_LANE_BEGIN)
			.value("TYPE_ANNOUNCE_LANE_CONSOLIDATION", roadmanager::Signal::TYPE_ANNOUNCE_LANE_CONSOLIDATION)
			.value("TYPE_DETOUR_CITY_BLOCK", roadmanager::Signal::TYPE_DETOUR_CITY_BLOCK)
			.value("TYPE_GATE", roadmanager::Signal::TYPE_GATE)
			.value("TYPE_POLE_WARNING", roadmanager::Signal::TYPE_POLE_WARNING)
			.value("TYPE_TRAFFIC_CONE", roadmanager::Signal::TYPE_TRAFFIC_CONE)
			.value("TYPE_MOBILE_LANE_CLOSURE", roadmanager::Signal::TYPE_MOBILE_LANE_CLOSURE)
			.value("TYPE_REFLECTOR_POST", roadmanager::Signal::TYPE_REFLECTOR_POST)
			.value("TYPE_DIRECTIONAL_BOARD_WARNING", roadmanager::Signal::TYPE_DIRECTIONAL_BOARD_WARNING)
			.value("TYPE_GUIDING_PLATE", roadmanager::Signal::TYPE_GUIDING_PLATE)
			.value("TYPE_GUIDING_PLATE_WEDGES", roadmanager::Signal::TYPE_GUIDING_PLATE_WEDGES)
			.value("TYPE_PARKING_HAZARD", roadmanager::Signal::TYPE_PARKING_HAZARD)
			.value("TYPE_TRAFFIC_LIGHT_GREEN_ARROW", roadmanager::Signal::TYPE_TRAFFIC_LIGHT_GREEN_ARROW)
			.value("TrafficSign_MainSign_Classification_Type_INT_MIN_SENTINEL_DO_NOT_USE_", roadmanager::Signal::TrafficSign_MainSign_Classification_Type_INT_MIN_SENTINEL_DO_NOT_USE_)
			.value("TrafficSign_MainSign_Classification_Type_INT_MAX_SENTINEL_DO_NOT_USE_", roadmanager::Signal::TrafficSign_MainSign_Classification_Type_INT_MAX_SENTINEL_DO_NOT_USE_)
			.export_values();

		cl.def("GetId", (int (roadmanager::Signal::*)()) &roadmanager::Signal::GetId, "C++: roadmanager::Signal::GetId() --> int");
		cl.def("GetS", (double (roadmanager::Signal::*)()) &roadmanager::Signal::GetS, "C++: roadmanager::Signal::GetS() --> double");
		cl.def("GetT", (double (roadmanager::Signal::*)()) &roadmanager::Signal::GetT, "C++: roadmanager::Signal::GetT() --> double");
		cl.def("SetLength", (void (roadmanager::Signal::*)(double)) &roadmanager::Signal::SetLength, "C++: roadmanager::Signal::SetLength(double) --> void", pybind11::arg("length"));
		cl.def("GetLength", (double (roadmanager::Signal::*)()) &roadmanager::Signal::GetLength, "C++: roadmanager::Signal::GetLength() --> double");
		cl.def("GetHOffset", (double (roadmanager::Signal::*)()) &roadmanager::Signal::GetHOffset, "C++: roadmanager::Signal::GetHOffset() --> double");
		cl.def("GetZOffset", (double (roadmanager::Signal::*)()) &roadmanager::Signal::GetZOffset, "C++: roadmanager::Signal::GetZOffset() --> double");
		cl.def("GetOrientation", (enum roadmanager::RoadObject::Orientation (roadmanager::Signal::*)()) &roadmanager::Signal::GetOrientation, "C++: roadmanager::Signal::GetOrientation() --> enum roadmanager::RoadObject::Orientation");
		cl.def("GetType", (int (roadmanager::Signal::*)()) &roadmanager::Signal::GetType, "C++: roadmanager::Signal::GetType() --> int");
		cl.def("GetHeight", (double (roadmanager::Signal::*)()) &roadmanager::Signal::GetHeight, "C++: roadmanager::Signal::GetHeight() --> double");
		cl.def("GetWidth", (double (roadmanager::Signal::*)()) &roadmanager::Signal::GetWidth, "C++: roadmanager::Signal::GetWidth() --> double");
		cl.def("IsDynamic", (bool (roadmanager::Signal::*)()) &roadmanager::Signal::IsDynamic, "C++: roadmanager::Signal::IsDynamic() --> bool");
		cl.def("GetPitch", (double (roadmanager::Signal::*)()) &roadmanager::Signal::GetPitch, "C++: roadmanager::Signal::GetPitch() --> double");
		cl.def("GetRoll", (double (roadmanager::Signal::*)()) &roadmanager::Signal::GetRoll, "C++: roadmanager::Signal::GetRoll() --> double");
		cl.def("GetValue", (double (roadmanager::Signal::*)()) &roadmanager::Signal::GetValue, "C++: roadmanager::Signal::GetValue() --> double");
	}
}


// File: unknown/unknown_4.cpp
#include <iostream> // --trace
#include <iterator> // __gnu_cxx::__normal_iterator
#include <memory> // std::allocator
#include <sstream> // __str__
#include <string> // std::basic_string
#include <string> // std::char_traits

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "esminiLib.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

// roadmanager::OutlineCorner file: line:1011
struct PyCallBack_roadmanager_OutlineCorner : public roadmanager::OutlineCorner {
	using roadmanager::OutlineCorner::OutlineCorner;

	void GetPos(double & a0, double & a1, double & a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::OutlineCorner *>(this), "GetPos");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"OutlineCorner::GetPos\"");
	}
	double GetHeight() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::OutlineCorner *>(this), "GetHeight");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"OutlineCorner::GetHeight\"");
	}
};

// roadmanager::OutlineCornerRoad file: line:1019
struct PyCallBack_roadmanager_OutlineCornerRoad : public roadmanager::OutlineCornerRoad {
	using roadmanager::OutlineCornerRoad::OutlineCornerRoad;

	void GetPos(double & a0, double & a1, double & a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::OutlineCornerRoad *>(this), "GetPos");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OutlineCornerRoad::GetPos(a0, a1, a2);
	}
	double GetHeight() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::OutlineCornerRoad *>(this), "GetHeight");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return OutlineCornerRoad::GetHeight();
	}
};

// roadmanager::OutlineCornerLocal file: line:1031
struct PyCallBack_roadmanager_OutlineCornerLocal : public roadmanager::OutlineCornerLocal {
	using roadmanager::OutlineCornerLocal::OutlineCornerLocal;

	void GetPos(double & a0, double & a1, double & a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::OutlineCornerLocal *>(this), "GetPos");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OutlineCornerLocal::GetPos(a0, a1, a2);
	}
	double GetHeight() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::OutlineCornerLocal *>(this), "GetHeight");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return OutlineCornerLocal::GetHeight();
	}
};

void bind_unknown_unknown_4(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B27_[roadmanager::OutlineCorner] ";
	{ // roadmanager::OutlineCorner file: line:1011
		pybind11::class_<roadmanager::OutlineCorner, std::shared_ptr<roadmanager::OutlineCorner>, PyCallBack_roadmanager_OutlineCorner> cl(M("roadmanager"), "OutlineCorner", "");
		cl.def( pybind11::init( [](){ return new PyCallBack_roadmanager_OutlineCorner(); } ) );
		cl.def(pybind11::init<PyCallBack_roadmanager_OutlineCorner const &>());
		cl.def("GetPos", (void (roadmanager::OutlineCorner::*)(double &, double &, double &)) &roadmanager::OutlineCorner::GetPos, "C++: roadmanager::OutlineCorner::GetPos(double &, double &, double &) --> void", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"));
		cl.def("GetHeight", (double (roadmanager::OutlineCorner::*)()) &roadmanager::OutlineCorner::GetHeight, "C++: roadmanager::OutlineCorner::GetHeight() --> double");
		cl.def("assign", (class roadmanager::OutlineCorner & (roadmanager::OutlineCorner::*)(const class roadmanager::OutlineCorner &)) &roadmanager::OutlineCorner::operator=, "C++: roadmanager::OutlineCorner::operator=(const class roadmanager::OutlineCorner &) --> class roadmanager::OutlineCorner &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B28_[roadmanager::OutlineCornerRoad] ";
	{ // roadmanager::OutlineCornerRoad file: line:1019
		pybind11::class_<roadmanager::OutlineCornerRoad, std::shared_ptr<roadmanager::OutlineCornerRoad>, PyCallBack_roadmanager_OutlineCornerRoad, roadmanager::OutlineCorner> cl(M("roadmanager"), "OutlineCornerRoad", "");
		cl.def( pybind11::init<int, double, double, double, double>(), pybind11::arg("roadId"), pybind11::arg("s"), pybind11::arg("t"), pybind11::arg("dz"), pybind11::arg("height") );

		cl.def( pybind11::init( [](PyCallBack_roadmanager_OutlineCornerRoad const &o){ return new PyCallBack_roadmanager_OutlineCornerRoad(o); } ) );
		cl.def( pybind11::init( [](roadmanager::OutlineCornerRoad const &o){ return new roadmanager::OutlineCornerRoad(o); } ) );
		cl.def("GetPos", (void (roadmanager::OutlineCornerRoad::*)(double &, double &, double &)) &roadmanager::OutlineCornerRoad::GetPos, "C++: roadmanager::OutlineCornerRoad::GetPos(double &, double &, double &) --> void", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"));
		cl.def("GetHeight", (double (roadmanager::OutlineCornerRoad::*)()) &roadmanager::OutlineCornerRoad::GetHeight, "C++: roadmanager::OutlineCornerRoad::GetHeight() --> double");
		cl.def("assign", (class roadmanager::OutlineCornerRoad & (roadmanager::OutlineCornerRoad::*)(const class roadmanager::OutlineCornerRoad &)) &roadmanager::OutlineCornerRoad::operator=, "C++: roadmanager::OutlineCornerRoad::operator=(const class roadmanager::OutlineCornerRoad &) --> class roadmanager::OutlineCornerRoad &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B29_[roadmanager::OutlineCornerLocal] ";
	{ // roadmanager::OutlineCornerLocal file: line:1031
		pybind11::class_<roadmanager::OutlineCornerLocal, std::shared_ptr<roadmanager::OutlineCornerLocal>, PyCallBack_roadmanager_OutlineCornerLocal, roadmanager::OutlineCorner> cl(M("roadmanager"), "OutlineCornerLocal", "");
		cl.def( pybind11::init<int, double, double, double, double, double, double, double>(), pybind11::arg("roadId"), pybind11::arg("s"), pybind11::arg("t"), pybind11::arg("u"), pybind11::arg("v"), pybind11::arg("zLocal"), pybind11::arg("height"), pybind11::arg("heading") );

		cl.def( pybind11::init( [](PyCallBack_roadmanager_OutlineCornerLocal const &o){ return new PyCallBack_roadmanager_OutlineCornerLocal(o); } ) );
		cl.def( pybind11::init( [](roadmanager::OutlineCornerLocal const &o){ return new roadmanager::OutlineCornerLocal(o); } ) );
		cl.def("GetPos", (void (roadmanager::OutlineCornerLocal::*)(double &, double &, double &)) &roadmanager::OutlineCornerLocal::GetPos, "C++: roadmanager::OutlineCornerLocal::GetPos(double &, double &, double &) --> void", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"));
		cl.def("GetHeight", (double (roadmanager::OutlineCornerLocal::*)()) &roadmanager::OutlineCornerLocal::GetHeight, "C++: roadmanager::OutlineCornerLocal::GetHeight() --> double");
		cl.def("assign", (class roadmanager::OutlineCornerLocal & (roadmanager::OutlineCornerLocal::*)(const class roadmanager::OutlineCornerLocal &)) &roadmanager::OutlineCornerLocal::operator=, "C++: roadmanager::OutlineCornerLocal::operator=(const class roadmanager::OutlineCornerLocal &) --> class roadmanager::OutlineCornerLocal &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B30_[roadmanager::Outline] ";
	{ // roadmanager::Outline file: line:1043
		pybind11::class_<roadmanager::Outline, std::shared_ptr<roadmanager::Outline>> cl(M("roadmanager"), "Outline", "");
		cl.def( pybind11::init<int, roadmanager::Outline::FillType, bool>(), pybind11::arg("id"), pybind11::arg("fillType"), pybind11::arg("closed") );

		cl.def( pybind11::init( [](roadmanager::Outline const &o){ return new roadmanager::Outline(o); } ) );
		cl.def_readwrite("id_", &roadmanager::Outline::id_);
		cl.def_readwrite("fillType_", &roadmanager::Outline::fillType_);
		cl.def_readwrite("closed_", &roadmanager::Outline::closed_);
		cl.def_readwrite("corner_", &roadmanager::Outline::corner_);
		cl.def("AddCorner", (void (roadmanager::Outline::*)(class roadmanager::OutlineCorner *)) &roadmanager::Outline::AddCorner, "C++: roadmanager::Outline::AddCorner(class roadmanager::OutlineCorner *) --> void", pybind11::arg("outlineCorner"));
	}
	std::cout << "B31_[roadmanager::Repeat] ";
	{ // roadmanager::Repeat file: line:1075
		pybind11::class_<roadmanager::Repeat, std::shared_ptr<roadmanager::Repeat>> cl(M("roadmanager"), "Repeat", "");
		cl.def( pybind11::init<double, double, double, double, double, double, double, double, double>(), pybind11::arg("s"), pybind11::arg("length"), pybind11::arg("distance"), pybind11::arg("tStart"), pybind11::arg("tEnd"), pybind11::arg("heightStart"), pybind11::arg("heightEnd"), pybind11::arg("zOffsetStart"), pybind11::arg("zOffsetEnd") );

		cl.def_readwrite("s_", &roadmanager::Repeat::s_);
		cl.def_readwrite("length_", &roadmanager::Repeat::length_);
		cl.def_readwrite("distance_", &roadmanager::Repeat::distance_);
		cl.def_readwrite("tStart_", &roadmanager::Repeat::tStart_);
		cl.def_readwrite("tEnd_", &roadmanager::Repeat::tEnd_);
		cl.def_readwrite("heightStart_", &roadmanager::Repeat::heightStart_);
		cl.def_readwrite("heightEnd_", &roadmanager::Repeat::heightEnd_);
		cl.def_readwrite("zOffsetStart_", &roadmanager::Repeat::zOffsetStart_);
		cl.def_readwrite("zOffsetEnd_", &roadmanager::Repeat::zOffsetEnd_);
		cl.def_readwrite("widthStart_", &roadmanager::Repeat::widthStart_);
		cl.def_readwrite("widthEnd_", &roadmanager::Repeat::widthEnd_);
		cl.def_readwrite("lengthStart_", &roadmanager::Repeat::lengthStart_);
		cl.def_readwrite("lengthEnd_", &roadmanager::Repeat::lengthEnd_);
		cl.def_readwrite("radiusStart_", &roadmanager::Repeat::radiusStart_);
		cl.def_readwrite("radiusEnd_", &roadmanager::Repeat::radiusEnd_);
		cl.def("SetWidthStart", (void (roadmanager::Repeat::*)(double)) &roadmanager::Repeat::SetWidthStart, "C++: roadmanager::Repeat::SetWidthStart(double) --> void", pybind11::arg("widthStart"));
		cl.def("SetWidthEnd", (void (roadmanager::Repeat::*)(double)) &roadmanager::Repeat::SetWidthEnd, "C++: roadmanager::Repeat::SetWidthEnd(double) --> void", pybind11::arg("widthEnd"));
		cl.def("SetLengthStart", (void (roadmanager::Repeat::*)(double)) &roadmanager::Repeat::SetLengthStart, "C++: roadmanager::Repeat::SetLengthStart(double) --> void", pybind11::arg("lengthStart"));
		cl.def("SetLengthEnd", (void (roadmanager::Repeat::*)(double)) &roadmanager::Repeat::SetLengthEnd, "C++: roadmanager::Repeat::SetLengthEnd(double) --> void", pybind11::arg("lengthEnd"));
		cl.def("SetHeightStart", (void (roadmanager::Repeat::*)(double)) &roadmanager::Repeat::SetHeightStart, "C++: roadmanager::Repeat::SetHeightStart(double) --> void", pybind11::arg("heightStart"));
		cl.def("SeHeightEnd", (void (roadmanager::Repeat::*)(double)) &roadmanager::Repeat::SeHeightEnd, "C++: roadmanager::Repeat::SeHeightEnd(double) --> void", pybind11::arg("heightStart"));
		cl.def("GetS", (double (roadmanager::Repeat::*)()) &roadmanager::Repeat::GetS, "C++: roadmanager::Repeat::GetS() --> double");
		cl.def("GetLength", (double (roadmanager::Repeat::*)()) &roadmanager::Repeat::GetLength, "C++: roadmanager::Repeat::GetLength() --> double");
		cl.def("GetDistance", (double (roadmanager::Repeat::*)()) &roadmanager::Repeat::GetDistance, "C++: roadmanager::Repeat::GetDistance() --> double");
		cl.def("GetTStart", (double (roadmanager::Repeat::*)()) &roadmanager::Repeat::GetTStart, "C++: roadmanager::Repeat::GetTStart() --> double");
		cl.def("GetTEnd", (double (roadmanager::Repeat::*)()) &roadmanager::Repeat::GetTEnd, "C++: roadmanager::Repeat::GetTEnd() --> double");
		cl.def("GetHeightStart", (double (roadmanager::Repeat::*)()) &roadmanager::Repeat::GetHeightStart, "C++: roadmanager::Repeat::GetHeightStart() --> double");
		cl.def("GetHeightEnd", (double (roadmanager::Repeat::*)()) &roadmanager::Repeat::GetHeightEnd, "C++: roadmanager::Repeat::GetHeightEnd() --> double");
		cl.def("GetZOffsetStart", (double (roadmanager::Repeat::*)()) &roadmanager::Repeat::GetZOffsetStart, "C++: roadmanager::Repeat::GetZOffsetStart() --> double");
		cl.def("GetZOffsetEnd", (double (roadmanager::Repeat::*)()) &roadmanager::Repeat::GetZOffsetEnd, "C++: roadmanager::Repeat::GetZOffsetEnd() --> double");
		cl.def("GetWidthStart", (double (roadmanager::Repeat::*)()) &roadmanager::Repeat::GetWidthStart, "C++: roadmanager::Repeat::GetWidthStart() --> double");
		cl.def("GetWidthEnd", (double (roadmanager::Repeat::*)()) &roadmanager::Repeat::GetWidthEnd, "C++: roadmanager::Repeat::GetWidthEnd() --> double");
		cl.def("GetLengthStart", (double (roadmanager::Repeat::*)()) &roadmanager::Repeat::GetLengthStart, "C++: roadmanager::Repeat::GetLengthStart() --> double");
		cl.def("GetLengthEnd", (double (roadmanager::Repeat::*)()) &roadmanager::Repeat::GetLengthEnd, "C++: roadmanager::Repeat::GetLengthEnd() --> double");
		cl.def("GetRadiusStart", (double (roadmanager::Repeat::*)()) &roadmanager::Repeat::GetRadiusStart, "C++: roadmanager::Repeat::GetRadiusStart() --> double");
		cl.def("GetRadiusEnd", (double (roadmanager::Repeat::*)()) &roadmanager::Repeat::GetRadiusEnd, "C++: roadmanager::Repeat::GetRadiusEnd() --> double");
	}
	std::cout << "B32_[roadmanager::RMObject] ";
	{ // roadmanager::RMObject file: line:1133
		pybind11::class_<roadmanager::RMObject, std::shared_ptr<roadmanager::RMObject>, roadmanager::RoadObject> cl(M("roadmanager"), "RMObject", "");
		cl.def( pybind11::init( [](roadmanager::RMObject const &o){ return new roadmanager::RMObject(o); } ) );
		cl.def("GetId", (int (roadmanager::RMObject::*)()) &roadmanager::RMObject::GetId, "C++: roadmanager::RMObject::GetId() --> int");
		cl.def("GetS", (double (roadmanager::RMObject::*)()) &roadmanager::RMObject::GetS, "C++: roadmanager::RMObject::GetS() --> double");
		cl.def("GetT", (double (roadmanager::RMObject::*)()) &roadmanager::RMObject::GetT, "C++: roadmanager::RMObject::GetT() --> double");
		cl.def("GetHOffset", (double (roadmanager::RMObject::*)()) &roadmanager::RMObject::GetHOffset, "C++: roadmanager::RMObject::GetHOffset() --> double");
		cl.def("GetPitch", (double (roadmanager::RMObject::*)()) &roadmanager::RMObject::GetPitch, "C++: roadmanager::RMObject::GetPitch() --> double");
		cl.def("GetRoll", (double (roadmanager::RMObject::*)()) &roadmanager::RMObject::GetRoll, "C++: roadmanager::RMObject::GetRoll() --> double");
		cl.def("GetZOffset", (double (roadmanager::RMObject::*)()) &roadmanager::RMObject::GetZOffset, "C++: roadmanager::RMObject::GetZOffset() --> double");
		cl.def("GetHeight", (double (roadmanager::RMObject::*)()) &roadmanager::RMObject::GetHeight, "C++: roadmanager::RMObject::GetHeight() --> double");
		cl.def("GetLength", (double (roadmanager::RMObject::*)()) &roadmanager::RMObject::GetLength, "C++: roadmanager::RMObject::GetLength() --> double");
		cl.def("GetWidth", (double (roadmanager::RMObject::*)()) &roadmanager::RMObject::GetWidth, "C++: roadmanager::RMObject::GetWidth() --> double");
		cl.def("GetOrientation", (enum roadmanager::RoadObject::Orientation (roadmanager::RMObject::*)()) &roadmanager::RMObject::GetOrientation, "C++: roadmanager::RMObject::GetOrientation() --> enum roadmanager::RoadObject::Orientation");
		cl.def("AddOutline", (void (roadmanager::RMObject::*)(class roadmanager::Outline *)) &roadmanager::RMObject::AddOutline, "C++: roadmanager::RMObject::AddOutline(class roadmanager::Outline *) --> void", pybind11::arg("outline"));
		cl.def("SetRepeat", (void (roadmanager::RMObject::*)(class roadmanager::Repeat *)) &roadmanager::RMObject::SetRepeat, "C++: roadmanager::RMObject::SetRepeat(class roadmanager::Repeat *) --> void", pybind11::arg("repeat"));
		cl.def("GetRepeat", (class roadmanager::Repeat * (roadmanager::RMObject::*)()) &roadmanager::RMObject::GetRepeat, "C++: roadmanager::RMObject::GetRepeat() --> class roadmanager::Repeat *", pybind11::return_value_policy::automatic);
		cl.def("GetNumberOfOutlines", (int (roadmanager::RMObject::*)()) &roadmanager::RMObject::GetNumberOfOutlines, "C++: roadmanager::RMObject::GetNumberOfOutlines() --> int");
		cl.def("GetOutline", (class roadmanager::Outline * (roadmanager::RMObject::*)(int)) &roadmanager::RMObject::GetOutline, "C++: roadmanager::RMObject::GetOutline(int) --> class roadmanager::Outline *", pybind11::return_value_policy::automatic, pybind11::arg("i"));
	}
	std::cout << "B33_[roadmanager::Road] ";
	{ // roadmanager::Road file: line:1185
		pybind11::class_<roadmanager::Road, std::shared_ptr<roadmanager::Road>> cl(M("roadmanager"), "Road", "");
		cl.def( pybind11::init( [](roadmanager::Road const &o){ return new roadmanager::Road(o); } ) );

		pybind11::enum_<roadmanager::Road::RoadType>(cl, "RoadType", "")
			.value("ROADTYPE_UNKNOWN", roadmanager::Road::RoadType::ROADTYPE_UNKNOWN)
			.value("ROADTYPE_RURAL", roadmanager::Road::RoadType::ROADTYPE_RURAL)
			.value("ROADTYPE_MOTORWAY", roadmanager::Road::RoadType::ROADTYPE_MOTORWAY)
			.value("ROADTYPE_TOWN", roadmanager::Road::RoadType::ROADTYPE_TOWN)
			.value("ROADTYPE_LOWSPEED", roadmanager::Road::RoadType::ROADTYPE_LOWSPEED)
			.value("ROADTYPE_PEDESTRIAN", roadmanager::Road::RoadType::ROADTYPE_PEDESTRIAN)
			.value("ROADTYPE_BICYCLE", roadmanager::Road::RoadType::ROADTYPE_BICYCLE);


		pybind11::enum_<roadmanager::Road::RoadRule>(cl, "RoadRule", "")
			.value("RIGHT_HAND_TRAFFIC", roadmanager::Road::RoadRule::RIGHT_HAND_TRAFFIC)
			.value("LEFT_HAND_TRAFFIC", roadmanager::Road::RoadRule::LEFT_HAND_TRAFFIC)
			.value("ROAD_RULE_UNDEFINED", roadmanager::Road::RoadRule::ROAD_RULE_UNDEFINED);

		cl.def("Print", (void (roadmanager::Road::*)()) &roadmanager::Road::Print, "C++: roadmanager::Road::Print() --> void");
		cl.def("SetId", (void (roadmanager::Road::*)(int)) &roadmanager::Road::SetId, "C++: roadmanager::Road::SetId(int) --> void", pybind11::arg("id"));
		cl.def("GetId", (int (roadmanager::Road::*)()) &roadmanager::Road::GetId, "C++: roadmanager::Road::GetId() --> int");
		cl.def("GetRule", (enum roadmanager::Road::RoadRule (roadmanager::Road::*)()) &roadmanager::Road::GetRule, "C++: roadmanager::Road::GetRule() --> enum roadmanager::Road::RoadRule");
		cl.def("GetGeometry", (class roadmanager::Geometry * (roadmanager::Road::*)(int)) &roadmanager::Road::GetGeometry, "C++: roadmanager::Road::GetGeometry(int) --> class roadmanager::Geometry *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetNumberOfGeometries", (int (roadmanager::Road::*)()) &roadmanager::Road::GetNumberOfGeometries, "C++: roadmanager::Road::GetNumberOfGeometries() --> int");
		cl.def("GetLaneSectionByIdx", (class roadmanager::LaneSection * (roadmanager::Road::*)(int)) &roadmanager::Road::GetLaneSectionByIdx, "		Retrieve the lanesection specified by vector element index (idx)\n		useful for iterating over all available lane sections, e.g:\n		for (int i = 0; i < road->GetNumberOfLaneSections(); i++)\n		{\n			int n_lanes = road->GetLaneSectionByIdx(i)->GetNumberOfLanes();\n		...\n		\n\n index into the vector of lane sections\n\nC++: roadmanager::Road::GetLaneSectionByIdx(int) --> class roadmanager::LaneSection *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetLaneSectionIdxByS", [](roadmanager::Road &o, double const & a0) -> int { return o.GetLaneSectionIdxByS(a0); }, "", pybind11::arg("s"));
		cl.def("GetLaneSectionIdxByS", (int (roadmanager::Road::*)(double, int)) &roadmanager::Road::GetLaneSectionIdxByS, "		Retrieve the lanesection index at specified s-value\n		\n\n distance along the road segment\n\nC++: roadmanager::Road::GetLaneSectionIdxByS(double, int) --> int", pybind11::arg("s"), pybind11::arg("start_at"));
		cl.def("GetLaneSectionByS", [](roadmanager::Road &o, double const & a0) -> roadmanager::LaneSection * { return o.GetLaneSectionByS(a0); }, "", pybind11::return_value_policy::automatic, pybind11::arg("s"));
		cl.def("GetLaneSectionByS", (class roadmanager::LaneSection * (roadmanager::Road::*)(double, int)) &roadmanager::Road::GetLaneSectionByS, "		Retrieve the lanesection at specified s-value\n		\n\n distance along the road segment\n\nC++: roadmanager::Road::GetLaneSectionByS(double, int) --> class roadmanager::LaneSection *", pybind11::return_value_policy::automatic, pybind11::arg("s"), pybind11::arg("start_at"));
		cl.def("GetCenterOffset", (double (roadmanager::Road::*)(double, int)) &roadmanager::Road::GetCenterOffset, "		Get lateral position of lane center, from road reference lane (lane id=0)\n		Example: If lane id 1 is 5 m wide and lane id 2 is 4 m wide, then\n		lane 1 center offset is 5/2 = 2.5 and lane 2 center offset is 5 + 4/2 = 7\n		\n\n distance along the road segment\n		\n\n lane specifier, starting from center -1, -2, ... is on the right side, 1, 2... on the left\n\nC++: roadmanager::Road::GetCenterOffset(double, int) --> double", pybind11::arg("s"), pybind11::arg("lane_id"));
		cl.def("GetLaneInfoByS", [](roadmanager::Road &o, double const & a0, int const & a1, int const & a2) -> roadmanager::LaneInfo { return o.GetLaneInfoByS(a0, a1, a2); }, "", pybind11::arg("s"), pybind11::arg("start_lane_link_idx"), pybind11::arg("start_lane_id"));
		cl.def("GetLaneInfoByS", (struct roadmanager::LaneInfo (roadmanager::Road::*)(double, int, int, int)) &roadmanager::Road::GetLaneInfoByS, "C++: roadmanager::Road::GetLaneInfoByS(double, int, int, int) --> struct roadmanager::LaneInfo", pybind11::arg("s"), pybind11::arg("start_lane_link_idx"), pybind11::arg("start_lane_id"), pybind11::arg("laneTypeMask"));
		cl.def("GetConnectingLaneId", (int (roadmanager::Road::*)(class roadmanager::RoadLink *, int, int)) &roadmanager::Road::GetConnectingLaneId, "C++: roadmanager::Road::GetConnectingLaneId(class roadmanager::RoadLink *, int, int) --> int", pybind11::arg("road_link"), pybind11::arg("fromLaneId"), pybind11::arg("connectingRoadId"));
		cl.def("GetLaneWidthByS", (double (roadmanager::Road::*)(double, int)) &roadmanager::Road::GetLaneWidthByS, "C++: roadmanager::Road::GetLaneWidthByS(double, int) --> double", pybind11::arg("s"), pybind11::arg("lane_id"));
		cl.def("GetSpeedByS", (double (roadmanager::Road::*)(double)) &roadmanager::Road::GetSpeedByS, "C++: roadmanager::Road::GetSpeedByS(double) --> double", pybind11::arg("s"));
		cl.def("GetZAndPitchByS", (bool (roadmanager::Road::*)(double, double *, double *, int *)) &roadmanager::Road::GetZAndPitchByS, "C++: roadmanager::Road::GetZAndPitchByS(double, double *, double *, int *) --> bool", pybind11::arg("s"), pybind11::arg("z"), pybind11::arg("pitch"), pybind11::arg("index"));
		cl.def("UpdateZAndRollBySAndT", (bool (roadmanager::Road::*)(double, double, double *, double *, int *)) &roadmanager::Road::UpdateZAndRollBySAndT, "C++: roadmanager::Road::UpdateZAndRollBySAndT(double, double, double *, double *, int *) --> bool", pybind11::arg("s"), pybind11::arg("t"), pybind11::arg("z"), pybind11::arg("roll"), pybind11::arg("index"));
		cl.def("GetNumberOfLaneSections", (int (roadmanager::Road::*)()) &roadmanager::Road::GetNumberOfLaneSections, "C++: roadmanager::Road::GetNumberOfLaneSections() --> int");
		cl.def("SetLength", (void (roadmanager::Road::*)(double)) &roadmanager::Road::SetLength, "C++: roadmanager::Road::SetLength(double) --> void", pybind11::arg("length"));
		cl.def("GetLength", (double (roadmanager::Road::*)() const) &roadmanager::Road::GetLength, "C++: roadmanager::Road::GetLength() const --> double");
		cl.def("SetJunction", (void (roadmanager::Road::*)(int)) &roadmanager::Road::SetJunction, "C++: roadmanager::Road::SetJunction(int) --> void", pybind11::arg("junction"));
		cl.def("GetJunction", (int (roadmanager::Road::*)() const) &roadmanager::Road::GetJunction, "C++: roadmanager::Road::GetJunction() const --> int");
		cl.def("AddLink", (void (roadmanager::Road::*)(class roadmanager::RoadLink *)) &roadmanager::Road::AddLink, "C++: roadmanager::Road::AddLink(class roadmanager::RoadLink *) --> void", pybind11::arg("link"));
		cl.def("GetNumberOfRoadTypes", (int (roadmanager::Road::*)() const) &roadmanager::Road::GetNumberOfRoadTypes, "C++: roadmanager::Road::GetNumberOfRoadTypes() const --> int");
		cl.def("GetLink", (class roadmanager::RoadLink * (roadmanager::Road::*)(roadmanager::LinkType)) &roadmanager::Road::GetLink, "C++: roadmanager::Road::GetLink(roadmanager::LinkType) --> class roadmanager::RoadLink *", pybind11::return_value_policy::automatic, pybind11::arg("type"));
		cl.def("AddLine", (void (roadmanager::Road::*)(class roadmanager::Line *)) &roadmanager::Road::AddLine, "C++: roadmanager::Road::AddLine(class roadmanager::Line *) --> void", pybind11::arg("line"));
		cl.def("AddArc", (void (roadmanager::Road::*)(class roadmanager::Arc *)) &roadmanager::Road::AddArc, "C++: roadmanager::Road::AddArc(class roadmanager::Arc *) --> void", pybind11::arg("arc"));
		cl.def("AddSpiral", (void (roadmanager::Road::*)(class roadmanager::Spiral *)) &roadmanager::Road::AddSpiral, "C++: roadmanager::Road::AddSpiral(class roadmanager::Spiral *) --> void", pybind11::arg("spiral"));
		cl.def("AddPoly3", (void (roadmanager::Road::*)(class roadmanager::Poly3 *)) &roadmanager::Road::AddPoly3, "C++: roadmanager::Road::AddPoly3(class roadmanager::Poly3 *) --> void", pybind11::arg("poly3"));
		cl.def("AddParamPoly3", (void (roadmanager::Road::*)(class roadmanager::ParamPoly3 *)) &roadmanager::Road::AddParamPoly3, "C++: roadmanager::Road::AddParamPoly3(class roadmanager::ParamPoly3 *) --> void", pybind11::arg("param_poly3"));
		cl.def("AddElevation", (void (roadmanager::Road::*)(class roadmanager::Elevation *)) &roadmanager::Road::AddElevation, "C++: roadmanager::Road::AddElevation(class roadmanager::Elevation *) --> void", pybind11::arg("elevation"));
		cl.def("AddSuperElevation", (void (roadmanager::Road::*)(class roadmanager::Elevation *)) &roadmanager::Road::AddSuperElevation, "C++: roadmanager::Road::AddSuperElevation(class roadmanager::Elevation *) --> void", pybind11::arg("super_elevation"));
		cl.def("AddLaneSection", (void (roadmanager::Road::*)(class roadmanager::LaneSection *)) &roadmanager::Road::AddLaneSection, "C++: roadmanager::Road::AddLaneSection(class roadmanager::LaneSection *) --> void", pybind11::arg("lane_section"));
		cl.def("AddLaneOffset", (void (roadmanager::Road::*)(class roadmanager::LaneOffset *)) &roadmanager::Road::AddLaneOffset, "C++: roadmanager::Road::AddLaneOffset(class roadmanager::LaneOffset *) --> void", pybind11::arg("lane_offset"));
		cl.def("AddSignal", (void (roadmanager::Road::*)(class roadmanager::Signal *)) &roadmanager::Road::AddSignal, "C++: roadmanager::Road::AddSignal(class roadmanager::Signal *) --> void", pybind11::arg("signal"));
		cl.def("AddObject", (void (roadmanager::Road::*)(class roadmanager::RMObject *)) &roadmanager::Road::AddObject, "C++: roadmanager::Road::AddObject(class roadmanager::RMObject *) --> void", pybind11::arg("object"));
		cl.def("GetElevation", (class roadmanager::Elevation * (roadmanager::Road::*)(int)) &roadmanager::Road::GetElevation, "C++: roadmanager::Road::GetElevation(int) --> class roadmanager::Elevation *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetSuperElevation", (class roadmanager::Elevation * (roadmanager::Road::*)(int)) &roadmanager::Road::GetSuperElevation, "C++: roadmanager::Road::GetSuperElevation(int) --> class roadmanager::Elevation *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetNumberOfSignals", (int (roadmanager::Road::*)()) &roadmanager::Road::GetNumberOfSignals, "C++: roadmanager::Road::GetNumberOfSignals() --> int");
		cl.def("GetSignal", (class roadmanager::Signal * (roadmanager::Road::*)(int)) &roadmanager::Road::GetSignal, "C++: roadmanager::Road::GetSignal(int) --> class roadmanager::Signal *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetNumberOfObjects", (int (roadmanager::Road::*)()) &roadmanager::Road::GetNumberOfObjects, "C++: roadmanager::Road::GetNumberOfObjects() --> int");
		cl.def("GetObject", (class roadmanager::RMObject * (roadmanager::Road::*)(int)) &roadmanager::Road::GetObject, "C++: roadmanager::Road::GetObject(int) --> class roadmanager::RMObject *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetNumberOfElevations", (int (roadmanager::Road::*)()) &roadmanager::Road::GetNumberOfElevations, "C++: roadmanager::Road::GetNumberOfElevations() --> int");
		cl.def("GetNumberOfSuperElevations", (int (roadmanager::Road::*)()) &roadmanager::Road::GetNumberOfSuperElevations, "C++: roadmanager::Road::GetNumberOfSuperElevations() --> int");
		cl.def("GetLaneOffset", (double (roadmanager::Road::*)(double)) &roadmanager::Road::GetLaneOffset, "C++: roadmanager::Road::GetLaneOffset(double) --> double", pybind11::arg("s"));
		cl.def("GetLaneOffsetPrim", (double (roadmanager::Road::*)(double)) &roadmanager::Road::GetLaneOffsetPrim, "C++: roadmanager::Road::GetLaneOffsetPrim(double) --> double", pybind11::arg("s"));
		cl.def("GetNumberOfLanes", (int (roadmanager::Road::*)(double)) &roadmanager::Road::GetNumberOfLanes, "C++: roadmanager::Road::GetNumberOfLanes(double) --> int", pybind11::arg("s"));
		cl.def("GetNumberOfDrivingLanes", (int (roadmanager::Road::*)(double)) &roadmanager::Road::GetNumberOfDrivingLanes, "C++: roadmanager::Road::GetNumberOfDrivingLanes(double) --> int", pybind11::arg("s"));
		cl.def("GetDrivingLaneByIdx", (class roadmanager::Lane * (roadmanager::Road::*)(double, int)) &roadmanager::Road::GetDrivingLaneByIdx, "C++: roadmanager::Road::GetDrivingLaneByIdx(double, int) --> class roadmanager::Lane *", pybind11::return_value_policy::automatic, pybind11::arg("s"), pybind11::arg("idx"));
		cl.def("GetDrivingLaneById", (class roadmanager::Lane * (roadmanager::Road::*)(double, int)) &roadmanager::Road::GetDrivingLaneById, "C++: roadmanager::Road::GetDrivingLaneById(double, int) --> class roadmanager::Lane *", pybind11::return_value_policy::automatic, pybind11::arg("s"), pybind11::arg("idx"));
		cl.def("GetNumberOfDrivingLanesSide", (int (roadmanager::Road::*)(double, int)) &roadmanager::Road::GetNumberOfDrivingLanesSide, "C++: roadmanager::Road::GetNumberOfDrivingLanesSide(double, int) --> int", pybind11::arg("s"), pybind11::arg("side"));
		cl.def("GetWidth", [](roadmanager::Road &o, double const & a0, int const & a1) -> double { return o.GetWidth(a0, a1); }, "", pybind11::arg("s"), pybind11::arg("side"));
		cl.def("GetWidth", (double (roadmanager::Road::*)(double, int, int)) &roadmanager::Road::GetWidth, "<summary>Get width of road</summary>\n <param name=\"s\">Longitudinal position/distance along the road</param>\n <param name=\"side\">Side of the road: -1=right, 1=left, 0=both</param>\n <param name=\"laneTypeMask\">Bitmask specifying what lane types to consider - see Lane::LaneType</param>\n <returns>Width (m)</returns>\n\nC++: roadmanager::Road::GetWidth(double, int, int) --> double", pybind11::arg("s"), pybind11::arg("side"), pybind11::arg("laneTypeMask"));
	}
}


// File: unknown/unknown_5.cpp
#include <iostream> // --trace
#include <iterator> // __gnu_cxx::__normal_iterator
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
#include "esminiLib.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown_5(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B34_[roadmanager::LaneRoadLaneConnection] ";
	{ // roadmanager::LaneRoadLaneConnection file: line:1327
		pybind11::class_<roadmanager::LaneRoadLaneConnection, std::shared_ptr<roadmanager::LaneRoadLaneConnection>> cl(M("roadmanager"), "LaneRoadLaneConnection", "");
		cl.def( pybind11::init( [](){ return new roadmanager::LaneRoadLaneConnection(); } ) );
		cl.def( pybind11::init<int, int, int>(), pybind11::arg("lane_id"), pybind11::arg("connecting_road_id"), pybind11::arg("connecting_lane_id") );

		cl.def_readwrite("contact_point_", &roadmanager::LaneRoadLaneConnection::contact_point_);
		cl.def("SetLane", (void (roadmanager::LaneRoadLaneConnection::*)(int)) &roadmanager::LaneRoadLaneConnection::SetLane, "C++: roadmanager::LaneRoadLaneConnection::SetLane(int) --> void", pybind11::arg("id"));
		cl.def("SetConnectingRoad", (void (roadmanager::LaneRoadLaneConnection::*)(int)) &roadmanager::LaneRoadLaneConnection::SetConnectingRoad, "C++: roadmanager::LaneRoadLaneConnection::SetConnectingRoad(int) --> void", pybind11::arg("id"));
		cl.def("SetConnectingLane", (void (roadmanager::LaneRoadLaneConnection::*)(int)) &roadmanager::LaneRoadLaneConnection::SetConnectingLane, "C++: roadmanager::LaneRoadLaneConnection::SetConnectingLane(int) --> void", pybind11::arg("id"));
		cl.def("GetLaneId", (int (roadmanager::LaneRoadLaneConnection::*)()) &roadmanager::LaneRoadLaneConnection::GetLaneId, "C++: roadmanager::LaneRoadLaneConnection::GetLaneId() --> int");
		cl.def("GetConnectingRoadId", (int (roadmanager::LaneRoadLaneConnection::*)()) &roadmanager::LaneRoadLaneConnection::GetConnectingRoadId, "C++: roadmanager::LaneRoadLaneConnection::GetConnectingRoadId() --> int");
		cl.def("GetConnectinglaneId", (int (roadmanager::LaneRoadLaneConnection::*)()) &roadmanager::LaneRoadLaneConnection::GetConnectinglaneId, "C++: roadmanager::LaneRoadLaneConnection::GetConnectinglaneId() --> int");
	}
	std::cout << "B35_[roadmanager::JunctionLaneLink] ";
	{ // roadmanager::JunctionLaneLink file: line:1348
		pybind11::class_<roadmanager::JunctionLaneLink, std::shared_ptr<roadmanager::JunctionLaneLink>> cl(M("roadmanager"), "JunctionLaneLink", "");
		cl.def( pybind11::init<int, int>(), pybind11::arg("from"), pybind11::arg("to") );

		cl.def_readwrite("from_", &roadmanager::JunctionLaneLink::from_);
		cl.def_readwrite("to_", &roadmanager::JunctionLaneLink::to_);
		cl.def("Print", (void (roadmanager::JunctionLaneLink::*)()) &roadmanager::JunctionLaneLink::Print, "C++: roadmanager::JunctionLaneLink::Print() --> void");
	}
	std::cout << "B36_[roadmanager::Connection] ";
	{ // roadmanager::Connection file: line:1357
		pybind11::class_<roadmanager::Connection, std::shared_ptr<roadmanager::Connection>> cl(M("roadmanager"), "Connection", "");
		cl.def( pybind11::init<class roadmanager::Road *, class roadmanager::Road *, enum roadmanager::ContactPointType>(), pybind11::arg("incoming_road"), pybind11::arg("connecting_road"), pybind11::arg("contact_point") );

		cl.def( pybind11::init( [](roadmanager::Connection const &o){ return new roadmanager::Connection(o); } ) );
		cl.def("GetNumberOfLaneLinks", (int (roadmanager::Connection::*)()) &roadmanager::Connection::GetNumberOfLaneLinks, "C++: roadmanager::Connection::GetNumberOfLaneLinks() --> int");
		cl.def("GetLaneLink", (class roadmanager::JunctionLaneLink * (roadmanager::Connection::*)(int)) &roadmanager::Connection::GetLaneLink, "C++: roadmanager::Connection::GetLaneLink(int) --> class roadmanager::JunctionLaneLink *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetConnectingLaneId", (int (roadmanager::Connection::*)(int)) &roadmanager::Connection::GetConnectingLaneId, "C++: roadmanager::Connection::GetConnectingLaneId(int) --> int", pybind11::arg("incoming_lane_id"));
		cl.def("GetIncomingRoad", (class roadmanager::Road * (roadmanager::Connection::*)()) &roadmanager::Connection::GetIncomingRoad, "C++: roadmanager::Connection::GetIncomingRoad() --> class roadmanager::Road *", pybind11::return_value_policy::automatic);
		cl.def("GetConnectingRoad", (class roadmanager::Road * (roadmanager::Connection::*)()) &roadmanager::Connection::GetConnectingRoad, "C++: roadmanager::Connection::GetConnectingRoad() --> class roadmanager::Road *", pybind11::return_value_policy::automatic);
		cl.def("GetContactPoint", (enum roadmanager::ContactPointType (roadmanager::Connection::*)()) &roadmanager::Connection::GetContactPoint, "C++: roadmanager::Connection::GetContactPoint() --> enum roadmanager::ContactPointType");
		cl.def("AddJunctionLaneLink", (void (roadmanager::Connection::*)(int, int)) &roadmanager::Connection::AddJunctionLaneLink, "C++: roadmanager::Connection::AddJunctionLaneLink(int, int) --> void", pybind11::arg("from"), pybind11::arg("to"));
		cl.def("Print", (void (roadmanager::Connection::*)()) &roadmanager::Connection::Print, "C++: roadmanager::Connection::Print() --> void");
	}
	std::cout << "B37_[roadmanager::Controller] ";
	{ // roadmanager::Controller file: line:1384
		pybind11::class_<roadmanager::Controller, std::shared_ptr<roadmanager::Controller>> cl(M("roadmanager"), "Controller", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Controller(); } ) );
		cl.def( pybind11::init( [](roadmanager::Controller const &o){ return new roadmanager::Controller(o); } ) );
		cl.def("GetNumberOfControls", (int (roadmanager::Controller::*)()) &roadmanager::Controller::GetNumberOfControls, "C++: roadmanager::Controller::GetNumberOfControls() --> int");
		cl.def("GetId", (int (roadmanager::Controller::*)()) &roadmanager::Controller::GetId, "C++: roadmanager::Controller::GetId() --> int");
		cl.def("GetSequence", (int (roadmanager::Controller::*)()) &roadmanager::Controller::GetSequence, "C++: roadmanager::Controller::GetSequence() --> int");
		cl.def("assign", (class roadmanager::Controller & (roadmanager::Controller::*)(const class roadmanager::Controller &)) &roadmanager::Controller::operator=, "C++: roadmanager::Controller::operator=(const class roadmanager::Controller &) --> class roadmanager::Controller &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B38_[roadmanager::Junction] ";
	{ // roadmanager::Junction file: line:1412
		pybind11::class_<roadmanager::Junction, std::shared_ptr<roadmanager::Junction>> cl(M("roadmanager"), "Junction", "");
		cl.def( pybind11::init( [](roadmanager::Junction const &o){ return new roadmanager::Junction(o); } ) );
		cl.def("GetId", (int (roadmanager::Junction::*)()) &roadmanager::Junction::GetId, "C++: roadmanager::Junction::GetId() --> int");
		cl.def("GetNumberOfConnections", (int (roadmanager::Junction::*)()) &roadmanager::Junction::GetNumberOfConnections, "C++: roadmanager::Junction::GetNumberOfConnections() --> int");
		cl.def("GetNumberOfRoadConnections", (int (roadmanager::Junction::*)(int, int)) &roadmanager::Junction::GetNumberOfRoadConnections, "C++: roadmanager::Junction::GetNumberOfRoadConnections(int, int) --> int", pybind11::arg("roadId"), pybind11::arg("laneId"));
		cl.def("GetRoadConnectionByIdx", [](roadmanager::Junction &o, int const & a0, int const & a1, int const & a2) -> roadmanager::LaneRoadLaneConnection { return o.GetRoadConnectionByIdx(a0, a1, a2); }, "", pybind11::arg("roadId"), pybind11::arg("laneId"), pybind11::arg("idx"));
		cl.def("GetRoadConnectionByIdx", (class roadmanager::LaneRoadLaneConnection (roadmanager::Junction::*)(int, int, int, int)) &roadmanager::Junction::GetRoadConnectionByIdx, "C++: roadmanager::Junction::GetRoadConnectionByIdx(int, int, int, int) --> class roadmanager::LaneRoadLaneConnection", pybind11::arg("roadId"), pybind11::arg("laneId"), pybind11::arg("idx"), pybind11::arg("laneTypeMask"));
		cl.def("AddConnection", (void (roadmanager::Junction::*)(class roadmanager::Connection *)) &roadmanager::Junction::AddConnection, "C++: roadmanager::Junction::AddConnection(class roadmanager::Connection *) --> void", pybind11::arg("connection"));
		cl.def("GetNoConnectionsFromRoadId", (int (roadmanager::Junction::*)(int)) &roadmanager::Junction::GetNoConnectionsFromRoadId, "C++: roadmanager::Junction::GetNoConnectionsFromRoadId(int) --> int", pybind11::arg("incomingRoadId"));
		cl.def("GetConnectionByIdx", (class roadmanager::Connection * (roadmanager::Junction::*)(int)) &roadmanager::Junction::GetConnectionByIdx, "C++: roadmanager::Junction::GetConnectionByIdx(int) --> class roadmanager::Connection *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetConnectingRoadIdFromIncomingRoadId", (int (roadmanager::Junction::*)(int, int)) &roadmanager::Junction::GetConnectingRoadIdFromIncomingRoadId, "C++: roadmanager::Junction::GetConnectingRoadIdFromIncomingRoadId(int, int) --> int", pybind11::arg("incomingRoadId"), pybind11::arg("index"));
		cl.def("Print", (void (roadmanager::Junction::*)()) &roadmanager::Junction::Print, "C++: roadmanager::Junction::Print() --> void");
		cl.def("IsOsiIntersection", (bool (roadmanager::Junction::*)()) &roadmanager::Junction::IsOsiIntersection, "C++: roadmanager::Junction::IsOsiIntersection() --> bool");
		cl.def("GetGlobalId", (int (roadmanager::Junction::*)()) &roadmanager::Junction::GetGlobalId, "C++: roadmanager::Junction::GetGlobalId() --> int");
		cl.def("SetGlobalId", (void (roadmanager::Junction::*)()) &roadmanager::Junction::SetGlobalId, "C++: roadmanager::Junction::SetGlobalId() --> void");
		cl.def("GetNumberOfControllers", (int (roadmanager::Junction::*)()) &roadmanager::Junction::GetNumberOfControllers, "C++: roadmanager::Junction::GetNumberOfControllers() --> int");
	}
	std::cout << "B39_[roadmanager::OpenDrive] ";
	{ // roadmanager::OpenDrive file: line:1474
		pybind11::class_<roadmanager::OpenDrive, std::shared_ptr<roadmanager::OpenDrive>> cl(M("roadmanager"), "OpenDrive", "");
		cl.def( pybind11::init( [](){ return new roadmanager::OpenDrive(); } ) );
		cl.def( pybind11::init<const char *>(), pybind11::arg("filename") );

		cl.def( pybind11::init( [](roadmanager::OpenDrive const &o){ return new roadmanager::OpenDrive(o); } ) );
		cl.def("LoadOpenDriveFile", [](roadmanager::OpenDrive &o, const char * a0) -> bool { return o.LoadOpenDriveFile(a0); }, "", pybind11::arg("filename"));
		cl.def("LoadOpenDriveFile", (bool (roadmanager::OpenDrive::*)(const char *, bool)) &roadmanager::OpenDrive::LoadOpenDriveFile, "			Load a road network, specified in the OpenDRIVE file format\n			\n\n OpenDRIVE file\n			\n\n If true any old road data will be erased, else new will be added to the old\n\nC++: roadmanager::OpenDrive::LoadOpenDriveFile(const char *, bool) --> bool", pybind11::arg("filename"), pybind11::arg("replace"));
		cl.def("InitGlobalLaneIds", (void (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::InitGlobalLaneIds, "			Initialize the global ids for lanes\n\nC++: roadmanager::OpenDrive::InitGlobalLaneIds() --> void");
		cl.def("SetRoadOSI", (bool (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::SetRoadOSI, "			Setting information based on the OSI standards for OpenDrive elements\n\nC++: roadmanager::OpenDrive::SetRoadOSI() --> bool");
		cl.def("SetLaneOSIPoints", (void (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::SetLaneOSIPoints, "C++: roadmanager::OpenDrive::SetLaneOSIPoints() --> void");
		cl.def("SetRoadMarkOSIPoints", (void (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::SetRoadMarkOSIPoints, "C++: roadmanager::OpenDrive::SetRoadMarkOSIPoints() --> void");
		cl.def("SetLaneBoundaryPoints", (void (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::SetLaneBoundaryPoints, "			Checks all lanes - if a lane has RoadMarks it does nothing. If a lane does not have roadmarks\n			then it creates a LaneBoundary following the lane border (left border for left lanes, right border for right lanes)\n\nC++: roadmanager::OpenDrive::SetLaneBoundaryPoints() --> void");
		cl.def("GetRoadById", (class roadmanager::Road * (roadmanager::OpenDrive::*)(int)) &roadmanager::OpenDrive::GetRoadById, "			Retrieve a road segment specified by road ID\n			\n\n road ID as specified in the OpenDRIVE file\n\nC++: roadmanager::OpenDrive::GetRoadById(int) --> class roadmanager::Road *", pybind11::return_value_policy::automatic, pybind11::arg("id"));
		cl.def("GetRoadByIdx", (class roadmanager::Road * (roadmanager::OpenDrive::*)(int)) &roadmanager::OpenDrive::GetRoadByIdx, "			Retrieve a road segment specified by road vector element index\n			useful for iterating over all available road segments, e.g:\n			for (int i = 0; i < GetNumOfRoads(); i++)\n			{\n				int n_lanes = GetRoadyIdx(i)->GetNumberOfLanes();\n			...\n			\n\n index into the vector of roads\n\nC++: roadmanager::OpenDrive::GetRoadByIdx(int) --> class roadmanager::Road *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetGeometryByIdx", (class roadmanager::Geometry * (roadmanager::OpenDrive::*)(int, int)) &roadmanager::OpenDrive::GetGeometryByIdx, "C++: roadmanager::OpenDrive::GetGeometryByIdx(int, int) --> class roadmanager::Geometry *", pybind11::return_value_policy::automatic, pybind11::arg("road_idx"), pybind11::arg("geom_idx"));
		cl.def("GetTrackIdxById", (int (roadmanager::OpenDrive::*)(int)) &roadmanager::OpenDrive::GetTrackIdxById, "C++: roadmanager::OpenDrive::GetTrackIdxById(int) --> int", pybind11::arg("id"));
		cl.def("GetTrackIdByIdx", (int (roadmanager::OpenDrive::*)(int)) &roadmanager::OpenDrive::GetTrackIdByIdx, "C++: roadmanager::OpenDrive::GetTrackIdByIdx(int) --> int", pybind11::arg("idx"));
		cl.def("GetNumOfRoads", (int (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::GetNumOfRoads, "C++: roadmanager::OpenDrive::GetNumOfRoads() --> int");
		cl.def("GetJunctionById", (class roadmanager::Junction * (roadmanager::OpenDrive::*)(int)) &roadmanager::OpenDrive::GetJunctionById, "C++: roadmanager::OpenDrive::GetJunctionById(int) --> class roadmanager::Junction *", pybind11::return_value_policy::automatic, pybind11::arg("id"));
		cl.def("GetJunctionByIdx", (class roadmanager::Junction * (roadmanager::OpenDrive::*)(int)) &roadmanager::OpenDrive::GetJunctionByIdx, "C++: roadmanager::OpenDrive::GetJunctionByIdx(int) --> class roadmanager::Junction *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetNumOfJunctions", (int (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::GetNumOfJunctions, "C++: roadmanager::OpenDrive::GetNumOfJunctions() --> int");
		cl.def("IsDirectlyConnected", (int (roadmanager::OpenDrive::*)(int, int, double &)) &roadmanager::OpenDrive::IsDirectlyConnected, "			Check if two roads are connected directly\n			\n\n Id of the first road\n			\n\n Id of the second road\n			\n\n if connected, the angle between road 2 and road 1 is returned here\n			\n\n 0 if not connected, -1 if road 2 is the predecessor of road 1, +1 if road 2 is the successor of road 1\n\nC++: roadmanager::OpenDrive::IsDirectlyConnected(int, int, double &) --> int", pybind11::arg("road1_id"), pybind11::arg("road2_id"), pybind11::arg("angle"));
		cl.def("CheckConnections", (int (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::CheckConnections, "			Add any missing connections so that road connectivity is two-ways\n			Look at all road connections, and make sure they are defined both ways\n			\n\n index into the vector of roads\n			\n\n number of added connections\n\nC++: roadmanager::OpenDrive::CheckConnections() --> int");
		cl.def("CheckLink", (int (roadmanager::OpenDrive::*)(class roadmanager::Road *, class roadmanager::RoadLink *, enum roadmanager::ContactPointType)) &roadmanager::OpenDrive::CheckLink, "C++: roadmanager::OpenDrive::CheckLink(class roadmanager::Road *, class roadmanager::RoadLink *, enum roadmanager::ContactPointType) --> int", pybind11::arg("road"), pybind11::arg("link"), pybind11::arg("expected_contact_point_type"));
		cl.def("CheckConnectedRoad", (int (roadmanager::OpenDrive::*)(class roadmanager::Road *, class roadmanager::RoadLink *, enum roadmanager::ContactPointType, class roadmanager::RoadLink *)) &roadmanager::OpenDrive::CheckConnectedRoad, "C++: roadmanager::OpenDrive::CheckConnectedRoad(class roadmanager::Road *, class roadmanager::RoadLink *, enum roadmanager::ContactPointType, class roadmanager::RoadLink *) --> int", pybind11::arg("road"), pybind11::arg("link"), pybind11::arg("expected_contact_point_type"), pybind11::arg("link2"));
		cl.def("CheckJunctionConnection", (int (roadmanager::OpenDrive::*)(class roadmanager::Junction *, class roadmanager::Connection *)) &roadmanager::OpenDrive::CheckJunctionConnection, "C++: roadmanager::OpenDrive::CheckJunctionConnection(class roadmanager::Junction *, class roadmanager::Connection *) --> int", pybind11::arg("junction"), pybind11::arg("connection"));
		cl.def("GetNumberOfControllers", (int (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::GetNumberOfControllers, "C++: roadmanager::OpenDrive::GetNumberOfControllers() --> int");
		cl.def("GetControllerByIdx", (class roadmanager::Controller * (roadmanager::OpenDrive::*)(int)) &roadmanager::OpenDrive::GetControllerByIdx, "C++: roadmanager::OpenDrive::GetControllerByIdx(int) --> class roadmanager::Controller *", pybind11::return_value_policy::automatic, pybind11::arg("index"));
		cl.def("GetControllerById", (class roadmanager::Controller * (roadmanager::OpenDrive::*)(int)) &roadmanager::OpenDrive::GetControllerById, "C++: roadmanager::OpenDrive::GetControllerById(int) --> class roadmanager::Controller *", pybind11::return_value_policy::automatic, pybind11::arg("id"));
		cl.def("AddController", (void (roadmanager::OpenDrive::*)(class roadmanager::Controller)) &roadmanager::OpenDrive::AddController, "C++: roadmanager::OpenDrive::AddController(class roadmanager::Controller) --> void", pybind11::arg("controller"));
		cl.def("Print", (void (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::Print, "C++: roadmanager::OpenDrive::Print() --> void");
	}
}


// File: unknown/unknown_6.cpp
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
#include "esminiLib.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown_6(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B40_[roadmanager::CoordinateSystem] ";
	// roadmanager::CoordinateSystem file: line:1618
	pybind11::enum_<roadmanager::CoordinateSystem>(M("roadmanager"), "CoordinateSystem", "")
		.value("CS_UNDEFINED", roadmanager::CoordinateSystem::CS_UNDEFINED)
		.value("CS_ENTITY", roadmanager::CoordinateSystem::CS_ENTITY)
		.value("CS_LANE", roadmanager::CoordinateSystem::CS_LANE)
		.value("CS_ROAD", roadmanager::CoordinateSystem::CS_ROAD)
		.value("CS_TRAJECTORY", roadmanager::CoordinateSystem::CS_TRAJECTORY);

;

	std::cout << "B41_[roadmanager::RelativeDistanceType] ";
	// roadmanager::RelativeDistanceType file: line:1627
	pybind11::enum_<roadmanager::RelativeDistanceType>(M("roadmanager"), "RelativeDistanceType", "")
		.value("REL_DIST_UNDEFINED", roadmanager::RelativeDistanceType::REL_DIST_UNDEFINED)
		.value("REL_DIST_LATERAL", roadmanager::RelativeDistanceType::REL_DIST_LATERAL)
		.value("REL_DIST_LONGITUDINAL", roadmanager::RelativeDistanceType::REL_DIST_LONGITUDINAL)
		.value("REL_DIST_CARTESIAN", roadmanager::RelativeDistanceType::REL_DIST_CARTESIAN)
		.value("REL_DIST_EUCLIDIAN", roadmanager::RelativeDistanceType::REL_DIST_EUCLIDIAN);

;

	std::cout << "B42_[roadmanager::Position] ";
	{ // roadmanager::Position file: line:1640
		pybind11::class_<roadmanager::Position, std::shared_ptr<roadmanager::Position>> cl(M("roadmanager"), "Position", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Position(); } ) );
		cl.def( pybind11::init<int, double, double>(), pybind11::arg("track_id"), pybind11::arg("s"), pybind11::arg("t") );

		cl.def( pybind11::init<int, int, double, double>(), pybind11::arg("track_id"), pybind11::arg("lane_id"), pybind11::arg("s"), pybind11::arg("offset") );

		cl.def( pybind11::init<double, double, double, double, double, double>(), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("p"), pybind11::arg("r") );

		cl.def( pybind11::init<double, double, double, double, double, double, bool>(), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("p"), pybind11::arg("r"), pybind11::arg("calculateTrackPosition") );

		cl.def( pybind11::init( [](roadmanager::Position const &o){ return new roadmanager::Position(o); } ) );

		pybind11::enum_<roadmanager::Position::PositionType>(cl, "PositionType", "")
			.value("NORMAL", roadmanager::Position::PositionType::NORMAL)
			.value("ROUTE", roadmanager::Position::PositionType::ROUTE)
			.value("RELATIVE_OBJECT", roadmanager::Position::PositionType::RELATIVE_OBJECT)
			.value("RELATIVE_WORLD", roadmanager::Position::PositionType::RELATIVE_WORLD)
			.value("RELATIVE_LANE", roadmanager::Position::PositionType::RELATIVE_LANE)
			.value("RELATIVE_ROAD", roadmanager::Position::PositionType::RELATIVE_ROAD);


		pybind11::enum_<roadmanager::Position::OrientationType>(cl, "OrientationType", "")
			.value("ORIENTATION_RELATIVE", roadmanager::Position::OrientationType::ORIENTATION_RELATIVE)
			.value("ORIENTATION_ABSOLUTE", roadmanager::Position::OrientationType::ORIENTATION_ABSOLUTE);


		pybind11::enum_<roadmanager::Position::LookAheadMode>(cl, "LookAheadMode", "")
			.value("LOOKAHEADMODE_AT_LANE_CENTER", roadmanager::Position::LookAheadMode::LOOKAHEADMODE_AT_LANE_CENTER)
			.value("LOOKAHEADMODE_AT_ROAD_CENTER", roadmanager::Position::LookAheadMode::LOOKAHEADMODE_AT_ROAD_CENTER)
			.value("LOOKAHEADMODE_AT_CURRENT_LATERAL_OFFSET", roadmanager::Position::LookAheadMode::LOOKAHEADMODE_AT_CURRENT_LATERAL_OFFSET);


		pybind11::enum_<roadmanager::Position::ErrorCode>(cl, "ErrorCode", "")
			.value("ERROR_NO_ERROR", roadmanager::Position::ErrorCode::ERROR_NO_ERROR)
			.value("ERROR_GENERIC", roadmanager::Position::ErrorCode::ERROR_GENERIC)
			.value("ERROR_END_OF_ROAD", roadmanager::Position::ErrorCode::ERROR_END_OF_ROAD)
			.value("ERROR_END_OF_ROUTE", roadmanager::Position::ErrorCode::ERROR_END_OF_ROUTE)
			.value("ERROR_OFF_ROAD", roadmanager::Position::ErrorCode::ERROR_OFF_ROAD);


		pybind11::enum_<roadmanager::Position::UpdateTrackPosMode>(cl, "UpdateTrackPosMode", "")
			.value("UPDATE_NOT_XYZH", roadmanager::Position::UpdateTrackPosMode::UPDATE_NOT_XYZH)
			.value("UPDATE_XYZ", roadmanager::Position::UpdateTrackPosMode::UPDATE_XYZ)
			.value("UPDATE_XYZH", roadmanager::Position::UpdateTrackPosMode::UPDATE_XYZH);


		pybind11::enum_<roadmanager::Position::PositionStatusMode>(cl, "PositionStatusMode", "")
			.value("POS_STATUS_END_OF_ROAD", roadmanager::Position::PositionStatusMode::POS_STATUS_END_OF_ROAD)
			.value("POS_STATUS_END_OF_ROUTE", roadmanager::Position::PositionStatusMode::POS_STATUS_END_OF_ROUTE);

		cl.def("Init", (void (roadmanager::Position::*)()) &roadmanager::Position::Init, "C++: roadmanager::Position::Init() --> void");
		cl.def_static("LoadOpenDrive", (bool (*)(const char *)) &roadmanager::Position::LoadOpenDrive, "C++: roadmanager::Position::LoadOpenDrive(const char *) --> bool", pybind11::arg("filename"));
		cl.def_static("GetOpenDrive", (class roadmanager::OpenDrive * (*)()) &roadmanager::Position::GetOpenDrive, "C++: roadmanager::Position::GetOpenDrive() --> class roadmanager::OpenDrive *", pybind11::return_value_policy::automatic);
		cl.def("GotoClosestDrivingLaneAtCurrentPosition", (int (roadmanager::Position::*)()) &roadmanager::Position::GotoClosestDrivingLaneAtCurrentPosition, "C++: roadmanager::Position::GotoClosestDrivingLaneAtCurrentPosition() --> int");
		cl.def("SetTrackPos", [](roadmanager::Position &o, int const & a0, double const & a1, double const & a2) -> roadmanager::Position::ErrorCode { return o.SetTrackPos(a0, a1, a2); }, "", pybind11::arg("track_id"), pybind11::arg("s"), pybind11::arg("t"));
		cl.def("SetTrackPos", (enum roadmanager::Position::ErrorCode (roadmanager::Position::*)(int, double, double, bool)) &roadmanager::Position::SetTrackPos, "		Specify position by track coordinate (road_id, s, t)\n		\n\n Id of the road (track)\n		\n\n Distance to the position along and from the start of the road (track)\n		\n\n update world coordinates x, y... as well - or not\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Position::SetTrackPos(int, double, double, bool) --> enum roadmanager::Position::ErrorCode", pybind11::arg("track_id"), pybind11::arg("s"), pybind11::arg("t"), pybind11::arg("UpdateXY"));
		cl.def("ForceLaneId", (void (roadmanager::Position::*)(int)) &roadmanager::Position::ForceLaneId, "C++: roadmanager::Position::ForceLaneId(int) --> void", pybind11::arg("lane_id"));
		cl.def("SetLanePos", [](roadmanager::Position &o, int const & a0, int const & a1, double const & a2, double const & a3) -> roadmanager::Position::ErrorCode { return o.SetLanePos(a0, a1, a2, a3); }, "", pybind11::arg("track_id"), pybind11::arg("lane_id"), pybind11::arg("s"), pybind11::arg("offset"));
		cl.def("SetLanePos", (enum roadmanager::Position::ErrorCode (roadmanager::Position::*)(int, int, double, double, int)) &roadmanager::Position::SetLanePos, "C++: roadmanager::Position::SetLanePos(int, int, double, double, int) --> enum roadmanager::Position::ErrorCode", pybind11::arg("track_id"), pybind11::arg("lane_id"), pybind11::arg("s"), pybind11::arg("offset"), pybind11::arg("lane_section_idx"));
		cl.def("SetLaneBoundaryPos", [](roadmanager::Position &o, int const & a0, int const & a1, double const & a2, double const & a3) -> void { return o.SetLaneBoundaryPos(a0, a1, a2, a3); }, "", pybind11::arg("track_id"), pybind11::arg("lane_id"), pybind11::arg("s"), pybind11::arg("offset"));
		cl.def("SetLaneBoundaryPos", (void (roadmanager::Position::*)(int, int, double, double, int)) &roadmanager::Position::SetLaneBoundaryPos, "C++: roadmanager::Position::SetLaneBoundaryPos(int, int, double, double, int) --> void", pybind11::arg("track_id"), pybind11::arg("lane_id"), pybind11::arg("s"), pybind11::arg("offset"), pybind11::arg("lane_section_idx"));
		cl.def("SetRoadMarkPos", [](roadmanager::Position &o, int const & a0, int const & a1, int const & a2, int const & a3, int const & a4, double const & a5, double const & a6) -> void { return o.SetRoadMarkPos(a0, a1, a2, a3, a4, a5, a6); }, "", pybind11::arg("track_id"), pybind11::arg("lane_id"), pybind11::arg("roadmark_idx"), pybind11::arg("roadmarktype_idx"), pybind11::arg("roadmarkline_idx"), pybind11::arg("s"), pybind11::arg("offset"));
		cl.def("SetRoadMarkPos", (void (roadmanager::Position::*)(int, int, int, int, int, double, double, int)) &roadmanager::Position::SetRoadMarkPos, "C++: roadmanager::Position::SetRoadMarkPos(int, int, int, int, int, double, double, int) --> void", pybind11::arg("track_id"), pybind11::arg("lane_id"), pybind11::arg("roadmark_idx"), pybind11::arg("roadmarktype_idx"), pybind11::arg("roadmarkline_idx"), pybind11::arg("s"), pybind11::arg("offset"), pybind11::arg("lane_section_idx"));
		cl.def("SetInertiaPos", [](roadmanager::Position &o, double const & a0, double const & a1, double const & a2, double const & a3, double const & a4, double const & a5) -> int { return o.SetInertiaPos(a0, a1, a2, a3, a4, a5); }, "", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("p"), pybind11::arg("r"));
		cl.def("SetInertiaPos", (int (roadmanager::Position::*)(double, double, double, double, double, double, bool)) &roadmanager::Position::SetInertiaPos, "		Specify position by cartesian x, y, z and heading, pitch, roll\n		\n\n x\n		\n\n y\n		\n\n z\n		\n\n heading\n		\n\n pitch\n		\n\n roll\n		\n\n True: road position will be calculated False: don't update road position\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Position::SetInertiaPos(double, double, double, double, double, double, bool) --> int", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("p"), pybind11::arg("r"), pybind11::arg("updateTrackPos"));
		cl.def("SetInertiaPos", [](roadmanager::Position &o, double const & a0, double const & a1, double const & a2) -> int { return o.SetInertiaPos(a0, a1, a2); }, "", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"));
		cl.def("SetInertiaPos", (int (roadmanager::Position::*)(double, double, double, bool)) &roadmanager::Position::SetInertiaPos, "		Specify position by cartesian x, y and heading. z, pitch and roll will be aligned to road.\n		\n\n x\n		\n\n y\n		\n\n heading\n		\n\n True: road position will be calculated False: don't update road position\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Position::SetInertiaPos(double, double, double, bool) --> int", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"), pybind11::arg("updateTrackPos"));
		cl.def("SetHeading", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetHeading, "C++: roadmanager::Position::SetHeading(double) --> void", pybind11::arg("heading"));
		cl.def("SetHeadingRelative", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetHeadingRelative, "C++: roadmanager::Position::SetHeadingRelative(double) --> void", pybind11::arg("heading"));
		cl.def("SetHeadingRelativeRoadDirection", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetHeadingRelativeRoadDirection, "C++: roadmanager::Position::SetHeadingRelativeRoadDirection(double) --> void", pybind11::arg("heading"));
		cl.def("SetRoll", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetRoll, "C++: roadmanager::Position::SetRoll(double) --> void", pybind11::arg("roll"));
		cl.def("SetRollRelative", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetRollRelative, "C++: roadmanager::Position::SetRollRelative(double) --> void", pybind11::arg("roll"));
		cl.def("SetPitch", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetPitch, "C++: roadmanager::Position::SetPitch(double) --> void", pybind11::arg("roll"));
		cl.def("SetPitchRelative", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetPitchRelative, "C++: roadmanager::Position::SetPitchRelative(double) --> void", pybind11::arg("pitch"));
		cl.def("SetZ", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetZ, "C++: roadmanager::Position::SetZ(double) --> void", pybind11::arg("z"));
		cl.def("SetZRelative", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetZRelative, "C++: roadmanager::Position::SetZRelative(double) --> void", pybind11::arg("z"));
		cl.def("EvaluateOrientation", (void (roadmanager::Position::*)()) &roadmanager::Position::EvaluateOrientation, "		\n\nC++: roadmanager::Position::EvaluateOrientation() --> void");
		cl.def("XYZH2TrackPos", [](roadmanager::Position &o, double const & a0, double const & a1, double const & a2, double const & a3) -> roadmanager::Position::ErrorCode { return o.XYZH2TrackPos(a0, a1, a2, a3); }, "", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"));
		cl.def("XYZH2TrackPos", [](roadmanager::Position &o, double const & a0, double const & a1, double const & a2, double const & a3, bool const & a4) -> roadmanager::Position::ErrorCode { return o.XYZH2TrackPos(a0, a1, a2, a3, a4); }, "", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("connectedOnly"));
		cl.def("XYZH2TrackPos", (enum roadmanager::Position::ErrorCode (roadmanager::Position::*)(double, double, double, double, bool, int)) &roadmanager::Position::XYZH2TrackPos, "		Specify position by cartesian coordinate (x, y, z, h)\n		\n\n X-coordinate\n		\n\n Y-coordinate\n		\n\n Z-coordinate\n		\n\n Heading\n		\n\n If true only roads that can be reached from current position will be considered, if false all roads will be considered\n		\n\n If != -1 only this road will be considered else all roads will be searched\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Position::XYZH2TrackPos(double, double, double, double, bool, int) --> enum roadmanager::Position::ErrorCode", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("connectedOnly"), pybind11::arg("roadId"));
		cl.def("MoveToConnectingRoad", [](roadmanager::Position &o, class roadmanager::RoadLink * a0, enum roadmanager::ContactPointType & a1) -> int { return o.MoveToConnectingRoad(a0, a1); }, "", pybind11::arg("road_link"), pybind11::arg("contact_point_type"));
		cl.def("MoveToConnectingRoad", (int (roadmanager::Position::*)(class roadmanager::RoadLink *, enum roadmanager::ContactPointType &, double)) &roadmanager::Position::MoveToConnectingRoad, "C++: roadmanager::Position::MoveToConnectingRoad(class roadmanager::RoadLink *, enum roadmanager::ContactPointType &, double) --> int", pybind11::arg("road_link"), pybind11::arg("contact_point_type"), pybind11::arg("junctionSelectorAngle"));
		cl.def("SetRelativePosition", (void (roadmanager::Position::*)(class roadmanager::Position *, enum roadmanager::Position::PositionType)) &roadmanager::Position::SetRelativePosition, "C++: roadmanager::Position::SetRelativePosition(class roadmanager::Position *, enum roadmanager::Position::PositionType) --> void", pybind11::arg("rel_pos"), pybind11::arg("type"));
		cl.def("GetRelativePosition", (class roadmanager::Position * (roadmanager::Position::*)()) &roadmanager::Position::GetRelativePosition, "C++: roadmanager::Position::GetRelativePosition() --> class roadmanager::Position *", pybind11::return_value_policy::automatic);
		cl.def("ReleaseRelation", (void (roadmanager::Position::*)()) &roadmanager::Position::ReleaseRelation, "C++: roadmanager::Position::ReleaseRelation() --> void");
		cl.def("SetRoute", (int (roadmanager::Position::*)(class roadmanager::Route *)) &roadmanager::Position::SetRoute, "C++: roadmanager::Position::SetRoute(class roadmanager::Route *) --> int", pybind11::arg("route"));
		cl.def("CalcRoutePosition", (int (roadmanager::Position::*)()) &roadmanager::Position::CalcRoutePosition, "C++: roadmanager::Position::CalcRoutePosition() --> int");
		cl.def("GetRoute", (class roadmanager::Route * (roadmanager::Position::*)()) &roadmanager::Position::GetRoute, "C++: roadmanager::Position::GetRoute() --> class roadmanager::Route *", pybind11::return_value_policy::automatic);
		cl.def("GetTrajectory", (class roadmanager::RMTrajectory * (roadmanager::Position::*)()) &roadmanager::Position::GetTrajectory, "C++: roadmanager::Position::GetTrajectory() --> class roadmanager::RMTrajectory *", pybind11::return_value_policy::automatic);
		cl.def("SetTrajectory", (void (roadmanager::Position::*)(class roadmanager::RMTrajectory *)) &roadmanager::Position::SetTrajectory, "C++: roadmanager::Position::SetTrajectory(class roadmanager::RMTrajectory *) --> void", pybind11::arg("trajectory"));
		cl.def("SetRoutePosition", (int (roadmanager::Position::*)(class roadmanager::Position *)) &roadmanager::Position::SetRoutePosition, "		Set the current position along the route.\n		\n\n A regular position created with road, lane or world coordinates\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Position::SetRoutePosition(class roadmanager::Position *) --> int", pybind11::arg("position"));
		cl.def("GetRouteS", (double (roadmanager::Position::*)()) &roadmanager::Position::GetRouteS, "		Retrieve the S-value of the current route position. Note: This is the S along the\n		complete route, not the actual individual roads.\n\nC++: roadmanager::Position::GetRouteS() --> double");
		cl.def("MoveRouteDS", [](roadmanager::Position &o, double const & a0) -> roadmanager::Position::ErrorCode { return o.MoveRouteDS(a0); }, "", pybind11::arg("ds"));
		cl.def("MoveRouteDS", (enum roadmanager::Position::ErrorCode (roadmanager::Position::*)(double, bool)) &roadmanager::Position::MoveRouteDS, "		Move current position forward, or backwards, ds meters along the route\n		\n\n Distance to move, negative will move backwards\n		\n\n Distance considering lateral offset and curvature (true/default) or along centerline (false)\n		\n\n Non zero return value indicates error of some kind, most likely End Of Route\n\nC++: roadmanager::Position::MoveRouteDS(double, bool) --> enum roadmanager::Position::ErrorCode", pybind11::arg("ds"), pybind11::arg("actualDistance"));
		cl.def("SetRouteLanePosition", (int (roadmanager::Position::*)(class roadmanager::Route *, double, int, double)) &roadmanager::Position::SetRouteLanePosition, "		Move current position along the route\n		\n\n Distance to move, negative will move backwards\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Position::SetRouteLanePosition(class roadmanager::Route *, double, int, double) --> int", pybind11::arg("route"), pybind11::arg("route_s"), pybind11::arg("laneId"), pybind11::arg("laneOffset"));
		cl.def("SetRouteS", (enum roadmanager::Position::ErrorCode (roadmanager::Position::*)(class roadmanager::Route *, double)) &roadmanager::Position::SetRouteS, "		Move current position to specified S-value along the route\n		\n\n Distance to move, negative will move backwards\n		\n\n Non zero return value indicates error of some kind, most likely End Of Route\n\nC++: roadmanager::Position::SetRouteS(class roadmanager::Route *, double) --> enum roadmanager::Position::ErrorCode", pybind11::arg("route"), pybind11::arg("route_s"));
		cl.def("MoveTrajectoryDS", (int (roadmanager::Position::*)(double)) &roadmanager::Position::MoveTrajectoryDS, "		Move current position forward, or backwards, ds meters along the trajectory\n		\n\n Distance to move, negative will move backwards\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Position::MoveTrajectoryDS(double) --> int", pybind11::arg("ds"));
		cl.def("SetTrajectoryS", (int (roadmanager::Position::*)(double)) &roadmanager::Position::SetTrajectoryS, "		Move current position to specified S-value along the trajectory\n		\n\n Distance from start of the trajectory\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Position::SetTrajectoryS(double) --> int", pybind11::arg("trajectory_s"));
		cl.def("SetTrajectoryPosByTime", (int (roadmanager::Position::*)(double)) &roadmanager::Position::SetTrajectoryPosByTime, "C++: roadmanager::Position::SetTrajectoryPosByTime(double) --> int", pybind11::arg("time"));
		cl.def("GetTrajectoryS", (double (roadmanager::Position::*)()) &roadmanager::Position::GetTrajectoryS, "		Retrieve the S-value of the current trajectory position\n\nC++: roadmanager::Position::GetTrajectoryS() --> double");
		cl.def("SetTrajectoryT", (int (roadmanager::Position::*)(double)) &roadmanager::Position::SetTrajectoryT, "		Move current position to specified T-value along the trajectory\n		\n\n Lateral distance from trajectory at current s-value\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Position::SetTrajectoryT(double) --> int", pybind11::arg("trajectory_t"));
		cl.def("GetTrajectoryT", (double (roadmanager::Position::*)()) &roadmanager::Position::GetTrajectoryT, "		Retrieve the T-value of the current trajectory position\n\nC++: roadmanager::Position::GetTrajectoryT() --> double");
		cl.def("getRelativeDistance", (double (roadmanager::Position::*)(double, double, double &, double &) const) &roadmanager::Position::getRelativeDistance, "		Straight (not route) distance between the current position and the one specified in argument\n		\n\n The position to measure distance from current position.\n		\n\n (meter). X component of the relative distance.\n		\n\n (meter). Y component of the relative distance.\n		\n\n distance (meter). Negative if the specified position is behind the current one.\n\nC++: roadmanager::Position::getRelativeDistance(double, double, double &, double &) const --> double", pybind11::arg("targetX"), pybind11::arg("targetY"), pybind11::arg("x"), pybind11::arg("y"));
		cl.def("Distance", [](roadmanager::Position &o, class roadmanager::Position * a0, enum roadmanager::CoordinateSystem const & a1, enum roadmanager::RelativeDistanceType const & a2, double & a3) -> int { return o.Distance(a0, a1, a2, a3); }, "", pybind11::arg("pos_b"), pybind11::arg("cs"), pybind11::arg("relDistType"), pybind11::arg("dist"));
		cl.def("Distance", (int (roadmanager::Position::*)(class roadmanager::Position *, enum roadmanager::CoordinateSystem, enum roadmanager::RelativeDistanceType, double &, double)) &roadmanager::Position::Distance, "		Find out the distance, on specified system and type, between two position objects\n		\n\n The position from which to subtract the current position (this position object)\n		\n\n Distance (output parameter)\n		\n\n 0 if position found and parameter values are valid, else -1\n\nC++: roadmanager::Position::Distance(class roadmanager::Position *, enum roadmanager::CoordinateSystem, enum roadmanager::RelativeDistanceType, double &, double) --> int", pybind11::arg("pos_b"), pybind11::arg("cs"), pybind11::arg("relDistType"), pybind11::arg("dist"), pybind11::arg("maxDist"));
		cl.def("Distance", [](roadmanager::Position &o, double const & a0, double const & a1, enum roadmanager::CoordinateSystem const & a2, enum roadmanager::RelativeDistanceType const & a3, double & a4) -> int { return o.Distance(a0, a1, a2, a3, a4); }, "", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("cs"), pybind11::arg("relDistType"), pybind11::arg("dist"));
		cl.def("Distance", (int (roadmanager::Position::*)(double, double, enum roadmanager::CoordinateSystem, enum roadmanager::RelativeDistanceType, double &, double)) &roadmanager::Position::Distance, "		Find out the distance, on specified system and type, to a world x, y position\n		\n\n X coordinate of position from which to subtract the current position (this position object)\n		\n\n Y coordinate of position from which to subtract the current position (this position object)\n		\n\n Distance (output parameter)\n		\n\n 0 if position found and parameter values are valid, else -1\n\nC++: roadmanager::Position::Distance(double, double, enum roadmanager::CoordinateSystem, enum roadmanager::RelativeDistanceType, double &, double) --> int", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("cs"), pybind11::arg("relDistType"), pybind11::arg("dist"), pybind11::arg("maxDist"));
		cl.def("IsAheadOf", (bool (roadmanager::Position::*)(class roadmanager::Position)) &roadmanager::Position::IsAheadOf, "		Is the current position ahead of the one specified in argument\n		This method is more efficient than getRelativeDistance\n		\n\n The position to compare the current to.\n		\n\n true of false\n\nC++: roadmanager::Position::IsAheadOf(class roadmanager::Position) --> bool", pybind11::arg("target_position"));
		cl.def("DsToDistance", (double (roadmanager::Position::*)(double)) &roadmanager::Position::DsToDistance, "C++: roadmanager::Position::DsToDistance(double) --> double", pybind11::arg("ds"));
		cl.def("MoveAlongS", [](roadmanager::Position &o, double const & a0, double const & a1, double const & a2) -> roadmanager::Position::ErrorCode { return o.MoveAlongS(a0, a1, a2); }, "", pybind11::arg("ds"), pybind11::arg("dLaneOffset"), pybind11::arg("junctionSelectorAngle"));
		cl.def("MoveAlongS", (enum roadmanager::Position::ErrorCode (roadmanager::Position::*)(double, double, double, bool)) &roadmanager::Position::MoveAlongS, "		Move position along the road network, forward or backward, from the current position\n		It will automatically follow connecting lanes between connected roads\n		If reaching a junction, choose way according to specified junctionSelectorAngle\n		\n\n distance to move from current position\n		\n\n delta lane offset (adding to current position lane offset)\n		\n\n Desired direction [0:2pi] from incoming road direction (angle = 0), set -1 to randomize\n		\n\n Distance considering lateral offset and curvature (true/default) or along centerline (false)\n		\n\n 0 if successful, other codes see Position::ErrorCode\n\nC++: roadmanager::Position::MoveAlongS(double, double, double, bool) --> enum roadmanager::Position::ErrorCode", pybind11::arg("ds"), pybind11::arg("dLaneOffset"), pybind11::arg("junctionSelectorAngle"), pybind11::arg("actualDistance"));
		cl.def("MoveAlongS", [](roadmanager::Position &o, double const & a0) -> roadmanager::Position::ErrorCode { return o.MoveAlongS(a0); }, "", pybind11::arg("ds"));
		cl.def("MoveAlongS", (enum roadmanager::Position::ErrorCode (roadmanager::Position::*)(double, bool)) &roadmanager::Position::MoveAlongS, "		Move position along the road network, forward or backward, from the current position\n		It will automatically follow connecting lanes between connected roads\n		If multiple options (only possible in junctions) it will choose randomly\n		\n\n distance to move from current position\n		\n\n 0 if successful, other codes see Position::ErrorCode\n\nC++: roadmanager::Position::MoveAlongS(double, bool) --> enum roadmanager::Position::ErrorCode", pybind11::arg("ds"), pybind11::arg("actualDistance"));
		cl.def("GetTrackId", (int (roadmanager::Position::*)() const) &roadmanager::Position::GetTrackId, "		Retrieve the track/road ID from the position object\n		\n\n track/road ID\n\nC++: roadmanager::Position::GetTrackId() const --> int");
		cl.def("GetJunctionId", (int (roadmanager::Position::*)() const) &roadmanager::Position::GetJunctionId, "		Retrieve the junction ID from the position object\n		\n\n junction ID, -1 if not in a junction\n\nC++: roadmanager::Position::GetJunctionId() const --> int");
		cl.def("GetLaneId", (int (roadmanager::Position::*)() const) &roadmanager::Position::GetLaneId, "		Retrieve the lane ID from the position object\n		\n\n lane ID\n\nC++: roadmanager::Position::GetLaneId() const --> int");
		cl.def("GetLaneGlobalId", (int (roadmanager::Position::*)()) &roadmanager::Position::GetLaneGlobalId, "		Retrieve the global lane ID from the position object\n		\n\n lane ID\n\nC++: roadmanager::Position::GetLaneGlobalId() --> int");
		cl.def("GetRoadById", (class roadmanager::Road * (roadmanager::Position::*)(int) const) &roadmanager::Position::GetRoadById, "		Retrieve a road segment specified by road ID\n		\n\n road ID as specified in the OpenDRIVE file\n\nC++: roadmanager::Position::GetRoadById(int) const --> class roadmanager::Road *", pybind11::return_value_policy::automatic, pybind11::arg("id"));
		cl.def("GetS", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetS, "		Retrieve the s value (distance along the road segment)\n\nC++: roadmanager::Position::GetS() const --> double");
		cl.def("GetT", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetT, "		Retrieve the t value (lateral distance from reference lanem (id=0))\n\nC++: roadmanager::Position::GetT() const --> double");
		cl.def("GetOffset", (double (roadmanager::Position::*)()) &roadmanager::Position::GetOffset, "		Retrieve the offset from current lane\n\nC++: roadmanager::Position::GetOffset() --> double");
		cl.def("GetX", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetX, "		Retrieve the world coordinate X-value\n\nC++: roadmanager::Position::GetX() const --> double");
		cl.def("GetY", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetY, "		Retrieve the world coordinate Y-value\n\nC++: roadmanager::Position::GetY() const --> double");
		cl.def("GetZ", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetZ, "		Retrieve the world coordinate Z-value\n\nC++: roadmanager::Position::GetZ() const --> double");
		cl.def("GetZRoad", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetZRoad, "		Retrieve the road Z-value\n\nC++: roadmanager::Position::GetZRoad() const --> double");
		cl.def("GetH", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetH, "		Retrieve the world coordinate heading angle (radians)\n\nC++: roadmanager::Position::GetH() const --> double");
		cl.def("GetHRoad", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetHRoad, "		Retrieve the road heading angle (radians)\n\nC++: roadmanager::Position::GetHRoad() const --> double");
		cl.def("GetDrivingDirectionRelativeRoad", (int (roadmanager::Position::*)() const) &roadmanager::Position::GetDrivingDirectionRelativeRoad, "		Retrieve the driving direction considering lane ID and rult (lef or right hand traffic)\n		Will be either 1 (road direction) or -1 (opposite road direction)\n\nC++: roadmanager::Position::GetDrivingDirectionRelativeRoad() const --> int");
		cl.def("GetHRoadInDrivingDirection", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetHRoadInDrivingDirection, "		Retrieve the road heading angle (radians) relative driving direction (lane sign considered)\n\nC++: roadmanager::Position::GetHRoadInDrivingDirection() const --> double");
		cl.def("GetHRelativeDrivingDirection", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetHRelativeDrivingDirection, "		Retrieve the heading angle (radians) relative driving direction (lane sign considered)\n\nC++: roadmanager::Position::GetHRelativeDrivingDirection() const --> double");
		cl.def("GetHRelative", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetHRelative, "		Retrieve the relative heading angle (radians)\n\nC++: roadmanager::Position::GetHRelative() const --> double");
		cl.def("GetP", (double (roadmanager::Position::*)()) &roadmanager::Position::GetP, "		Retrieve the world coordinate pitch angle (radians)\n\nC++: roadmanager::Position::GetP() --> double");
		cl.def("GetPRoad", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetPRoad, "		Retrieve the road pitch value\n\nC++: roadmanager::Position::GetPRoad() const --> double");
		cl.def("GetPRelative", (double (roadmanager::Position::*)()) &roadmanager::Position::GetPRelative, "		Retrieve the relative pitch angle (radians)\n\nC++: roadmanager::Position::GetPRelative() --> double");
		cl.def("GetR", (double (roadmanager::Position::*)()) &roadmanager::Position::GetR, "		Retrieve the world coordinate roll angle (radians)\n\nC++: roadmanager::Position::GetR() --> double");
		cl.def("GetRRoad", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetRRoad, "		Retrieve the road roll value\n\nC++: roadmanager::Position::GetRRoad() const --> double");
		cl.def("GetRRelative", (double (roadmanager::Position::*)()) &roadmanager::Position::GetRRelative, "		Retrieve the relative roll angle (radians)\n\nC++: roadmanager::Position::GetRRelative() --> double");
		cl.def("GetPRoadInDrivingDirection", (double (roadmanager::Position::*)()) &roadmanager::Position::GetPRoadInDrivingDirection, "		Retrieve the road pitch value, driving direction considered\n\nC++: roadmanager::Position::GetPRoadInDrivingDirection() --> double");
		cl.def("GetCurvature", (double (roadmanager::Position::*)()) &roadmanager::Position::GetCurvature, "		Retrieve the road curvature at current position\n\nC++: roadmanager::Position::GetCurvature() --> double");
		cl.def("GetSpeedLimit", (double (roadmanager::Position::*)()) &roadmanager::Position::GetSpeedLimit, "		Retrieve the speed limit at current position\n\nC++: roadmanager::Position::GetSpeedLimit() --> double");
		cl.def("GetDrivingDirection", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetDrivingDirection, "		Retrieve the road heading/direction at current position, and in the direction given by current lane\n\nC++: roadmanager::Position::GetDrivingDirection() const --> double");
		cl.def("GetType", (enum roadmanager::Position::PositionType (roadmanager::Position::*)()) &roadmanager::Position::GetType, "C++: roadmanager::Position::GetType() --> enum roadmanager::Position::PositionType");
		cl.def("SetTrackId", (void (roadmanager::Position::*)(int)) &roadmanager::Position::SetTrackId, "C++: roadmanager::Position::SetTrackId(int) --> void", pybind11::arg("trackId"));
		cl.def("SetLaneId", (void (roadmanager::Position::*)(int)) &roadmanager::Position::SetLaneId, "C++: roadmanager::Position::SetLaneId(int) --> void", pybind11::arg("laneId"));
		cl.def("SetS", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetS, "C++: roadmanager::Position::SetS(double) --> void", pybind11::arg("s"));
		cl.def("SetOffset", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetOffset, "C++: roadmanager::Position::SetOffset(double) --> void", pybind11::arg("offset"));
		cl.def("SetT", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetT, "C++: roadmanager::Position::SetT(double) --> void", pybind11::arg("t"));
		cl.def("SetX", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetX, "C++: roadmanager::Position::SetX(double) --> void", pybind11::arg("x"));
		cl.def("SetY", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetY, "C++: roadmanager::Position::SetY(double) --> void", pybind11::arg("y"));
		cl.def("SetH", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetH, "C++: roadmanager::Position::SetH(double) --> void", pybind11::arg("h"));
		cl.def("SetP", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetP, "C++: roadmanager::Position::SetP(double) --> void", pybind11::arg("p"));
		cl.def("SetR", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetR, "C++: roadmanager::Position::SetR(double) --> void", pybind11::arg("r"));
		cl.def("SetVel", (void (roadmanager::Position::*)(double, double, double)) &roadmanager::Position::SetVel, "C++: roadmanager::Position::SetVel(double, double, double) --> void", pybind11::arg("x_vel"), pybind11::arg("y_vel"), pybind11::arg("z_vel"));
		cl.def("SetAcc", (void (roadmanager::Position::*)(double, double, double)) &roadmanager::Position::SetAcc, "C++: roadmanager::Position::SetAcc(double, double, double) --> void", pybind11::arg("x_acc"), pybind11::arg("y_acc"), pybind11::arg("z_acc"));
		cl.def("SetAngularVel", (void (roadmanager::Position::*)(double, double, double)) &roadmanager::Position::SetAngularVel, "C++: roadmanager::Position::SetAngularVel(double, double, double) --> void", pybind11::arg("h_vel"), pybind11::arg("p_vel"), pybind11::arg("r_vel"));
		cl.def("SetAngularAcc", (void (roadmanager::Position::*)(double, double, double)) &roadmanager::Position::SetAngularAcc, "C++: roadmanager::Position::SetAngularAcc(double, double, double) --> void", pybind11::arg("h_acc"), pybind11::arg("p_acc"), pybind11::arg("r_acc"));
		cl.def("GetVelX", (double (roadmanager::Position::*)()) &roadmanager::Position::GetVelX, "C++: roadmanager::Position::GetVelX() --> double");
		cl.def("GetVelY", (double (roadmanager::Position::*)()) &roadmanager::Position::GetVelY, "C++: roadmanager::Position::GetVelY() --> double");
		cl.def("GetVelZ", (double (roadmanager::Position::*)()) &roadmanager::Position::GetVelZ, "C++: roadmanager::Position::GetVelZ() --> double");
		cl.def("GetVelLat", (double (roadmanager::Position::*)()) &roadmanager::Position::GetVelLat, "		Get lateral component of velocity in vehicle local coordinate system\n\nC++: roadmanager::Position::GetVelLat() --> double");
		cl.def("GetVelLong", (double (roadmanager::Position::*)()) &roadmanager::Position::GetVelLong, "		Get longitudinal component of velocity in vehicle local coordinate system\n\nC++: roadmanager::Position::GetVelLong() --> double");
		cl.def("GetVelLatLong", (void (roadmanager::Position::*)(double &, double &)) &roadmanager::Position::GetVelLatLong, "		Get lateral and longitudinal component of velocity in vehicle local coordinate system\n		This is slightly more effecient than calling GetVelLat and GetVelLong separately\n		\n\n reference parameter returning lateral velocity\n		\n\n reference parameter returning longitudinal velocity\n		\n\n -\n\nC++: roadmanager::Position::GetVelLatLong(double &, double &) --> void", pybind11::arg("vlat"), pybind11::arg("vlong"));
		cl.def("GetAccLat", (double (roadmanager::Position::*)()) &roadmanager::Position::GetAccLat, "		Get lateral component of acceleration in vehicle local coordinate system\n\nC++: roadmanager::Position::GetAccLat() --> double");
		cl.def("GetAccLong", (double (roadmanager::Position::*)()) &roadmanager::Position::GetAccLong, "		Get longitudinal component of acceleration in vehicle local coordinate system\n\nC++: roadmanager::Position::GetAccLong() --> double");
		cl.def("GetAccLatLong", (void (roadmanager::Position::*)(double &, double &)) &roadmanager::Position::GetAccLatLong, "		Get lateral and longitudinal component of acceleration in vehicle local coordinate system\n		This is slightly more effecient than calling GetAccLat and GetAccLong separately\n		\n\n reference parameter returning lateral acceleration\n		\n\n reference parameter returning longitudinal acceleration\n		\n\n -\n\nC++: roadmanager::Position::GetAccLatLong(double &, double &) --> void", pybind11::arg("alat"), pybind11::arg("along"));
		cl.def("GetVelT", (double (roadmanager::Position::*)()) &roadmanager::Position::GetVelT, "		Get lateral component of velocity in road coordinate system\n\nC++: roadmanager::Position::GetVelT() --> double");
		cl.def("GetVelS", (double (roadmanager::Position::*)()) &roadmanager::Position::GetVelS, "		Get longitudinal component of velocity in road coordinate system\n\nC++: roadmanager::Position::GetVelS() --> double");
		cl.def("GetVelTS", (void (roadmanager::Position::*)(double &, double &)) &roadmanager::Position::GetVelTS, "		Get lateral and longitudinal component of velocity in road coordinate system\n		This is slightly more effecient than calling GetVelT and GetVelS separately\n		\n\n reference parameter returning lateral velocity\n		\n\n reference parameter returning longitudinal velocity\n		\n\n -\n\nC++: roadmanager::Position::GetVelTS(double &, double &) --> void", pybind11::arg("vt"), pybind11::arg("vs"));
		cl.def("GetAccT", (double (roadmanager::Position::*)()) &roadmanager::Position::GetAccT, "		Get lateral component of acceleration in road coordinate system\n\nC++: roadmanager::Position::GetAccT() --> double");
		cl.def("GetAccS", (double (roadmanager::Position::*)()) &roadmanager::Position::GetAccS, "		Get longitudinal component of acceleration in road coordinate system\n\nC++: roadmanager::Position::GetAccS() --> double");
		cl.def("GetAccTS", (void (roadmanager::Position::*)(double &, double &)) &roadmanager::Position::GetAccTS, "		Get lateral and longitudinal component of acceleration in road coordinate system\n		This is slightly more effecient than calling GetAccT and GetAccS separately\n		\n\n reference parameter returning lateral acceleration\n		\n\n reference parameter returning longitudinal acceleration\n		\n\n -\n\nC++: roadmanager::Position::GetAccTS(double &, double &) --> void", pybind11::arg("at"), pybind11::arg("as"));
		cl.def("GetAccX", (double (roadmanager::Position::*)()) &roadmanager::Position::GetAccX, "C++: roadmanager::Position::GetAccX() --> double");
		cl.def("GetAccY", (double (roadmanager::Position::*)()) &roadmanager::Position::GetAccY, "C++: roadmanager::Position::GetAccY() --> double");
		cl.def("GetAccZ", (double (roadmanager::Position::*)()) &roadmanager::Position::GetAccZ, "C++: roadmanager::Position::GetAccZ() --> double");
		cl.def("GetHRate", (double (roadmanager::Position::*)()) &roadmanager::Position::GetHRate, "C++: roadmanager::Position::GetHRate() --> double");
		cl.def("GetPRate", (double (roadmanager::Position::*)()) &roadmanager::Position::GetPRate, "C++: roadmanager::Position::GetPRate() --> double");
		cl.def("GetRRate", (double (roadmanager::Position::*)()) &roadmanager::Position::GetRRate, "C++: roadmanager::Position::GetRRate() --> double");
		cl.def("GetHAcc", (double (roadmanager::Position::*)()) &roadmanager::Position::GetHAcc, "C++: roadmanager::Position::GetHAcc() --> double");
		cl.def("GetPAcc", (double (roadmanager::Position::*)()) &roadmanager::Position::GetPAcc, "C++: roadmanager::Position::GetPAcc() --> double");
		cl.def("GetRAcc", (double (roadmanager::Position::*)()) &roadmanager::Position::GetRAcc, "C++: roadmanager::Position::GetRAcc() --> double");
		cl.def("GetStatusBitMask", (int (roadmanager::Position::*)()) &roadmanager::Position::GetStatusBitMask, "C++: roadmanager::Position::GetStatusBitMask() --> int");
		cl.def("SetOrientationType", (void (roadmanager::Position::*)(enum roadmanager::Position::OrientationType)) &roadmanager::Position::SetOrientationType, "C++: roadmanager::Position::SetOrientationType(enum roadmanager::Position::OrientationType) --> void", pybind11::arg("type"));
		cl.def("GetOrientationType", (enum roadmanager::Position::OrientationType (roadmanager::Position::*)()) &roadmanager::Position::GetOrientationType, "C++: roadmanager::Position::GetOrientationType() --> enum roadmanager::Position::OrientationType");
		cl.def("SetAlignModeH", (void (roadmanager::Position::*)(roadmanager::Position::ALIGN_MODE)) &roadmanager::Position::SetAlignModeH, "C++: roadmanager::Position::SetAlignModeH(roadmanager::Position::ALIGN_MODE) --> void", pybind11::arg("mode"));
		cl.def("SetAlignModeP", (void (roadmanager::Position::*)(roadmanager::Position::ALIGN_MODE)) &roadmanager::Position::SetAlignModeP, "C++: roadmanager::Position::SetAlignModeP(roadmanager::Position::ALIGN_MODE) --> void", pybind11::arg("mode"));
		cl.def("SetAlignModeR", (void (roadmanager::Position::*)(roadmanager::Position::ALIGN_MODE)) &roadmanager::Position::SetAlignModeR, "C++: roadmanager::Position::SetAlignModeR(roadmanager::Position::ALIGN_MODE) --> void", pybind11::arg("mode"));
		cl.def("SetAlignModeZ", (void (roadmanager::Position::*)(roadmanager::Position::ALIGN_MODE)) &roadmanager::Position::SetAlignModeZ, "C++: roadmanager::Position::SetAlignModeZ(roadmanager::Position::ALIGN_MODE) --> void", pybind11::arg("mode"));
		cl.def("SetAlignMode", (void (roadmanager::Position::*)(roadmanager::Position::ALIGN_MODE)) &roadmanager::Position::SetAlignMode, "C++: roadmanager::Position::SetAlignMode(roadmanager::Position::ALIGN_MODE) --> void", pybind11::arg("mode"));
		cl.def("SetSnapLaneTypes", (void (roadmanager::Position::*)(int)) &roadmanager::Position::SetSnapLaneTypes, "		Specify which lane types the position object snaps to (is aware of)\n		\n\n A combination (bitmask) of lane types\n		\n\n -\n\nC++: roadmanager::Position::SetSnapLaneTypes(int) --> void", pybind11::arg("laneTypeMask"));
		cl.def("CopyRMPos", (void (roadmanager::Position::*)(class roadmanager::Position *)) &roadmanager::Position::CopyRMPos, "C++: roadmanager::Position::CopyRMPos(class roadmanager::Position *) --> void", pybind11::arg("from"));
		cl.def("PrintTrackPos", (void (roadmanager::Position::*)()) &roadmanager::Position::PrintTrackPos, "C++: roadmanager::Position::PrintTrackPos() --> void");
		cl.def("PrintLanePos", (void (roadmanager::Position::*)()) &roadmanager::Position::PrintLanePos, "C++: roadmanager::Position::PrintLanePos() --> void");
		cl.def("PrintInertialPos", (void (roadmanager::Position::*)()) &roadmanager::Position::PrintInertialPos, "C++: roadmanager::Position::PrintInertialPos() --> void");
		cl.def("Print", (void (roadmanager::Position::*)()) &roadmanager::Position::Print, "C++: roadmanager::Position::Print() --> void");
		cl.def("PrintXY", (void (roadmanager::Position::*)()) &roadmanager::Position::PrintXY, "C++: roadmanager::Position::PrintXY() --> void");
		cl.def("IsOffRoad", (bool (roadmanager::Position::*)()) &roadmanager::Position::IsOffRoad, "C++: roadmanager::Position::IsOffRoad() --> bool");
		cl.def("IsInJunction", (bool (roadmanager::Position::*)()) &roadmanager::Position::IsInJunction, "C++: roadmanager::Position::IsInJunction() --> bool");
		cl.def("ReplaceObjectRefs", (void (roadmanager::Position::*)(class roadmanager::Position *, class roadmanager::Position *)) &roadmanager::Position::ReplaceObjectRefs, "C++: roadmanager::Position::ReplaceObjectRefs(class roadmanager::Position *, class roadmanager::Position *) --> void", pybind11::arg("pos1"), pybind11::arg("pos2"));
		cl.def("SetLockOnLane", (void (roadmanager::Position::*)(bool)) &roadmanager::Position::SetLockOnLane, "			Controls whether to keep lane ID regardless of lateral position or snap to closest lane (default)\n			 mode True=keep lane False=Snap to closest (default)\n\nC++: roadmanager::Position::SetLockOnLane(bool) --> void", pybind11::arg("mode"));
		cl.def("assign", (class roadmanager::Position & (roadmanager::Position::*)(const class roadmanager::Position &)) &roadmanager::Position::operator=, "C++: roadmanager::Position::operator=(const class roadmanager::Position &) --> class roadmanager::Position &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}


// File: unknown/unknown_7.cpp
#include <iostream> // --trace
#include <iterator> // __gnu_cxx::__normal_iterator
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
#include "esminiLib.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

// roadmanager::Shape file: line:2474
struct PyCallBack_roadmanager_Shape : public roadmanager::Shape {
	using roadmanager::Shape::Shape;

	double GetLength() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Shape *>(this), "GetLength");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Shape::GetLength();
	}
	double GetStartTime() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Shape *>(this), "GetStartTime");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Shape::GetStartTime();
	}
	double GetDuration() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Shape *>(this), "GetDuration");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Shape::GetDuration();
	}
};

// roadmanager::PolyLineShape file: line:2503
struct PyCallBack_roadmanager_PolyLineShape : public roadmanager::PolyLineShape {
	using roadmanager::PolyLineShape::PolyLineShape;

	double GetLength() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::PolyLineShape *>(this), "GetLength");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PolyLineShape::GetLength();
	}
	double GetStartTime() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::PolyLineShape *>(this), "GetStartTime");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PolyLineShape::GetStartTime();
	}
	double GetDuration() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::PolyLineShape *>(this), "GetDuration");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PolyLineShape::GetDuration();
	}
};

// roadmanager::ClothoidShape file: line:2523
struct PyCallBack_roadmanager_ClothoidShape : public roadmanager::ClothoidShape {
	using roadmanager::ClothoidShape::ClothoidShape;

	double GetLength() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::ClothoidShape *>(this), "GetLength");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return ClothoidShape::GetLength();
	}
	double GetStartTime() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::ClothoidShape *>(this), "GetStartTime");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return ClothoidShape::GetStartTime();
	}
	double GetDuration() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::ClothoidShape *>(this), "GetDuration");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return ClothoidShape::GetDuration();
	}
};

// roadmanager::NurbsShape file: line:2546
struct PyCallBack_roadmanager_NurbsShape : public roadmanager::NurbsShape {
	using roadmanager::NurbsShape::NurbsShape;

	double GetLength() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::NurbsShape *>(this), "GetLength");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return NurbsShape::GetLength();
	}
	double GetStartTime() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::NurbsShape *>(this), "GetStartTime");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return NurbsShape::GetStartTime();
	}
	double GetDuration() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::NurbsShape *>(this), "GetDuration");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return NurbsShape::GetDuration();
	}
};

void bind_unknown_unknown_7(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B43_[roadmanager::Route] ";
	{ // roadmanager::Route file: line:2345
		pybind11::class_<roadmanager::Route, std::shared_ptr<roadmanager::Route>> cl(M("roadmanager"), "Route", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Route(); } ) );
		cl.def( pybind11::init( [](roadmanager::Route const &o){ return new roadmanager::Route(o); } ) );
		cl.def_readwrite("waypoint_", &roadmanager::Route::waypoint_);
		cl.def_readwrite("name_", &roadmanager::Route::name_);
		cl.def("AddWaypoint", (int (roadmanager::Route::*)(class roadmanager::Position *)) &roadmanager::Route::AddWaypoint, "		Adds a waypoint to the route. One waypoint per road. At most one junction between waypoints.\n		\n\n A regular position created with road, lane or world coordinates\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Route::AddWaypoint(class roadmanager::Position *) --> int", pybind11::arg("position"));
		cl.def("GetWayPointDirection", (int (roadmanager::Route::*)(int)) &roadmanager::Route::GetWayPointDirection, "C++: roadmanager::Route::GetWayPointDirection(int) --> int", pybind11::arg("index"));
		cl.def("GetLength", (double (roadmanager::Route::*)()) &roadmanager::Route::GetLength, "C++: roadmanager::Route::GetLength() --> double");
	}
	std::cout << "B44_[roadmanager::RoadPath] ";
	{ // roadmanager::RoadPath file: line:2369
		pybind11::class_<roadmanager::RoadPath, std::shared_ptr<roadmanager::RoadPath>> cl(M("roadmanager"), "RoadPath", "");
		cl.def( pybind11::init<const class roadmanager::Position *, const class roadmanager::Position *>(), pybind11::arg("startPos"), pybind11::arg("targetPos") );

		cl.def( pybind11::init( [](roadmanager::RoadPath const &o){ return new roadmanager::RoadPath(o); } ) );
		cl.def_readwrite("visited_", &roadmanager::RoadPath::visited_);
		cl.def_readwrite("unvisited_", &roadmanager::RoadPath::unvisited_);
		cl.def_readwrite("direction_", &roadmanager::RoadPath::direction_);
		cl.def("Calculate", [](roadmanager::RoadPath &o, double & a0) -> int { return o.Calculate(a0); }, "", pybind11::arg("dist"));
		cl.def("Calculate", [](roadmanager::RoadPath &o, double & a0, bool const & a1) -> int { return o.Calculate(a0, a1); }, "", pybind11::arg("dist"), pybind11::arg("bothDirections"));
		cl.def("Calculate", (int (roadmanager::RoadPath::*)(double &, bool, double)) &roadmanager::RoadPath::Calculate, "		Calculate shortest path between starting position and target position,\n		using Dijkstra's algorithm https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm\n		it also calculates the length of the path, or distance between the positions\n		positive distance means that the shortest path was found in forward direction\n		negative distance means that the shortest path goes in opposite direction from the heading of the starting position\n		\n\n A reference parameter into which the calculated path distance is stored\n		\n\n Set to true in order to search also backwards from object\n		\n\n If set the search along each path branch will terminate after reaching this distance\n		\n\n 0 on success, -1 on failure e.g. path not found\n\nC++: roadmanager::RoadPath::Calculate(double &, bool, double) --> int", pybind11::arg("dist"), pybind11::arg("bothDirections"), pybind11::arg("maxDist"));

		{ // roadmanager::RoadPath::PathNode file: line:2373
			auto & enclosing_class = cl;
			pybind11::class_<roadmanager::RoadPath::PathNode, std::shared_ptr<roadmanager::RoadPath::PathNode>> cl(enclosing_class, "PathNode", "");
			cl.def( pybind11::init( [](){ return new roadmanager::RoadPath::PathNode(); } ) );
			cl.def_readwrite("dist", &roadmanager::RoadPath::PathNode::dist);
			cl.def_readwrite("fromLaneId", &roadmanager::RoadPath::PathNode::fromLaneId);
		}

	}
	std::cout << "B45_[roadmanager::PolyLineBase] ";
	{ // roadmanager::PolyLineBase file: line:2421
		pybind11::class_<roadmanager::PolyLineBase, std::shared_ptr<roadmanager::PolyLineBase>> cl(M("roadmanager"), "PolyLineBase", "");
		cl.def( pybind11::init( [](){ return new roadmanager::PolyLineBase(); } ) );
		cl.def( pybind11::init( [](roadmanager::PolyLineBase const &o){ return new roadmanager::PolyLineBase(o); } ) );
		cl.def_readwrite("vertex_", &roadmanager::PolyLineBase::vertex_);
		cl.def_readwrite("length_", &roadmanager::PolyLineBase::length_);
		cl.def_readwrite("vIndex_", &roadmanager::PolyLineBase::vIndex_);
		cl.def_readwrite("interpolateHeading_", &roadmanager::PolyLineBase::interpolateHeading_);
		cl.def("reset", (void (roadmanager::PolyLineBase::*)()) &roadmanager::PolyLineBase::reset, "C++: roadmanager::PolyLineBase::reset() --> void");
		cl.def("GetNumberOfVertices", (int (roadmanager::PolyLineBase::*)()) &roadmanager::PolyLineBase::GetNumberOfVertices, "C++: roadmanager::PolyLineBase::GetNumberOfVertices() --> int");
		cl.def("Reset", (void (roadmanager::PolyLineBase::*)()) &roadmanager::PolyLineBase::Reset, "C++: roadmanager::PolyLineBase::Reset() --> void");
		cl.def("Time2S", (int (roadmanager::PolyLineBase::*)(double, double &)) &roadmanager::PolyLineBase::Time2S, "C++: roadmanager::PolyLineBase::Time2S(double, double &) --> int", pybind11::arg("time"), pybind11::arg("s"));
		cl.def("assign", (class roadmanager::PolyLineBase & (roadmanager::PolyLineBase::*)(const class roadmanager::PolyLineBase &)) &roadmanager::PolyLineBase::operator=, "C++: roadmanager::PolyLineBase::operator=(const class roadmanager::PolyLineBase &) --> class roadmanager::PolyLineBase &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B46_[roadmanager::Shape] ";
	{ // roadmanager::Shape file: line:2474
		pybind11::class_<roadmanager::Shape, std::shared_ptr<roadmanager::Shape>, PyCallBack_roadmanager_Shape> cl(M("roadmanager"), "Shape", "");
		cl.def( pybind11::init<roadmanager::Shape::ShapeType>(), pybind11::arg("type") );

		cl.def( pybind11::init( [](PyCallBack_roadmanager_Shape const &o){ return new PyCallBack_roadmanager_Shape(o); } ) );
		cl.def( pybind11::init( [](roadmanager::Shape const &o){ return new roadmanager::Shape(o); } ) );
		cl.def_readwrite("type_", &roadmanager::Shape::type_);
		cl.def_readwrite("pline_", &roadmanager::Shape::pline_);
		cl.def("GetLength", (double (roadmanager::Shape::*)()) &roadmanager::Shape::GetLength, "C++: roadmanager::Shape::GetLength() --> double");
		cl.def("GetStartTime", (double (roadmanager::Shape::*)()) &roadmanager::Shape::GetStartTime, "C++: roadmanager::Shape::GetStartTime() --> double");
		cl.def("GetDuration", (double (roadmanager::Shape::*)()) &roadmanager::Shape::GetDuration, "C++: roadmanager::Shape::GetDuration() --> double");
		cl.def("assign", (class roadmanager::Shape & (roadmanager::Shape::*)(const class roadmanager::Shape &)) &roadmanager::Shape::operator=, "C++: roadmanager::Shape::operator=(const class roadmanager::Shape &) --> class roadmanager::Shape &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B47_[roadmanager::PolyLineShape] ";
	{ // roadmanager::PolyLineShape file: line:2503
		pybind11::class_<roadmanager::PolyLineShape, std::shared_ptr<roadmanager::PolyLineShape>, PyCallBack_roadmanager_PolyLineShape, roadmanager::Shape> cl(M("roadmanager"), "PolyLineShape", "");
		cl.def( pybind11::init( [](){ return new roadmanager::PolyLineShape(); }, [](){ return new PyCallBack_roadmanager_PolyLineShape(); } ) );
		cl.def( pybind11::init( [](PyCallBack_roadmanager_PolyLineShape const &o){ return new PyCallBack_roadmanager_PolyLineShape(o); } ) );
		cl.def( pybind11::init( [](roadmanager::PolyLineShape const &o){ return new roadmanager::PolyLineShape(o); } ) );
		cl.def_readwrite("vertex_", &roadmanager::PolyLineShape::vertex_);
		cl.def("AddVertex", (void (roadmanager::PolyLineShape::*)(class roadmanager::Position, double, bool)) &roadmanager::PolyLineShape::AddVertex, "C++: roadmanager::PolyLineShape::AddVertex(class roadmanager::Position, double, bool) --> void", pybind11::arg("pos"), pybind11::arg("time"), pybind11::arg("calculateHeading"));
		cl.def("GetLength", (double (roadmanager::PolyLineShape::*)()) &roadmanager::PolyLineShape::GetLength, "C++: roadmanager::PolyLineShape::GetLength() --> double");
		cl.def("GetStartTime", (double (roadmanager::PolyLineShape::*)()) &roadmanager::PolyLineShape::GetStartTime, "C++: roadmanager::PolyLineShape::GetStartTime() --> double");
		cl.def("GetDuration", (double (roadmanager::PolyLineShape::*)()) &roadmanager::PolyLineShape::GetDuration, "C++: roadmanager::PolyLineShape::GetDuration() --> double");
		cl.def("assign", (class roadmanager::PolyLineShape & (roadmanager::PolyLineShape::*)(const class roadmanager::PolyLineShape &)) &roadmanager::PolyLineShape::operator=, "C++: roadmanager::PolyLineShape::operator=(const class roadmanager::PolyLineShape &) --> class roadmanager::PolyLineShape &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		{ // roadmanager::PolyLineShape::Vertex file: line:2507
			auto & enclosing_class = cl;
			pybind11::class_<roadmanager::PolyLineShape::Vertex, std::shared_ptr<roadmanager::PolyLineShape::Vertex>> cl(enclosing_class, "Vertex", "");
			cl.def( pybind11::init( [](){ return new roadmanager::PolyLineShape::Vertex(); } ) );
			cl.def( pybind11::init( [](roadmanager::PolyLineShape::Vertex const &o){ return new roadmanager::PolyLineShape::Vertex(o); } ) );
			cl.def_readwrite("pos_", &roadmanager::PolyLineShape::Vertex::pos_);
		}

	}
	std::cout << "B48_[roadmanager::ClothoidShape] ";
	{ // roadmanager::ClothoidShape file: line:2523
		pybind11::class_<roadmanager::ClothoidShape, std::shared_ptr<roadmanager::ClothoidShape>, PyCallBack_roadmanager_ClothoidShape, roadmanager::Shape> cl(M("roadmanager"), "ClothoidShape", "");
		cl.def( pybind11::init<class roadmanager::Position, double, double, double, double, double>(), pybind11::arg("pos"), pybind11::arg("curv"), pybind11::arg("curvDot"), pybind11::arg("len"), pybind11::arg("tStart"), pybind11::arg("tEnd") );

		cl.def( pybind11::init( [](PyCallBack_roadmanager_ClothoidShape const &o){ return new PyCallBack_roadmanager_ClothoidShape(o); } ) );
		cl.def( pybind11::init( [](roadmanager::ClothoidShape const &o){ return new roadmanager::ClothoidShape(o); } ) );
		cl.def_readwrite("pos_", &roadmanager::ClothoidShape::pos_);
		cl.def_readwrite("t_start_", &roadmanager::ClothoidShape::t_start_);
		cl.def_readwrite("t_end_", &roadmanager::ClothoidShape::t_end_);
		cl.def("CalculatePolyLine", (void (roadmanager::ClothoidShape::*)()) &roadmanager::ClothoidShape::CalculatePolyLine, "C++: roadmanager::ClothoidShape::CalculatePolyLine() --> void");
		cl.def("GetLength", (double (roadmanager::ClothoidShape::*)()) &roadmanager::ClothoidShape::GetLength, "C++: roadmanager::ClothoidShape::GetLength() --> double");
		cl.def("GetStartTime", (double (roadmanager::ClothoidShape::*)()) &roadmanager::ClothoidShape::GetStartTime, "C++: roadmanager::ClothoidShape::GetStartTime() --> double");
		cl.def("GetDuration", (double (roadmanager::ClothoidShape::*)()) &roadmanager::ClothoidShape::GetDuration, "C++: roadmanager::ClothoidShape::GetDuration() --> double");
		cl.def("assign", (class roadmanager::ClothoidShape & (roadmanager::ClothoidShape::*)(const class roadmanager::ClothoidShape &)) &roadmanager::ClothoidShape::operator=, "C++: roadmanager::ClothoidShape::operator=(const class roadmanager::ClothoidShape &) --> class roadmanager::ClothoidShape &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B49_[roadmanager::NurbsShape] ";
	{ // roadmanager::NurbsShape file: line:2546
		pybind11::class_<roadmanager::NurbsShape, std::shared_ptr<roadmanager::NurbsShape>, PyCallBack_roadmanager_NurbsShape, roadmanager::Shape> cl(M("roadmanager"), "NurbsShape", "		This nurbs implementation is strongly inspired by the \"Nurbs Curve Example\" at:\n		https://nccastaff.bournemouth.ac.uk/jmacey/OldWeb/RobTheBloke/www/opengl_programming.html");
		cl.def( pybind11::init<int>(), pybind11::arg("order") );

		cl.def( pybind11::init( [](PyCallBack_roadmanager_NurbsShape const &o){ return new PyCallBack_roadmanager_NurbsShape(o); } ) );
		cl.def( pybind11::init( [](roadmanager::NurbsShape const &o){ return new roadmanager::NurbsShape(o); } ) );
		cl.def_readwrite("order_", &roadmanager::NurbsShape::order_);
		cl.def_readwrite("ctrlPoint_", &roadmanager::NurbsShape::ctrlPoint_);
		cl.def_readwrite("knot_", &roadmanager::NurbsShape::knot_);
		cl.def_readwrite("d_", &roadmanager::NurbsShape::d_);
		cl.def_readwrite("dPeakT_", &roadmanager::NurbsShape::dPeakT_);
		cl.def_readwrite("dPeakValue_", &roadmanager::NurbsShape::dPeakValue_);
		cl.def("AddControlPoint", (void (roadmanager::NurbsShape::*)(class roadmanager::Position, double, double, bool)) &roadmanager::NurbsShape::AddControlPoint, "C++: roadmanager::NurbsShape::AddControlPoint(class roadmanager::Position, double, double, bool) --> void", pybind11::arg("pos"), pybind11::arg("time"), pybind11::arg("weight"), pybind11::arg("calcHeading"));
		cl.def("CalculatePolyLine", (void (roadmanager::NurbsShape::*)()) &roadmanager::NurbsShape::CalculatePolyLine, "C++: roadmanager::NurbsShape::CalculatePolyLine() --> void");
		cl.def("GetLength", (double (roadmanager::NurbsShape::*)()) &roadmanager::NurbsShape::GetLength, "C++: roadmanager::NurbsShape::GetLength() --> double");
		cl.def("GetStartTime", (double (roadmanager::NurbsShape::*)()) &roadmanager::NurbsShape::GetStartTime, "C++: roadmanager::NurbsShape::GetStartTime() --> double");
		cl.def("GetDuration", (double (roadmanager::NurbsShape::*)()) &roadmanager::NurbsShape::GetDuration, "C++: roadmanager::NurbsShape::GetDuration() --> double");
		cl.def("assign", (class roadmanager::NurbsShape & (roadmanager::NurbsShape::*)(const class roadmanager::NurbsShape &)) &roadmanager::NurbsShape::operator=, "C++: roadmanager::NurbsShape::operator=(const class roadmanager::NurbsShape &) --> class roadmanager::NurbsShape &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B50_[roadmanager::RMTrajectory] ";
	{ // roadmanager::RMTrajectory file: line:2590
		pybind11::class_<roadmanager::RMTrajectory, std::shared_ptr<roadmanager::RMTrajectory>> cl(M("roadmanager"), "RMTrajectory", "");
		cl.def( pybind11::init( [](){ return new roadmanager::RMTrajectory(); } ) );
		cl.def( pybind11::init( [](roadmanager::RMTrajectory const &o){ return new roadmanager::RMTrajectory(o); } ) );
		cl.def_readwrite("name_", &roadmanager::RMTrajectory::name_);
		cl.def_readwrite("closed_", &roadmanager::RMTrajectory::closed_);
		cl.def("Freeze", (void (roadmanager::RMTrajectory::*)()) &roadmanager::RMTrajectory::Freeze, "C++: roadmanager::RMTrajectory::Freeze() --> void");
		cl.def("GetLength", (double (roadmanager::RMTrajectory::*)()) &roadmanager::RMTrajectory::GetLength, "C++: roadmanager::RMTrajectory::GetLength() --> double");
		cl.def("GetTimeAtS", (double (roadmanager::RMTrajectory::*)(double)) &roadmanager::RMTrajectory::GetTimeAtS, "C++: roadmanager::RMTrajectory::GetTimeAtS(double) --> double", pybind11::arg("s"));
		cl.def("GetStartTime", (double (roadmanager::RMTrajectory::*)()) &roadmanager::RMTrajectory::GetStartTime, "C++: roadmanager::RMTrajectory::GetStartTime() --> double");
		cl.def("GetDuration", (double (roadmanager::RMTrajectory::*)()) &roadmanager::RMTrajectory::GetDuration, "C++: roadmanager::RMTrajectory::GetDuration() --> double");
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
void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_2(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_3(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_4(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_5(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_6(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_7(std::function< pybind11::module &(std::string const &namespace_) > &M);


PYBIND11_MODULE(pyroadmanager, root_module) {
	root_module.doc() = "pyroadmanager module";

	std::map <std::string, pybind11::module> modules;
	ModuleGetter M = [&](std::string const &namespace_) -> pybind11::module & {
		auto it = modules.find(namespace_);
		if( it == modules.end() ) throw std::runtime_error("Attempt to access pybind11::module for namespace " + namespace_ + " before it was created!!!");
		return it->second;
	};

	modules[""] = root_module;

	std::vector< std::pair<std::string, std::string> > sub_modules {
		{"", "roadmanager"},
	};
	for(auto &p : sub_modules ) modules[p.first.size() ? p.first+"::"+p.second : p.second] = modules[p.first].def_submodule(p.second.c_str(), ("Bindings for " + p.first + "::" + p.second + " namespace").c_str() );

	//pybind11::class_<std::shared_ptr<void>>(M(""), "_encapsulated_data_");

	bind_unknown_unknown(M);
	bind_unknown_unknown_1(M);
	bind_unknown_unknown_2(M);
	bind_unknown_unknown_3(M);
	bind_unknown_unknown_4(M);
	bind_unknown_unknown_5(M);
	bind_unknown_unknown_6(M);
	bind_unknown_unknown_7(M);

}

// Source list file: /home/wave/repositories/python-esmini/src/roadmanager/pyroadmanager.sources
// pyroadmanager.cpp
// unknown/unknown.cpp
// unknown/unknown_1.cpp
// unknown/unknown_2.cpp
// unknown/unknown_3.cpp
// unknown/unknown_4.cpp
// unknown/unknown_5.cpp
// unknown/unknown_6.cpp
// unknown/unknown_7.cpp

// Modules list file: /home/wave/repositories/python-esmini/src/roadmanager/pyroadmanager.modules
// roadmanager 
