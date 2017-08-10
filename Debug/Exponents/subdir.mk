################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Exponents/jpow.c \
../Exponents/jroot.c 

OBJS += \
./Exponents/jpow.o \
./Exponents/jroot.o 

C_DEPS += \
./Exponents/jpow.d \
./Exponents/jroot.d 


# Each subdirectory must supply rules for building sources it contributes
Exponents/%.o: ../Exponents/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


