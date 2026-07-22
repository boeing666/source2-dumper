#pragma once

class CResponseQueue  // sizeof 0x50, align 0xFF (server)
{
public:
    char _pad_0000[0x38]; // offset 0x0
    CUtlVector< CAI_Expresser* > m_ExpresserTargets; // offset 0x38, size 0x18, align 8
};
