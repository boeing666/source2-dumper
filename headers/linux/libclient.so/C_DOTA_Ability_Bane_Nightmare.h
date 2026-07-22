#pragma once

class C_DOTA_Ability_Bane_Nightmare : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    VectorWS m_vEndpoint; // offset 0x824, size 0xC, align 4
    Vector m_vWalkDir; // offset 0x830, size 0xC, align 4
    bool m_bIsAltCastState; // offset 0x83C, size 0x1, align 1
    char _pad_083D[0x3]; // offset 0x83D
};
