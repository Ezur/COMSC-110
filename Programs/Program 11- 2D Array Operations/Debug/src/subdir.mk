################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Program\ 11-\ 2D\ Array\ Operations.cpp 

OBJS += \
./src/Program\ 11-\ 2D\ Array\ Operations.o 

CPP_DEPS += \
./src/Program\ 11-\ 2D\ Array\ Operations.d 


# Each subdirectory must supply rules for building sources it contributes
src/Program\ 11-\ 2D\ Array\ Operations.o: ../src/Program\ 11-\ 2D\ Array\ Operations.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Program 11- 2D Array Operations.d" -MT"src/Program\ 11-\ 2D\ Array\ Operations.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


