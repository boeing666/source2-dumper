#pragma once

class C_AI_Motor : public CAI_Component /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    StanceType_t m_nCurrentStance; // offset 0x50, size 0x4, align 4 | MNetworkEnable
    char _pad_0054[0x4]; // offset 0x54
};
