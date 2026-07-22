#pragma once

class CFogController : public CBaseEntity /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x788]; // offset 0x0
    fogparams_t m_fog; // offset 0x788, size 0x68, align 8 | MNotSaved
    bool m_bUseAngles; // offset 0x7F0, size 0x1, align 1
    char _pad_07F1[0x3]; // offset 0x7F1
    int32 m_iChangedVariables; // offset 0x7F4, size 0x4, align 4
};
