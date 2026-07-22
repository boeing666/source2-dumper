#pragma once

class C_FogController : public C_BaseEntity /*0x0*/  // sizeof 0x670, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x600]; // offset 0x0
    fogparams_t m_fog; // offset 0x600, size 0x68, align 8 | MNotSaved
    bool m_bUseAngles; // offset 0x668, size 0x1, align 1
    char _pad_0669[0x3]; // offset 0x669
    int32 m_iChangedVariables; // offset 0x66C, size 0x4, align 4
};
