#pragma once

class C_FogController : public C_BaseEntity /*0x0*/  // sizeof 0x7F0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    fogparams_t m_fog; // offset 0x780, size 0x68, align 8 | MNotSaved
    bool m_bUseAngles; // offset 0x7E8, size 0x1, align 1
    char _pad_07E9[0x3]; // offset 0x7E9
    int32 m_iChangedVariables; // offset 0x7EC, size 0x4, align 4
};
