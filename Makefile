# Target specific macros
TARGET = c++

#NXTOSEK_ROOT = ../..
#NXTOSEK_ROOT = /nxtOSEK
NXTOSEK_ROOT = ../nxtOSEK

# nxtway_gs_balancer library desiged for NXTway-GS two wheeled self-balancing robot
USER_INC_PATH= $(NXTOSEK_ROOT)/ecrobot/nxtway_gs_balancer
USER_LIB = nxtway_gs_balancer

# using NXT standard tires (not Motorcycle tires)
#USER_DEF = NXT_STD_TIRE

# User application source
TARGET_SOURCES = \
	balancer_param.c 
	
TARGET_CPP_SOURCES = \
				Motor.cpp \
				Gyro_Sensor.cpp \
				Light_sensor.cpp \
				Sonar_sensor.cpp \
				Touch_sensor.cpp \
				Power_source.cpp \
				Device_control.cpp \
				Wheel.cpp \
				Tail.cpp \
				Moving_monitor.cpp \
				Own_angle.cpp \
				Driving_order.cpp \
				Init_setting.cpp \
				Obstacle.cpp \
				Amb_light.cpp \
				Surface_road.cpp \
				Line.cpp \
				Road_init.cpp \
				Running.cpp \
				Running_request.cpp \
				Failsafe_request.cpp \
				Cource.cpp \
				main.cpp \
				Get_gray.cpp \
				Garage_running.cpp \
				Seesaw_running.cpp \
				Bump.cpp \
				Stair_running.cpp \
				Return_running.cpp \
				Comon_running.cpp \
				distance.cpp
				 

# OSEK OIL file
TOPPERS_OSEK_OIL_SOURCE := ./main.oil

# below part should not be modified
O_PATH ?= build
include $(NXTOSEK_ROOT)/ecrobot/ecrobot++.mak