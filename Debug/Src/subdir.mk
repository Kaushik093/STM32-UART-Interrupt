################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/syscalls.c \
../Src/sysmem.c \
../Src/uart_transmitter.c 

OBJS += \
./Src/syscalls.o \
./Src/sysmem.o \
./Src/uart_transmitter.o 

C_DEPS += \
./Src/syscalls.d \
./Src/sysmem.d \
./Src/uart_transmitter.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DNUCLEO_F401RE -DSTM32 -DSTM32F401RETx -DSTM32F4 -DSTM32F401xE -c -I../Inc -I"C:/Users/naray/OneDrive/Documents/STM Workspace/chip_headers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/naray/OneDrive/Documents/STM Workspace/chip_headers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su ./Src/uart_transmitter.cyclo ./Src/uart_transmitter.d ./Src/uart_transmitter.o ./Src/uart_transmitter.su

.PHONY: clean-Src

