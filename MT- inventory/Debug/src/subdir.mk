################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/MT-\ inventory.cpp 

OBJS += \
./src/MT-\ inventory.o 

CPP_DEPS += \
./src/MT-\ inventory.d 


# Each subdirectory must supply rules for building sources it contributes
src/MT-\ inventory.o: ../src/MT-\ inventory.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/MT- inventory.d" -MT"src/MT-\ inventory.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


