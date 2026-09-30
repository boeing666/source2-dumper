#pragma once

class CCitadel_Modifier_PerchedPredatorDrag : public CCitadelModifier /*0x0*/  // sizeof 0x2B0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x290]; // offset 0x0
    QAngle m_qRelativeOffset; // offset 0x290, size 0xC, align 4
    float32 m_flRelativeDist; // offset 0x29C, size 0x4, align 4
    Vector m_vecOffsetDir; // offset 0x2A0, size 0xC, align 4
    CHandle< C_BaseEntity > m_hFollowEnt; // offset 0x2AC, size 0x4, align 4
};
