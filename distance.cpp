#ifndef INCLUDE_DISTANCE
#define INCLUDE_DISTANCE
#include"Device_control.cpp"
#include"Road_init.cpp"
#include"Surface_road.cpp"
#include"Obstacle.cpp"
#include"Line.cpp"
#include"Amb_light.cpp"
#include"Driving_order.cpp"
#include"Init_setting.cpp"
#include"Moving_monitor.cpp"
#include"Own_angle.cpp"
#include"Tail.cpp"
#include"Wheel.cpp"
#include"Running_request.cpp"
#include"Running.cpp"
#include"Failsafe_request.cpp"
#include"Cource.cpp"
#include"Section.cpp"
//#include"Running_method.cpp"
#include"Maimai.cpp"
#include"Pid.cpp"
#include"Standing_position.cpp"
#include"Driftturn_running.cpp"
#include"Lookup_running.cpp"
#include"Garage_running.cpp"
#include"Seesaw_running.cpp"
#include"Stair_running.cpp"
#include"Get_gray.cpp"
#include"Bump.cpp"
#include"Comon_running.cpp"
#include"Return_running.cpp"

hardware::Device_control *_device_control1=new hardware::Device_control();
//路面パーケージ
surface_road::Road_init *_road_init=new surface_road::Road_init();
surface_road::Surface_road *_surface_road=new surface_road::Surface_road();
surface_road::Obstacle *_obstacle=new surface_road::Obstacle();
surface_road::Line *_line=new surface_road::Line();
surface_road::Amb_light *_amb_light=new surface_road::Amb_light();
//車両パッケージ
car::Driving_order *_driving_order=new car::Driving_order();
car::Init_setting *_init_setting=new car::Init_setting();
car::Moving_monitor *_moving_monitor=new car::Moving_monitor();
car::Own_angle *_own_angle=new car::Own_angle();
car::Tail *_tail=new car::Tail();
car::Wheel *_wheel=new car::Wheel();
//走行戦略
run_strategy::Running_request *_running_request=new run_strategy::Running_request();
run_strategy::Running *_running=new run_strategy::Running();
run_strategy::Failsafe_request *_failsafe_request=new run_strategy::Failsafe_request();
run_strategy::Cource *_cource=new run_strategy::Cource();
run_strategy::Section *_section=new run_strategy::Section();
run_strategy::Running_method *_runnning_method=new run_strategy::Running_method();
run_strategy::Maimai *_maimai=new run_strategy::Maimai();
run_strategy::Pid *_pid=new run_strategy::Pid();
run_strategy::Standing_position *_standing_position=new run_strategy::Standing_position();
run_strategy::Driftturn_running *_driftturn_running=new run_strategy::Driftturn_running();
run_strategy::lookup_running *_lookup_running=new run_strategy::Lookup_running();
run_strategy::Garage_running *_garage_running=new run_strategy::Garage_running();
run_strategy::Seesaw_running *_seesaw_running=new run_strategy::Seesaw_running();
run_strategy::Stair_running *_stair_running=new run_strategy::Stair_running();
run_strategy::Get_gray *_get_gray=new run_strategy::Get_gray();
run_strategy::Bump *_bump=new run_strategy::Bump();
run_strategy::Comon_running *_comon_running=new run_strategy::Comon_running();
run_strategy::Return_running *_return_running=new run_strategy::Return_running();
#endif
