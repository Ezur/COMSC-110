################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Lab\ 5-2.cpp 

OBJS += \
./src/Lab\ 5-2.o 

CPP_DEPS += \
./src/Lab\ 5-2.d 


# Each subdirectory must supply rules for building sources it contributes
src/Lab\ 5-2.o: ../src/Lab\ 5-2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Lab 5-2.d" -MT"src/Lab\ 5-2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


