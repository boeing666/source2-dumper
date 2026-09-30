#pragma once

class CFogController : public CBaseEntity /*0x0*/  // sizeof 0x520, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    fogparams_t m_fog; // offset 0x4B0, size 0x68, align 8 | MNotSaved
    bool m_bUseAngles; // offset 0x518, size 0x1, align 1
    char _pad_0519[0x3]; // offset 0x519
    int32 m_iChangedVariables; // offset 0x51C, size 0x4, align 4
};
