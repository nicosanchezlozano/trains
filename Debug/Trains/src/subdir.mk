################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Trains/src/Line.cpp \
../Trains/src/Stop.cpp \
../Trains/src/Train.cpp \
../Trains/src/main.cpp \
../Trains/src/semaphore.cpp 

O_SRCS += \
../Trains/src/Line.o \
../Trains/src/Stop.o \
../Trains/src/Train.o \
../Trains/src/main.o 

OBJS += \
./Trains/src/Line.o \
./Trains/src/Stop.o \
./Trains/src/Train.o \
./Trains/src/main.o \
./Trains/src/semaphore.o 

CPP_DEPS += \
./Trains/src/Line.d \
./Trains/src/Stop.d \
./Trains/src/Train.d \
./Trains/src/main.d \
./Trains/src/semaphore.d 


# Each subdirectory must supply rules for building sources it contributes
Trains/src/%.o: ../Trains/src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


