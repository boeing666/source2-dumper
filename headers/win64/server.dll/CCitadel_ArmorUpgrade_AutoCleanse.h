#pragma once

class CCitadel_ArmorUpgrade_AutoCleanse : public CCitadel_Item /*0x0*/  // sizeof 0x1620, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CUtlStringToken m_nAbilityBlocking; // offset 0x14B0, size 0x4, align 4
    GameTime_t m_nAbilityBlockTime; // offset 0x14B4, size 0x4, align 255
    CHandle< CBaseEntity > m_hModifierCaster; // offset 0x14B8, size 0x4, align 4
    char _pad_14BC[0x164]; // offset 0x14BC
};
