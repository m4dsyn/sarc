#ifndef _SARC_CONFIG_HPP
#define _SARC_CONFIG_HPP

#include <stdio.h>
#include "define.hpp"
#include <map>

#define DECLCMD(name,opcode) commands [opcode] = name;



namespace opc {

std::map <str, byte> commands; // name and opcode



const int eof = 0;

const int mov    = 1, //2
          add    = 2, //2
          sub    = 3, //2
          mul    = 4, //2
          div    = 5, //2
          imul   = 6, //2
          idiv   = 7, //2
          inc    = 8, //1
          dec    = 9, //1
          cmp    = 10,//2
          jmp    = 11,//1
          jz     = 12,//2  val, pos
          jnz    = 13,//2
          jg     = 14,//1  only pos
          jge    = 15,//1
          jl     = 16,//1
          jle    = 17,//1
          neg    = 18,//1
          not    = 19,//1
          shl    = 20,//1
          shr    = 21,//1
          xor    = 22,//2
          or     = 23,//2
          and    = 24,//2
          push   = 25,//1
          pop    = 26,//1
          pusha  = 27,//0
          popa   = 28,//0
          xchg   = 29,//2
}



#endif // _SARC_CONFIG_HPP
