#ifndef INSTRUCTIONENCODER_H
#define INSTRUCTIONENCODER_H

#include "cpu/instructionformat.h"

class InstructionEncoder
{
public:
    InstructionEncoder();
    static void encode(const InstructionLowLevelFormat& lowFormat,
                       u8 inst[],u8& instLength);
    static void writeImmToInst(DataSize size,Immediate imm,u8 inst[],u8& instLength);
    static void writeDispToInst(DataSize size,Displacement disp,u8 inst[],u8& instLength);
};

#endif // INSTRUCTIONENCODER_H