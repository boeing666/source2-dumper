#pragma once

class CDOTA_Ability_Bane_Nightmare : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 m_nNightmareSwapCount; // offset 0x580, size 0x4, align 4
    VectorWS m_vEndpoint; // offset 0x584, size 0xC, align 4
    Vector m_vWalkDir; // offset 0x590, size 0xC, align 4
    bool m_bIsAltCastState; // offset 0x59C, size 0x1, align 1
    char _pad_059D[0x3]; // offset 0x59D
};
