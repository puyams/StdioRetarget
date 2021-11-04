# StdioRetarget
This is a library for using `stdio.h` functions (i.e. `printf`) on serial terminal in **Keil software**. This library works for **STM32 microcontrollers** with **HAL library**, *OR* you can modify this on your way! (follow below steps to know more)
## Initialization
To use this library, please do the following steps:
1. Add Header(.h) and Source(.c) files to your project
2. Initialize your UART
3. Click on **Manage Run-Time Environment**

 ![Manage Run-Time Environment](/Docs/Step1.png)

4. Go to **Compiler** section: **I/O**
5. Change below parameter from **Breakpoint** to **User** and Enable them
    - STDERR
    - STDIN
    - STDOUT
    - TYY

 ![Previous Value](/Docs/Step2.png)
 to
 ![New Value](/Docs/Step3.png)

6. Replace your UART handler(huartx) instead of `huart2` in `#define DebugUARTStruct huart2` in Header(.h) file \
**OR** \
Replace your own functions to send and receive a char in Source(.c) file

7. ENJOY :grin:
