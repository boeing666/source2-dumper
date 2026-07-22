#pragma once

class CFogController : public CBaseEntity /*0x0*/  // sizeof 0x508, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x498]; // offset 0x0
    fogparams_t m_fog; // offset 0x498, size 0x68, align 8 | MNotSaved
    bool m_bUseAngles; // offset 0x500, size 0x1, align 1
    char _pad_0501[0x3]; // offset 0x501
    int32 m_iChangedVariables; // offset 0x504, size 0x4, align 4
};
