################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Program\ 2-\ Shapes\ Menu.cpp 

OBJS += \
./src/Program\ 2-\ Shapes\ Menu.o 

CPP_DEPS += \
./src/Program\ 2-\ Shapes\ Menu.d 


# Each subdirectory must supply rules for building sources it contributes
src/Program\ 2-\ Shapes\ Menu.o: ../src/Program\ 2-\ Shapes\ Menu.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Program 2- Shapes Menu.d" -MT"src/Program\ 2-\ Shapes\ Menu.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


