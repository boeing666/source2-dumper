#pragma once

class CCitadel_Modifier_Artist_Wall : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CHandle< C_Citadel_Artist_SolidBlocker > m_hBlocker; // offset 0x140, size 0x4, align 4
    char _pad_0144[0x4]; // offset 0x144
};
