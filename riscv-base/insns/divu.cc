// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_divu(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_DIVU));
  #include "insns/divu.h"
  return npc;
}

reg_t rv64_divu(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_DIVU));
  #include "insns/divu.h"
  return npc;
}
