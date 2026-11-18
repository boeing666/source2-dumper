#pragma once

class C_DOTA_Ability_Bane_Nightmare : public C_DOTABaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    VectorWS m_vEndpoint; // offset 0x828, size 0xC, align 4
    Vector m_vWalkDir; // offset 0x834, size 0xC, align 4
    bool m_bIsAltCastState; // offset 0x840, size 0x1, align 1
    char _pad_0841[0x7]; // offset 0x841
};
