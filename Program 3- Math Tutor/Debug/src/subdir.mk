################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Program\ 3-\ Math\ Tutor.cpp 

OBJS += \
./src/Program\ 3-\ Math\ Tutor.o 

CPP_DEPS += \
./src/Program\ 3-\ Math\ Tutor.d 


# Each subdirectory must supply rules for building sources it contributes
src/Program\ 3-\ Math\ Tutor.o: ../src/Program\ 3-\ Math\ Tutor.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Program 3- Math Tutor.d" -MT"src/Program\ 3-\ Math\ Tutor.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


