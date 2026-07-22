#pragma once

class CDotaSubquestAbilityCastCount : public CDotaSubquestBase /*0x0*/  // sizeof 0x700, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x6F0]; // offset 0x0
    int32 m_sAbilityNameSymbol; // offset 0x6F0, size 0x4, align 4
    int32 m_nTargetCastCount; // offset 0x6F4, size 0x4, align 4
    int32 m_nCurrentCastCount; // offset 0x6F8, size 0x4, align 4
    bool m_bRequiresChannelSuccess; // offset 0x6FC, size 0x1, align 1
    char _pad_06FD[0x3]; // offset 0x6FD
};
