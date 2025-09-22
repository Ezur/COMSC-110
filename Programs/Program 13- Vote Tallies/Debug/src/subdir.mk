################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Program\ 13-\ Vote\ Tallies.cpp 

OBJS += \
./src/Program\ 13-\ Vote\ Tallies.o 

CPP_DEPS += \
./src/Program\ 13-\ Vote\ Tallies.d 


# Each subdirectory must supply rules for building sources it contributes
src/Program\ 13-\ Vote\ Tallies.o: ../src/Program\ 13-\ Vote\ Tallies.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Program 13- Vote Tallies.d" -MT"src/Program\ 13-\ Vote\ Tallies.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


