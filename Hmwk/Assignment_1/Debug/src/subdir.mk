################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/HW3_12.cpp \
../src/HW3_13.cpp \
../src/HW4_10.cpp \
../src/HW5_11.cpp \
../src/HW6_7.cpp \
../src/HW7_6.cpp \
../src/HW8_7.cpp \
../src/main.cpp 

OBJS += \
./src/HW3_12.o \
./src/HW3_13.o \
./src/HW4_10.o \
./src/HW5_11.o \
./src/HW6_7.o \
./src/HW7_6.o \
./src/HW8_7.o \
./src/main.o 

CPP_DEPS += \
./src/HW3_12.d \
./src/HW3_13.d \
./src/HW4_10.d \
./src/HW5_11.d \
./src/HW6_7.d \
./src/HW7_6.d \
./src/HW8_7.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


