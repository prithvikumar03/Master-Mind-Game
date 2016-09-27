################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/src.com.mastermind/CodeBreaker.cpp \
../src/src.com.mastermind/CodeMaker.cpp \
../src/src.com.mastermind/MasterMind.cpp \
../src/src.com.mastermind/ProjMasterMind.cpp \
../src/src.com.mastermind/SeqComparator.cpp \
../src/src.com.mastermind/Validator.cpp 

OBJS += \
./src/src.com.mastermind/CodeBreaker.o \
./src/src.com.mastermind/CodeMaker.o \
./src/src.com.mastermind/MasterMind.o \
./src/src.com.mastermind/ProjMasterMind.o \
./src/src.com.mastermind/SeqComparator.o \
./src/src.com.mastermind/Validator.o 

CPP_DEPS += \
./src/src.com.mastermind/CodeBreaker.d \
./src/src.com.mastermind/CodeMaker.d \
./src/src.com.mastermind/MasterMind.d \
./src/src.com.mastermind/ProjMasterMind.d \
./src/src.com.mastermind/SeqComparator.d \
./src/src.com.mastermind/Validator.d 


# Each subdirectory must supply rules for building sources it contributes
src/src.com.mastermind/%.o: ../src/src.com.mastermind/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/cpp/workspace/ProjMasterMind/src" -I"/home/cpp/workspace/ProjMasterMind/src/src.com.includes" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


