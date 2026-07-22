#pragma once

class CDOTA_Ability_Bane_Nightmare : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 m_nNightmareSwapCount; // offset 0x85C, size 0x4, align 4
    VectorWS m_vEndpoint; // offset 0x860, size 0xC, align 4
    Vector m_vWalkDir; // offset 0x86C, size 0xC, align 4
    bool m_bIsAltCastState; // offset 0x878, size 0x1, align 1
    char _pad_0879[0x7]; // offset 0x879
};
