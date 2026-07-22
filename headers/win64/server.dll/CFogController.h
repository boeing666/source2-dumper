#pragma once

class CFogController : public CBaseEntity /*0x0*/  // sizeof 0x510, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    fogparams_t m_fog; // offset 0x4A0, size 0x68, align 255 | MNetworkEnable MNotSaved
    bool m_bUseAngles; // offset 0x508, size 0x1, align 1
    char _pad_0509[0x3]; // offset 0x509
    int32 m_iChangedVariables; // offset 0x50C, size 0x4, align 4
};
