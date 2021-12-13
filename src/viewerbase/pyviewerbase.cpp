// File: unknown/unknown.cpp
#include <functional> // std::less
#include <google/protobuf/arena.h> // google::protobuf::Arena
#include <google/protobuf/descriptor.h> // google::protobuf::Descriptor
#include <google/protobuf/descriptor.pb.h> // google::protobuf::EnumOptions
#include <google/protobuf/descriptor.pb.h> // google::protobuf::EnumValueOptions
#include <google/protobuf/descriptor.pb.h> // google::protobuf::ExtensionRangeOptions
#include <google/protobuf/descriptor.pb.h> // google::protobuf::FieldOptions
#include <google/protobuf/descriptor.pb.h> // google::protobuf::FileOptions
#include <google/protobuf/descriptor.pb.h> // google::protobuf::MessageOptions
#include <google/protobuf/descriptor.pb.h> // google::protobuf::MethodOptions
#include <google/protobuf/descriptor.pb.h> // google::protobuf::OneofOptions
#include <google/protobuf/descriptor.pb.h> // google::protobuf::ServiceOptions
#include <google/protobuf/descriptor.pb.h> // google::protobuf::SourceCodeInfo
#include <google/protobuf/implicit_weak_message.h> // google::protobuf::internal::ImplicitWeakMessage
#include <google/protobuf/io/coded_stream.h> // google::protobuf::io::EpsCopyOutputStream
#include <google/protobuf/message.h> // google::protobuf::Message
#include <google/protobuf/message.h> // google::protobuf::Metadata
#include <google/protobuf/message.h> // google::protobuf::Reflection
#include <google/protobuf/message_lite.h> // google::protobuf::internal::ConstantInitialized
#include <google/protobuf/metadata_lite.h> // google::protobuf::internal::InternalMetadata
#include <google/protobuf/parse_context.h> // google::protobuf::internal::ParseContext
#include <google/protobuf/repeated_field.h> // google::protobuf::RepeatedPtrField
#include <google/protobuf/unknown_field_set.h> // google::protobuf::UnknownFieldSet
#include <iostream> // --trace
#include <iterator> // __gnu_cxx::__normal_iterator
#include <map> // std::map
#include <memory> // std::allocator
#include <osg/ApplicationUsage> // 
#include <osg/ApplicationUsage> // osg::ApplicationUsage
#include <osg/ArgumentParser> // 
#include <osg/ArgumentParser> // osg::ArgumentParser
#include <osg/Array> // 
#include <osg/Array> // osg::TemplateArray
#include <osg/Billboard> // osg::Billboard
#include <osg/BoundingBox> // osg::BoundingBoxImpl
#include <osg/BoundingSphere> // osg::BoundingSphereImpl
#include <osg/Callback> // osg::Callback
#include <osg/Camera> // osg::Camera
#include <osg/ClearNode> // osg::ClearNode
#include <osg/CoordinateSystemNode> // osg::CoordinateSystemNode
#include <osg/CopyOp> // osg::CopyOp
#include <osg/CullStack> // osg::CullStack
#include <osg/Drawable> // osg::Drawable
#include <osg/FrameStamp> // osg::FrameStamp
#include <osg/Geode> // osg::Geode
#include <osg/Geometry> // osg::Geometry
#include <osg/Group> // osg::Group
#include <osg/LOD> // osg::LOD
#include <osg/LightSource> // osg::LightSource
#include <osg/MatrixTransform> // osg::MatrixTransform
#include <osg/Node> // osg::Node
#include <osg/NodeVisitor> // 
#include <osg/NodeVisitor> // osg::NodeVisitor
#include <osg/Object> // osg::Object
#include <osg/OccluderNode> // osg::OccluderNode
#include <osg/PagedLOD> // osg::PagedLOD
#include <osg/PositionAttitudeTransform> // osg::PositionAttitudeTransform
#include <osg/Projection> // osg::Projection
#include <osg/State> // osg::State
#include <osg/StateSet> // osg::StateSet
#include <osg/Stats> // osg::Stats
#include <osg/Switch> // osg::Switch
#include <osg/Transform> // osg::Transform
#include <osg/ValueMap> // osg::ValueMap
#include <osg/ValueStack> // osg::ValueStack
#include <osg/Vec2f> // osg::Vec2f
#include <osg/Vec3f> // osg::Vec3f
#include <osg/Vec4f> // osg::Vec4f
#include <osg/View> // osg::View
#include <osg/observer_ptr> // osg::observer_ptr
#include <osg/ref_ptr> // osg::ref_ptr
#include <osgGA/EventVisitor> // osgGA::EventVisitor
#include <osgUtil/CullVisitor> // osgUtil::CullVisitor
#include <osgUtil/IntersectionVisitor> // osgUtil::IntersectionVisitor
#include <osgUtil/UpdateVisitor> // osgUtil::UpdateVisitor
#include <osgViewer/GraphicsWindow> // osgViewer::GraphicsWindowEmbedded
#include <osgViewer/Viewer> // osgViewer::Viewer
#include <ostream> // std::basic_ostream
#include <sstream> // __str__
#include <string> // std::basic_string
#include <string> // std::char_traits
#include <utility> // std::pair
#include <vector> // std::vector

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "viewer.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

