################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Program\ 14-\ A\ Tale\ of\ Two\ Cities.cpp 

OBJS += \
./src/Program\ 14-\ A\ Tale\ of\ Two\ Cities.o 

CPP_DEPS += \
./src/Program\ 14-\ A\ Tale\ of\ Two\ Cities.d 


# Each subdirectory must supply rules for building sources it contributes
src/Program\ 14-\ A\ Tale\ of\ Two\ Cities.o: ../src/Program\ 14-\ A\ Tale\ of\ Two\ Cities.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Program 14- A Tale of Two Cities.d" -MT"src/Program\ 14-\ A\ Tale\ of\ Two\ Cities.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


