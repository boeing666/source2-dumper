#pragma once

class CCitadel_Modifier_Artist_SilenceAura : public CCitadelModifierAura /*0x0*/  // sizeof 0x3A0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x184]; // offset 0x0
    CHandle< CCitadel_Artist_VisionBlocker > m_hBlocker; // offset 0x184, size 0x4, align 4
    char _pad_0188[0x218]; // offset 0x188
};
