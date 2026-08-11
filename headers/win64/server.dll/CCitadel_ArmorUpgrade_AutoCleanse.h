#pragma once

class CCitadel_ArmorUpgrade_AutoCleanse : public CCitadel_Item /*0x0*/  // sizeof 0x1088, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    CUtlStringToken m_nAbilityBlocking; // offset 0xF78, size 0x4, align 4
    GameTime_t m_nAbilityBlockTime; // offset 0xF7C, size 0x4, align 255
    CHandle< CBaseEntity > m_hModifierCaster; // offset 0xF80, size 0x4, align 4
    char _pad_0F84[0x104]; // offset 0xF84
};
