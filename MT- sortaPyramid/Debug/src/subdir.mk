################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/MT-\ sortaPyramid.cpp 

OBJS += \
./src/MT-\ sortaPyramid.o 

CPP_DEPS += \
./src/MT-\ sortaPyramid.d 


# Each subdirectory must supply rules for building sources it contributes
src/MT-\ sortaPyramid.o: ../src/MT-\ sortaPyramid.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/MT- sortaPyramid.d" -MT"src/MT-\ sortaPyramid.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


