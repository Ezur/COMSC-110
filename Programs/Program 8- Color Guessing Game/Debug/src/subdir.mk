################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Program\ 8-\ Color\ Guessing\ Game.cpp 

OBJS += \
./src/Program\ 8-\ Color\ Guessing\ Game.o 

CPP_DEPS += \
./src/Program\ 8-\ Color\ Guessing\ Game.d 


# Each subdirectory must supply rules for building sources it contributes
src/Program\ 8-\ Color\ Guessing\ Game.o: ../src/Program\ 8-\ Color\ Guessing\ Game.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Program 8- Color Guessing Game.d" -MT"src/Program\ 8-\ Color\ Guessing\ Game.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


