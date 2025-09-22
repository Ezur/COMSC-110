################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Program\ 4.cpp 

OBJS += \
./src/Program\ 4.o 

CPP_DEPS += \
./src/Program\ 4.d 


# Each subdirectory must supply rules for building sources it contributes
src/Program\ 4.o: ../src/Program\ 4.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Program 4.d" -MT"src/Program\ 4.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


