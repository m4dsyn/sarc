#ifndef _SARC_PROC_CORE_HPP
#define _SARC_PROC_CORE_HPP
#include "define.hpp"
#include <stdint.h>

byte *memory = new byte [MEMORY_SIZE];

int32_t ereg [REG_SIZE] = {};
int64_t rreg [REG_SIZE] = {};



const int EAX = 0,
          EBX = 1,
          ECX = 2,
          EDX = 3,
          ESP = 4,
          EIP = 5,
          ESI = 6,
          EDI = 7;

const int RAX = 0,
          RBX = 1,
          RCX = 2,
          RDX = 3,
          // RSP = 4,
          RIP = 5,
          RSI = 6,
          RDI = 7;








#endif // _SARC_PROC_CORE_HPP
