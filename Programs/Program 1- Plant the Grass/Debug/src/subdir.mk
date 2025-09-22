################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Program\ 1-\ Plant\ the\ Grass.cpp 

OBJS += \
./src/Program\ 1-\ Plant\ the\ Grass.o 

CPP_DEPS += \
./src/Program\ 1-\ Plant\ the\ Grass.d 


# Each subdirectory must supply rules for building sources it contributes
src/Program\ 1-\ Plant\ the\ Grass.o: ../src/Program\ 1-\ Plant\ the\ Grass.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Program 1- Plant the Grass.d" -MT"src/Program\ 1-\ Plant\ the\ Grass.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


