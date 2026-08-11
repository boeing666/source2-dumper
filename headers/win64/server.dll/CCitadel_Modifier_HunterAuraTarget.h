#pragma once

class CCitadel_Modifier_HunterAuraTarget : public CCitadelModifier /*0x0*/  // sizeof 0x270, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x250]; // offset 0x0
    float32 m_flDebuffScale; // offset 0x250, size 0x4, align 4
    char _pad_0254[0x4]; // offset 0x254
    CModifierHandleTyped< CCitadelModifier > m_AuraModifierHandle; // offset 0x258, size 0x18, align 8
};
