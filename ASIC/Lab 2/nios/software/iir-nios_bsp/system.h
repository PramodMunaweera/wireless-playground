/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_qsys_0' in SOPC Builder design 'standard'
 * SOPC Builder design path: ../../standard.sopcinfo
 *
 * Generated: Tue Dec 30 14:42:48 EET 2014
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00010820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x11
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 1024
#define ALT_CPU_EXCEPTION_ADDR 0x00008020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 1024
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x11
#define ALT_CPU_NAME "nios2_qsys_0"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_RESET_ADDR 0x00008000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00010820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x11
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 1024
#define NIOS2_EXCEPTION_ADDR 0x00008020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 1024
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x11
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_RESET_ADDR 0x00008000


/*
 * Custom instruction macros
 *
 */

#define ALT_CI_CNTR_0(n) __builtin_custom_in(ALT_CI_CNTR_0_N+(n&ALT_CI_CNTR_0_N_MASK))
#define ALT_CI_CNTR_0_N 0x0
#define ALT_CI_CNTR_0_N_MASK ((1<<2)-1)
#define ALT_CI_EXTOUT_0(A) __builtin_custom_ini(ALT_CI_EXTOUT_0_N,(A))
#define ALT_CI_EXTOUT_0_N 0x4


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_NIOS2_QSYS
#define __CNTR
#define __EXTOUT


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone III"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x11020
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x11020
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x11020
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "standard"


/*
 * flag configuration
 *
 */

#define ALT_MODULE_CLASS_flag altera_avalon_pio
#define FLAG_BASE 0x11010
#define FLAG_BIT_CLEARING_EDGE_REGISTER 0
#define FLAG_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLAG_CAPTURE 0
#define FLAG_DATA_WIDTH 1
#define FLAG_DO_TEST_BENCH_WIRING 0
#define FLAG_DRIVEN_SIM_VALUE 0
#define FLAG_EDGE_TYPE "NONE"
#define FLAG_FREQ 50000000
#define FLAG_HAS_IN 0
#define FLAG_HAS_OUT 1
#define FLAG_HAS_TRI 0
#define FLAG_IRQ -1
#define FLAG_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLAG_IRQ_TYPE "NONE"
#define FLAG_NAME "/dev/flag"
#define FLAG_RESET_VALUE 0
#define FLAG_SPAN 16
#define FLAG_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x11020
#define JTAG_UART_0_IRQ 0
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * mem configuration
 *
 */

#define ALT_MODULE_CLASS_mem altera_avalon_onchip_memory2
#define MEM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define MEM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define MEM_BASE 0x8000
#define MEM_CONTENTS_INFO ""
#define MEM_DUAL_PORT 0
#define MEM_GUI_RAM_BLOCK_TYPE "AUTO"
#define MEM_INIT_CONTENTS_FILE "standard_mem"
#define MEM_INIT_MEM_CONTENT 1
#define MEM_INSTANCE_ID "NONE"
#define MEM_IRQ -1
#define MEM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MEM_NAME "/dev/mem"
#define MEM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define MEM_RAM_BLOCK_TYPE "AUTO"
#define MEM_READ_DURING_WRITE_MODE "DONT_CARE"
#define MEM_SINGLE_CLOCK_OP 0
#define MEM_SIZE_MULTIPLE 1
#define MEM_SIZE_VALUE 32768
#define MEM_SPAN 32768
#define MEM_TYPE "altera_avalon_onchip_memory2"
#define MEM_WRITABLE 1


/*
 * pioin configuration
 *
 */

#define ALT_MODULE_CLASS_pioin altera_avalon_pio
#define PIOIN_BASE 0x11000
#define PIOIN_BIT_CLEARING_EDGE_REGISTER 0
#define PIOIN_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIOIN_CAPTURE 1
#define PIOIN_DATA_WIDTH 1
#define PIOIN_DO_TEST_BENCH_WIRING 0
#define PIOIN_DRIVEN_SIM_VALUE 0
#define PIOIN_EDGE_TYPE "RISING"
#define PIOIN_FREQ 50000000
#define PIOIN_HAS_IN 1
#define PIOIN_HAS_OUT 0
#define PIOIN_HAS_TRI 0
#define PIOIN_IRQ -1
#define PIOIN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIOIN_IRQ_TYPE "NONE"
#define PIOIN_NAME "/dev/pioin"
#define PIOIN_RESET_VALUE 0
#define PIOIN_SPAN 16
#define PIOIN_TYPE "altera_avalon_pio"

#endif /* __SYSTEM_H_ */
