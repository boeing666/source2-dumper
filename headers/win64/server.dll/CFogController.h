#pragma once

class CFogController : public CBaseEntity /*0x0*/  // sizeof 0x518, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    fogparams_t m_fog; // offset 0x4A8, size 0x68, align 8 | MNotSaved
    bool m_bUseAngles; // offset 0x510, size 0x1, align 1
    char _pad_0511[0x3]; // offset 0x511
    int32 m_iChangedVariables; // offset 0x514, size 0x4, align 4
};
