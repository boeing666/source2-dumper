#pragma once

class CFogController : public CBaseEntity /*0x0*/  // sizeof 0x7E8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x778]; // offset 0x0
    fogparams_t m_fog; // offset 0x778, size 0x68, align 8 | MNotSaved
    bool m_bUseAngles; // offset 0x7E0, size 0x1, align 1
    char _pad_07E1[0x3]; // offset 0x7E1
    int32 m_iChangedVariables; // offset 0x7E4, size 0x4, align 4
};
