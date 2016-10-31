#ifndef _SARC_CONFIG_HPP
#define _SARC_CONFIG_HPP

#include <stdio.h>
#include "define.hpp"
#include <map>

#define DECLCMD(name,opcode) commands [opcode] = name;

const size_t memory_size = 16384;
const size_t reg_size = 8;

namespace opc {

std::map <str, byte> commands; // name and opcode



const int eof = 0;

const int mov    = 1,
          add    = 2
          sub    = 3,
          mul    = 4,
          div    = 5,
          imul   = 6,
          idiv   = 7,
          inc    = 8,
          dec    = 9,
          cmp    = 10,
          jmp    = 11,
          jz     = 12,
          jnz    = 13,
          jg     = 14,
          jge    = 15,
          jl     = 16,
          jle    = 17,
          neg    = 18,
          not    = 19,
          shl    = 20,
          shr    = 21,
          xor    = 22,
          or     = 23,
          and    = 24,
          push   = 25,
          pop    = 26,
          pusha  = 27,
          popa   = 28,
          xchg   = 29;


}



#endif // _SARC_CONFIG_HPP
