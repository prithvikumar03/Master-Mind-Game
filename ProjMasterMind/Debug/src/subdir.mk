################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CodeBreaker.cpp \
../src/CodeMaker.cpp \
../src/MasterMind.cpp \
../src/ProjMasterMind.cpp \
../src/SeqComparator.cpp \
../src/Validator.cpp 

OBJS += \
./src/CodeBreaker.o \
./src/CodeMaker.o \
./src/MasterMind.o \
./src/ProjMasterMind.o \
./src/SeqComparator.o \
./src/Validator.o 

CPP_DEPS += \
./src/CodeBreaker.d \
./src/CodeMaker.d \
./src/MasterMind.d \
./src/ProjMasterMind.d \
./src/SeqComparator.d \
./src/Validator.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/cpp/workspace/ProjMasterMind/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


