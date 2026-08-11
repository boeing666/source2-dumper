#pragma once

class CCitadel_WeaponUpgrade_ApexCombat : public CCitadel_Item /*0x0*/  // sizeof 0xF90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    CModifierHandleTyped< CCitadel_Modifier_ApexCombat_Proc > m_hRicochetModifier; // offset 0xF78, size 0x18, align 8
};
