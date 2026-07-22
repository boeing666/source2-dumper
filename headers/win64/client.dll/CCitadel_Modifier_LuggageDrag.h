#pragma once

class CCitadel_Modifier_LuggageDrag : public CCitadelModifier /*0x0*/  // sizeof 0xE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    float32 m_flRelativeDist; // offset 0xC0, size 0x4, align 4
    float32 m_flCartSpeed; // offset 0xC4, size 0x4, align 4
    QAngle m_qRelativeOffset; // offset 0xC8, size 0xC, align 4
    CHandle< C_BaseEntity > m_hDragger; // offset 0xD4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hDummyForCamera; // offset 0xD8, size 0x4, align 4
    char _pad_00DC[0x4]; // offset 0xDC
};