// viewer::EntityModel file: line:230
struct PyCallBack_viewer_EntityModel : public viewer::EntityModel {
	using viewer::EntityModel::EntityModel;

	enum viewer::EntityModel::EntityType GetType() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const viewer::EntityModel *>(this), "GetType");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<enum viewer::EntityModel::EntityType>::value) {
				static pybind11::detail::override_caster_t<enum viewer::EntityModel::EntityType> caster;
				return pybind11::detail::cast_ref<enum viewer::EntityModel::EntityType>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<enum viewer::EntityModel::EntityType>(std::move(o));
		}
		return EntityModel::GetType();
	}
};

// viewer::CarModel file: line:271
struct PyCallBack_viewer_CarModel : public viewer::CarModel {
	using viewer::CarModel::CarModel;

	enum viewer::EntityModel::EntityType GetType() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const viewer::CarModel *>(this), "GetType");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<enum viewer::EntityModel::EntityType>::value) {
				static pybind11::detail::override_caster_t<enum viewer::EntityModel::EntityType> caster;
				return pybind11::detail::cast_ref<enum viewer::EntityModel::EntityType>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<enum viewer::EntityModel::EntityType>(std::move(o));
		}
		return CarModel::GetType();
	}
};

// viewer::VisibilityCallback file: line:292
struct PyCallBack_viewer_VisibilityCallback : public viewer::VisibilityCallback {
	using viewer::VisibilityCallback::VisibilityCallback;

};

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B0_[viewer::PolyLine] ";
	{ // viewer::PolyLine file: line:65
		pybind11::class_<viewer::PolyLine, std::shared_ptr<viewer::PolyLine>> cl(M("viewer"), "PolyLine", "");
		cl.def( pybind11::init( [](viewer::PolyLine const &o){ return new viewer::PolyLine(o); } ) );
		cl.def_readwrite("pline_vertex_data_", &viewer::PolyLine::pline_vertex_data_);
		cl.def_readwrite("color_", &viewer::PolyLine::color_);
		cl.def_readwrite("pline_geom_", &viewer::PolyLine::pline_geom_);
		cl.def_readwrite("dots_geom_", &viewer::PolyLine::dots_geom_);
		cl.def_readwrite("dot3D_shape_", &viewer::PolyLine::dot3D_shape_);
		cl.def_readwrite("dot3D_geode_", &viewer::PolyLine::dot3D_geode_);
		cl.def_readwrite("dots3D_group_", &viewer::PolyLine::dots3D_group_);
		cl.def("Update", (void (viewer::PolyLine::*)()) &viewer::PolyLine::Update, "C++: viewer::PolyLine::Update() --> void");
		cl.def("Redraw", (void (viewer::PolyLine::*)()) &viewer::PolyLine::Redraw, "C++: viewer::PolyLine::Redraw() --> void");
		cl.def("SetNodeMaskLines", (void (viewer::PolyLine::*)(int)) &viewer::PolyLine::SetNodeMaskLines, "C++: viewer::PolyLine::SetNodeMaskLines(int) --> void", pybind11::arg("nodemask"));
		cl.def("SetNodeMaskDots", (void (viewer::PolyLine::*)(int)) &viewer::PolyLine::SetNodeMaskDots, "C++: viewer::PolyLine::SetNodeMaskDots(int) --> void", pybind11::arg("nodemask"));
	}
	std::cout << "B1_[viewer::SensorViewFrustum] ";
	{ // viewer::SensorViewFrustum file: line:124
		pybind11::class_<viewer::SensorViewFrustum, std::shared_ptr<viewer::SensorViewFrustum>> cl(M("viewer"), "SensorViewFrustum", "");
		cl.def( pybind11::init( [](viewer::SensorViewFrustum const &o){ return new viewer::SensorViewFrustum(o); } ) );
		cl.def_readwrite("txNode_", &viewer::SensorViewFrustum::txNode_);
		cl.def_readwrite("line_group_", &viewer::SensorViewFrustum::line_group_);
		cl.def_readwrite("plines_", &viewer::SensorViewFrustum::plines_);
		cl.def("Update", (void (viewer::SensorViewFrustum::*)()) &viewer::SensorViewFrustum::Update, "C++: viewer::SensorViewFrustum::Update() --> void");
	}
	std::cout << "B2_[viewer::OSIDetectedPoint] ";
	{ // viewer::OSIDetectedPoint file: line:137
		pybind11::class_<viewer::OSIDetectedPoint, std::shared_ptr<viewer::OSIDetectedPoint>> cl(M("viewer"), "OSIDetectedPoint", "");
		cl.def( pybind11::init( [](viewer::OSIDetectedPoint const &o){ return new viewer::OSIDetectedPoint(o); } ) );
		cl.def_readwrite("parent_", &viewer::OSIDetectedPoint::parent_);
		cl.def_readwrite("osi_detection_geom_", &viewer::OSIDetectedPoint::osi_detection_geom_);
		cl.def_readwrite("osi_detection_points_", &viewer::OSIDetectedPoint::osi_detection_points_);
		cl.def_readwrite("osi_detection_color_", &viewer::OSIDetectedPoint::osi_detection_color_);
		cl.def_readwrite("showing_", &viewer::OSIDetectedPoint::showing_);
		cl.def("Show", (void (viewer::OSIDetectedPoint::*)()) &viewer::OSIDetectedPoint::Show, "C++: viewer::OSIDetectedPoint::Show() --> void");
		cl.def("Hide", (void (viewer::OSIDetectedPoint::*)()) &viewer::OSIDetectedPoint::Hide, "C++: viewer::OSIDetectedPoint::Hide() --> void");
	}
	std::cout << "B3_[viewer::OSIDetectedCar] ";
	{ // viewer::OSIDetectedCar file: line:153
		pybind11::class_<viewer::OSIDetectedCar, std::shared_ptr<viewer::OSIDetectedCar>> cl(M("viewer"), "OSIDetectedCar", "");
		cl.def( pybind11::init( [](viewer::OSIDetectedCar const &o){ return new viewer::OSIDetectedCar(o); } ) );
		cl.def_readwrite("parent_", &viewer::OSIDetectedCar::parent_);
		cl.def_readwrite("car_", &viewer::OSIDetectedCar::car_);
		cl.def_readwrite("osi_detection_geode_box_", &viewer::OSIDetectedCar::osi_detection_geode_box_);
		cl.def_readwrite("osi_detection_geode_center_", &viewer::OSIDetectedCar::osi_detection_geode_center_);
		cl.def_readwrite("osi_detection_tx_", &viewer::OSIDetectedCar::osi_detection_tx_);
		cl.def_readwrite("bb_dimensions_", &viewer::OSIDetectedCar::bb_dimensions_);
		cl.def_readwrite("showing_", &viewer::OSIDetectedCar::showing_);
		cl.def("Show", (void (viewer::OSIDetectedCar::*)()) &viewer::OSIDetectedCar::Show, "C++: viewer::OSIDetectedCar::Show() --> void");
		cl.def("Hide", (void (viewer::OSIDetectedCar::*)()) &viewer::OSIDetectedCar::Hide, "C++: viewer::OSIDetectedCar::Hide() --> void");
	}
	std::cout << "B4_[viewer::OSISensorDetection] ";
	{ // viewer::OSISensorDetection file: line:171
		pybind11::class_<viewer::OSISensorDetection, std::shared_ptr<viewer::OSISensorDetection>> cl(M("viewer"), "OSISensorDetection", "");
		cl.def( pybind11::init( [](viewer::OSISensorDetection const &o){ return new viewer::OSISensorDetection(o); } ) );
		cl.def_readwrite("parent_", &viewer::OSISensorDetection::parent_);
		cl.def_readwrite("detected_points_group_", &viewer::OSISensorDetection::detected_points_group_);
		cl.def_readwrite("detected_bb_group_", &viewer::OSISensorDetection::detected_bb_group_);
		cl.def_readwrite("detected_points_", &viewer::OSISensorDetection::detected_points_);
		cl.def_readwrite("detected_cars_", &viewer::OSISensorDetection::detected_cars_);
	}
	std::cout << "B5_[viewer::Trajectory] ";
	{ // viewer::Trajectory file: line:186
		pybind11::class_<viewer::Trajectory, std::shared_ptr<viewer::Trajectory>> cl(M("viewer"), "Trajectory", "");
		cl.def( pybind11::init( [](viewer::Trajectory const &o){ return new viewer::Trajectory(o); } ) );
		cl.def_readwrite("vertices_", &viewer::Trajectory::vertices_);
		cl.def("Disable", (void (viewer::Trajectory::*)()) &viewer::Trajectory::Disable, "C++: viewer::Trajectory::Disable() --> void");
	}
	std::cout << "B6_[viewer::PointSensor] ";
	{ // viewer::PointSensor file: line:213
		pybind11::class_<viewer::PointSensor, std::shared_ptr<viewer::PointSensor>> cl(M("viewer"), "PointSensor", "");
		cl.def( pybind11::init( [](){ return new viewer::PointSensor(); } ) );
		cl.def( pybind11::init( [](viewer::PointSensor const &o){ return new viewer::PointSensor(o); } ) );
		cl.def_readwrite("group_", &viewer::PointSensor::group_);
		cl.def_readwrite("ball_", &viewer::PointSensor::ball_);
		cl.def_readwrite("ball_radius_", &viewer::PointSensor::ball_radius_);
		cl.def_readwrite("line_", &viewer::PointSensor::line_);
		cl.def_readwrite("line_vertex_data_", &viewer::PointSensor::line_vertex_data_);
		cl.def_readwrite("pivot_pos", &viewer::PointSensor::pivot_pos);
		cl.def_readwrite("target_pos", &viewer::PointSensor::target_pos);
		cl.def("Show", (void (viewer::PointSensor::*)()) &viewer::PointSensor::Show, "C++: viewer::PointSensor::Show() --> void");
		cl.def("Hide", (void (viewer::PointSensor::*)()) &viewer::PointSensor::Hide, "C++: viewer::PointSensor::Hide() --> void");
	}
	std::cout << "B7_[viewer::EntityModel] ";
	{ // viewer::EntityModel file: line:230
		pybind11::class_<viewer::EntityModel, std::shared_ptr<viewer::EntityModel>, PyCallBack_viewer_EntityModel> cl(M("viewer"), "EntityModel", "");
		cl.def( pybind11::init( [](PyCallBack_viewer_EntityModel const &o){ return new PyCallBack_viewer_EntityModel(o); } ) );
		cl.def( pybind11::init( [](viewer::EntityModel const &o){ return new viewer::EntityModel(o); } ) );

		pybind11::enum_<viewer::EntityModel::EntityType>(cl, "EntityType", "")
			.value("VEHICLE", viewer::EntityModel::EntityType::VEHICLE)
			.value("OTHER", viewer::EntityModel::EntityType::OTHER);

		cl.def_readwrite("group_", &viewer::EntityModel::group_);
		cl.def_readwrite("model_", &viewer::EntityModel::model_);
		cl.def_readwrite("lod_", &viewer::EntityModel::lod_);
		cl.def_readwrite("txNode_", &viewer::EntityModel::txNode_);
		cl.def_readwrite("quat_", &viewer::EntityModel::quat_);
		cl.def_readwrite("parent_", &viewer::EntityModel::parent_);
		cl.def_readwrite("modelBB_", &viewer::EntityModel::modelBB_);
		cl.def_readwrite("name_", &viewer::EntityModel::name_);
		cl.def_readwrite("filename_", &viewer::EntityModel::filename_);
		cl.def_readwrite("blend_color_", &viewer::EntityModel::blend_color_);
		cl.def_readwrite("state_set_", &viewer::EntityModel::state_set_);
		cl.def("GetType", (enum viewer::EntityModel::EntityType (viewer::EntityModel::*)()) &viewer::EntityModel::GetType, "C++: viewer::EntityModel::GetType() --> enum viewer::EntityModel::EntityType");
		cl.def("SetPosition", (void (viewer::EntityModel::*)(double, double, double)) &viewer::EntityModel::SetPosition, "C++: viewer::EntityModel::SetPosition(double, double, double) --> void", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"));
		cl.def("SetRotation", (void (viewer::EntityModel::*)(double, double, double, double)) &viewer::EntityModel::SetRotation, "C++: viewer::EntityModel::SetRotation(double, double, double, double) --> void", pybind11::arg("hRoad"), pybind11::arg("pRoad"), pybind11::arg("hRelative"), pybind11::arg("r"));
		cl.def("SetRotation", (void (viewer::EntityModel::*)(double, double, double)) &viewer::EntityModel::SetRotation, "C++: viewer::EntityModel::SetRotation(double, double, double) --> void", pybind11::arg("h"), pybind11::arg("p"), pybind11::arg("r"));
		cl.def("SetTransparency", (void (viewer::EntityModel::*)(double)) &viewer::EntityModel::SetTransparency, "C++: viewer::EntityModel::SetTransparency(double) --> void", pybind11::arg("factor"));
		cl.def("assign", (class viewer::EntityModel & (viewer::EntityModel::*)(const class viewer::EntityModel &)) &viewer::EntityModel::operator=, "C++: viewer::EntityModel::operator=(const class viewer::EntityModel &) --> class viewer::EntityModel &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B8_[viewer::CarModel] ";
	{ // viewer::CarModel file: line:271
		pybind11::class_<viewer::CarModel, std::shared_ptr<viewer::CarModel>, PyCallBack_viewer_CarModel, viewer::EntityModel> cl(M("viewer"), "CarModel", "");
		cl.def( pybind11::init( [](PyCallBack_viewer_CarModel const &o){ return new PyCallBack_viewer_CarModel(o); } ) );
		cl.def( pybind11::init( [](viewer::CarModel const &o){ return new viewer::CarModel(o); } ) );
		cl.def_readwrite("wheel_", &viewer::CarModel::wheel_);
		cl.def_readwrite("wheel_angle_", &viewer::CarModel::wheel_angle_);
		cl.def_readwrite("wheel_rot_", &viewer::CarModel::wheel_rot_);
		cl.def("GetType", (enum viewer::EntityModel::EntityType (viewer::CarModel::*)()) &viewer::CarModel::GetType, "C++: viewer::CarModel::GetType() --> enum viewer::EntityModel::EntityType");
		cl.def("UpdateWheels", (void (viewer::CarModel::*)(double, double)) &viewer::CarModel::UpdateWheels, "C++: viewer::CarModel::UpdateWheels(double, double) --> void", pybind11::arg("wheel_angle"), pybind11::arg("wheel_rotation"));
		cl.def("UpdateWheelsDelta", (void (viewer::CarModel::*)(double, double)) &viewer::CarModel::UpdateWheelsDelta, "C++: viewer::CarModel::UpdateWheelsDelta(double, double) --> void", pybind11::arg("wheel_angle"), pybind11::arg("wheel_rotation_delta"));
		cl.def("assign", (class viewer::CarModel & (viewer::CarModel::*)(const class viewer::CarModel &)) &viewer::CarModel::operator=, "C++: viewer::CarModel::operator=(const class viewer::CarModel &) --> class viewer::CarModel &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B9_[viewer::VisibilityCallback] ";
	{ // viewer::VisibilityCallback file: line:292
		pybind11::class_<viewer::VisibilityCallback, std::shared_ptr<viewer::VisibilityCallback>, PyCallBack_viewer_VisibilityCallback> cl(M("viewer"), "VisibilityCallback", "");
		cl.def( pybind11::init( [](PyCallBack_viewer_VisibilityCallback const &o){ return new PyCallBack_viewer_VisibilityCallback(o); } ) );
		cl.def( pybind11::init( [](viewer::VisibilityCallback const &o){ return new viewer::VisibilityCallback(o); } ) );
	}
	std::cout << "B10_[viewer::Viewer] ";
	{ // viewer::Viewer file: line:335
		pybind11::class_<viewer::Viewer, std::shared_ptr<viewer::Viewer>> cl(M("viewer"), "Viewer", "");
		cl.def( pybind11::init( [](viewer::Viewer const &o){ return new viewer::Viewer(o); } ) );
		cl.def_readwrite("currentCarInFocus_", &viewer::Viewer::currentCarInFocus_);
		cl.def_readwrite("camMode_", &viewer::Viewer::camMode_);
		cl.def_readwrite("line_node_", &viewer::Viewer::line_node_);
		cl.def_readwrite("shadow_node_", &viewer::Viewer::shadow_node_);
		cl.def_readwrite("dot_node_", &viewer::Viewer::dot_node_);
		cl.def_readwrite("odrLines_", &viewer::Viewer::odrLines_);
		cl.def_readwrite("osiFeatures_", &viewer::Viewer::osiFeatures_);
		cl.def_readwrite("trajectoryLines_", &viewer::Viewer::trajectoryLines_);
		cl.def_readwrite("envTx_", &viewer::Viewer::envTx_);
		cl.def_readwrite("environment_", &viewer::Viewer::environment_);
		cl.def_readwrite("rubberbandManipulator_", &viewer::Viewer::rubberbandManipulator_);
		cl.def_readwrite("nodeTrackerManipulator_", &viewer::Viewer::nodeTrackerManipulator_);
		cl.def_readwrite("entities_", &viewer::Viewer::entities_);
		cl.def_readwrite("lodScale_", &viewer::Viewer::lodScale_);
		cl.def_readwrite("roadSensors_", &viewer::Viewer::roadSensors_);
		cl.def_readwrite("trails_", &viewer::Viewer::trails_);
		cl.def_readwrite("showInfoText", &viewer::Viewer::showInfoText);
		cl.def_readwrite("exe_path_", &viewer::Viewer::exe_path_);
		cl.def_readwrite("callback_", &viewer::Viewer::callback_);
		cl.def_readwrite("infoTextCamera", &viewer::Viewer::infoTextCamera);
		cl.def_readwrite("infoText", &viewer::Viewer::infoText);
		cl.def_readwrite("polyLine_", &viewer::Viewer::polyLine_);
		cl.def_static("PrintUsage", (void (*)()) &viewer::Viewer::PrintUsage, "C++: viewer::Viewer::PrintUsage() --> void");
		cl.def("AddCustomCamera", (void (viewer::Viewer::*)(double, double, double, double, double)) &viewer::Viewer::AddCustomCamera, "C++: viewer::Viewer::AddCustomCamera(double, double, double, double, double) --> void", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("p"));
		cl.def("SetCameraMode", (void (viewer::Viewer::*)(int)) &viewer::Viewer::SetCameraMode, "Set mode of the esmini camera model\n \n\n According to the RubberbandManipulator::CAMERA_MODE enum, plus any number of custom cameras. Set -1 to select the last.\n\nC++: viewer::Viewer::SetCameraMode(int) --> void", pybind11::arg("mode"));
		cl.def("GetNumberOfCameraModes", (int (viewer::Viewer::*)()) &viewer::Viewer::GetNumberOfCameraModes, "C++: viewer::Viewer::GetNumberOfCameraModes() --> int");
		cl.def("UpdateCameraFOV", (void (viewer::Viewer::*)()) &viewer::Viewer::UpdateCameraFOV, "C++: viewer::Viewer::UpdateCameraFOV() --> void");
		cl.def("SetVehicleInFocus", (void (viewer::Viewer::*)(int)) &viewer::Viewer::SetVehicleInFocus, "C++: viewer::Viewer::SetVehicleInFocus(int) --> void", pybind11::arg("idx"));
		cl.def("GetEntityInFocus", (int (viewer::Viewer::*)()) &viewer::Viewer::GetEntityInFocus, "C++: viewer::Viewer::GetEntityInFocus() --> int");
		cl.def("AddEntityModel", (int (viewer::Viewer::*)(class viewer::EntityModel *)) &viewer::Viewer::AddEntityModel, "C++: viewer::Viewer::AddEntityModel(class viewer::EntityModel *) --> int", pybind11::arg("model"));
		cl.def("RemoveCar", (void (viewer::Viewer::*)(int)) &viewer::Viewer::RemoveCar, "C++: viewer::Viewer::RemoveCar(int) --> void", pybind11::arg("index"));
		cl.def("ReplaceCar", (void (viewer::Viewer::*)(int, class viewer::EntityModel *)) &viewer::Viewer::ReplaceCar, "C++: viewer::Viewer::ReplaceCar(int, class viewer::EntityModel *) --> void", pybind11::arg("index"), pybind11::arg("model"));
		cl.def("AddEnvironment", (int (viewer::Viewer::*)(const char *)) &viewer::Viewer::AddEnvironment, "C++: viewer::Viewer::AddEnvironment(const char *) --> int", pybind11::arg("filename"));
		cl.def("UpdateSensor", (void (viewer::Viewer::*)(class viewer::PointSensor *)) &viewer::Viewer::UpdateSensor, "C++: viewer::Viewer::UpdateSensor(class viewer::PointSensor *) --> void", pybind11::arg("sensor"));
		cl.def("SensorSetPivotPos", (void (viewer::Viewer::*)(class viewer::PointSensor *, double, double, double)) &viewer::Viewer::SensorSetPivotPos, "C++: viewer::Viewer::SensorSetPivotPos(class viewer::PointSensor *, double, double, double) --> void", pybind11::arg("sensor"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"));
		cl.def("SensorSetTargetPos", (void (viewer::Viewer::*)(class viewer::PointSensor *, double, double, double)) &viewer::Viewer::SensorSetTargetPos, "C++: viewer::Viewer::SensorSetTargetPos(class viewer::PointSensor *, double, double, double) --> void", pybind11::arg("sensor"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"));
		cl.def("setKeyUp", (void (viewer::Viewer::*)(bool)) &viewer::Viewer::setKeyUp, "C++: viewer::Viewer::setKeyUp(bool) --> void", pybind11::arg("pressed"));
		cl.def("setKeyDown", (void (viewer::Viewer::*)(bool)) &viewer::Viewer::setKeyDown, "C++: viewer::Viewer::setKeyDown(bool) --> void", pybind11::arg("pressed"));
		cl.def("setKeyLeft", (void (viewer::Viewer::*)(bool)) &viewer::Viewer::setKeyLeft, "C++: viewer::Viewer::setKeyLeft(bool) --> void", pybind11::arg("pressed"));
		cl.def("setKeyRight", (void (viewer::Viewer::*)(bool)) &viewer::Viewer::setKeyRight, "C++: viewer::Viewer::setKeyRight(bool) --> void", pybind11::arg("pressed"));
		cl.def("getKeyUp", (bool (viewer::Viewer::*)()) &viewer::Viewer::getKeyUp, "C++: viewer::Viewer::getKeyUp() --> bool");
		cl.def("getKeyDown", (bool (viewer::Viewer::*)()) &viewer::Viewer::getKeyDown, "C++: viewer::Viewer::getKeyDown() --> bool");
		cl.def("getKeyLeft", (bool (viewer::Viewer::*)()) &viewer::Viewer::getKeyLeft, "C++: viewer::Viewer::getKeyLeft() --> bool");
		cl.def("getKeyRight", (bool (viewer::Viewer::*)()) &viewer::Viewer::getKeyRight, "C++: viewer::Viewer::getKeyRight() --> bool");
		cl.def("SetQuitRequest", (void (viewer::Viewer::*)(bool)) &viewer::Viewer::SetQuitRequest, "C++: viewer::Viewer::SetQuitRequest(bool) --> void", pybind11::arg("value"));
		cl.def("GetQuitRequest", (bool (viewer::Viewer::*)()) &viewer::Viewer::GetQuitRequest, "C++: viewer::Viewer::GetQuitRequest() --> bool");
		cl.def("SetInfoTextProjection", (void (viewer::Viewer::*)(int, int)) &viewer::Viewer::SetInfoTextProjection, "C++: viewer::Viewer::SetInfoTextProjection(int, int) --> void", pybind11::arg("width"), pybind11::arg("height"));
		cl.def("SetInfoText", (void (viewer::Viewer::*)(const char *)) &viewer::Viewer::SetInfoText, "C++: viewer::Viewer::SetInfoText(const char *) --> void", pybind11::arg("text"));
		cl.def("SetNodeMaskBits", (void (viewer::Viewer::*)(int)) &viewer::Viewer::SetNodeMaskBits, "C++: viewer::Viewer::SetNodeMaskBits(int) --> void", pybind11::arg("bits"));
		cl.def("SetNodeMaskBits", (void (viewer::Viewer::*)(int, int)) &viewer::Viewer::SetNodeMaskBits, "C++: viewer::Viewer::SetNodeMaskBits(int, int) --> void", pybind11::arg("mask"), pybind11::arg("bits"));
		cl.def("ClearNodeMaskBits", (void (viewer::Viewer::*)(int)) &viewer::Viewer::ClearNodeMaskBits, "C++: viewer::Viewer::ClearNodeMaskBits(int) --> void", pybind11::arg("bits"));
		cl.def("ToggleNodeMaskBits", (void (viewer::Viewer::*)(int)) &viewer::Viewer::ToggleNodeMaskBits, "C++: viewer::Viewer::ToggleNodeMaskBits(int) --> void", pybind11::arg("bits"));
		cl.def("GetNodeMaskBit", (int (viewer::Viewer::*)(int)) &viewer::Viewer::GetNodeMaskBit, "C++: viewer::Viewer::GetNodeMaskBit(int) --> int", pybind11::arg("mask"));
		cl.def("CreateRoadSensors", (bool (viewer::Viewer::*)(class viewer::CarModel *)) &viewer::Viewer::CreateRoadSensors, "C++: viewer::Viewer::CreateRoadSensors(class viewer::CarModel *) --> bool", pybind11::arg("vehicle_model"));
		cl.def("CaptureNextFrame", (void (viewer::Viewer::*)()) &viewer::Viewer::CaptureNextFrame, "C++: viewer::Viewer::CaptureNextFrame() --> void");
		cl.def("CaptureContinuously", (void (viewer::Viewer::*)(bool)) &viewer::Viewer::CaptureContinuously, "C++: viewer::Viewer::CaptureContinuously(bool) --> void", pybind11::arg("state"));
	}
}


// File: unknown/unknown_1.cpp
#include <functional> // std::less
#include <iostream> // --trace
#include <memory> // std::allocator
#include <osg/ArgumentParser> // osg::ArgumentParser
#include <osg/Array> // 
#include <osg/Array> // osg::TemplateArray
#include <osg/BoundingBox> // osg::BoundingBoxImpl
#include <osg/CopyOp> // osg::CopyOp
#include <osg/GraphicsContext> // osg::GraphicsContext
#include <osg/Group> // osg::Group
#include <osg/Matrixd> // osg::Matrixd
#include <osg/Node> // osg::Node
#include <osg/Object> // osg::Object
#include <osg/Vec3f> // osg::Vec3f
#include <osg/Vec4f> // osg::Vec4f
#include <osg/View> // osg::View
#include <osg/ref_ptr> // osg::ref_ptr
#include <osgGA/GUIActionAdapter> // osgGA::GUIActionAdapter
#include <osgGA/GUIEventAdapter> // 
#include <osgGA/GUIEventAdapter> // osgGA::GUIEventAdapter
#include <osgGA/GUIEventAdapter> // osgGA::PointerData
#include <osgUtil/LineSegmentIntersector> // osgUtil::LineSegmentIntersector
#include <set> // std::multiset
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
#include "viewer.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

// viewer::ViewerEventHandler file: line:444
struct PyCallBack_viewer_ViewerEventHandler : public viewer::ViewerEventHandler {
	using viewer::ViewerEventHandler::ViewerEventHandler;

};

void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B11_[viewer::ViewerEventHandler] ";
	{ // viewer::ViewerEventHandler file: line:444
		pybind11::class_<viewer::ViewerEventHandler, std::shared_ptr<viewer::ViewerEventHandler>, PyCallBack_viewer_ViewerEventHandler> cl(M("viewer"), "ViewerEventHandler", "");
		cl.def( pybind11::init<class viewer::Viewer *>(), pybind11::arg("viewer") );

		cl.def( pybind11::init( [](PyCallBack_viewer_ViewerEventHandler const &o){ return new PyCallBack_viewer_ViewerEventHandler(o); } ) );
		cl.def( pybind11::init( [](viewer::ViewerEventHandler const &o){ return new viewer::ViewerEventHandler(o); } ) );
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


PYBIND11_MODULE(pyviewerbase, root_module) {
	root_module.doc() = "pyviewerbase module";

	std::map <std::string, pybind11::module> modules;
	ModuleGetter M = [&](std::string const &namespace_) -> pybind11::module & {
		auto it = modules.find(namespace_);
		if( it == modules.end() ) throw std::runtime_error("Attempt to access pybind11::module for namespace " + namespace_ + " before it was created!!!");
		return it->second;
	};

	modules[""] = root_module;

	std::vector< std::pair<std::string, std::string> > sub_modules {
		{"", "viewer"},
	};
	for(auto &p : sub_modules ) modules[p.first.size() ? p.first+"::"+p.second : p.second] = modules[p.first].def_submodule(p.second.c_str(), ("Bindings for " + p.first + "::" + p.second + " namespace").c_str() );

	//pybind11::class_<std::shared_ptr<void>>(M(""), "_encapsulated_data_");

	bind_unknown_unknown(M);
	bind_unknown_unknown_1(M);

}

// Source list file: /home/wave/repositories/python-esmini/src/viewerbase/pyviewerbase.sources
// pyviewerbase.cpp
// unknown/unknown.cpp
// unknown/unknown_1.cpp

// Modules list file: /home/wave/repositories/python-esmini/src/viewerbase/pyviewerbase.modules
// viewer 
