################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/MidTerm\ Prep.cpp 

OBJS += \
./src/MidTerm\ Prep.o 

CPP_DEPS += \
./src/MidTerm\ Prep.d 


# Each subdirectory must supply rules for building sources it contributes
src/MidTerm\ Prep.o: ../src/MidTerm\ Prep.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/MidTerm Prep.d" -MT"src/MidTerm\ Prep.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


