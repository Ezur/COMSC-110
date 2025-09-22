################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Program\ 15-\ Soft\ Drink\ Machine.cpp 

OBJS += \
./src/Program\ 15-\ Soft\ Drink\ Machine.o 

CPP_DEPS += \
./src/Program\ 15-\ Soft\ Drink\ Machine.d 


# Each subdirectory must supply rules for building sources it contributes
src/Program\ 15-\ Soft\ Drink\ Machine.o: ../src/Program\ 15-\ Soft\ Drink\ Machine.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Program 15- Soft Drink Machine.d" -MT"src/Program\ 15-\ Soft\ Drink\ Machine.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


