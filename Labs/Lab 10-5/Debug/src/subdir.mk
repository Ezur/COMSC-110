################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Lab\ 10-5.cpp 

OBJS += \
./src/Lab\ 10-5.o 

CPP_DEPS += \
./src/Lab\ 10-5.d 


# Each subdirectory must supply rules for building sources it contributes
src/Lab\ 10-5.o: ../src/Lab\ 10-5.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Lab 10-5.d" -MT"src/Lab\ 10-5.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


