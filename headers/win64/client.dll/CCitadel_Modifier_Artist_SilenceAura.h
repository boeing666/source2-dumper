#pragma once

class CCitadel_Modifier_Artist_SilenceAura : public CCitadelModifierAura /*0x0*/  // sizeof 0x3B0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x194]; // offset 0x0
    CHandle< C_Citadel_Artist_VisionBlocker > m_hBlocker; // offset 0x194, size 0x4, align 4
    char _pad_0198[0x218]; // offset 0x198
};
