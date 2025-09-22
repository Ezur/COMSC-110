################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/MT-\ sortaMesa.cpp 

OBJS += \
./src/MT-\ sortaMesa.o 

CPP_DEPS += \
./src/MT-\ sortaMesa.d 


# Each subdirectory must supply rules for building sources it contributes
src/MT-\ sortaMesa.o: ../src/MT-\ sortaMesa.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/MT- sortaMesa.d" -MT"src/MT-\ sortaMesa.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


