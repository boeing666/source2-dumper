#pragma once

class CDotaSubquestAbilityCastCount : public CDotaSubquestBase /*0x0*/  // sizeof 0x9E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9CC]; // offset 0x0
    int32 m_sAbilityNameSymbol; // offset 0x9CC, size 0x4, align 4
    int32 m_nTargetCastCount; // offset 0x9D0, size 0x4, align 4
    int32 m_nCurrentCastCount; // offset 0x9D4, size 0x4, align 4
    bool m_bRequiresChannelSuccess; // offset 0x9D8, size 0x1, align 1
    char _pad_09D9[0x7]; // offset 0x9D9
};
