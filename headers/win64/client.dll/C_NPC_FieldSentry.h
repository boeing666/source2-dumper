#pragma once

class C_NPC_FieldSentry : public C_NPC_SimpleAnimatingAI /*0x0*/  // sizeof 0xCC8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCBC]; // offset 0x0
    float32 m_flAttackRange; // offset 0xCBC, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flAimPitch; // offset 0xCC0, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_0CC4[0x4]; // offset 0xCC4
};
