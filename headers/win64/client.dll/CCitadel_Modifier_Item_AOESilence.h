#pragma once

class CCitadel_Modifier_Item_AOESilence : public CCitadelModifierAura /*0x0*/  // sizeof 0x120, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x110]; // offset 0x0
    float32 m_flStartRadius; // offset 0x110, size 0x4, align 4
    float32 m_flEndRadius; // offset 0x114, size 0x4, align 4
    float32 m_flSpreadDuration; // offset 0x118, size 0x4, align 4
    char _pad_011C[0x4]; // offset 0x11C
};
