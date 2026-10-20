#pragma once

class CCitadel_WeaponUpgrade_Ricochet : public CCitadel_Item /*0x0*/  // sizeof 0x14C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CModifierHandleTyped< CCitadel_Modifier_Ricochet_ > m_hRicochetModifier; // offset 0x14B0, size 0x18, align 8
};
