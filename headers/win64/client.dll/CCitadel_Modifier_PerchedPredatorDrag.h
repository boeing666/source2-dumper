#pragma once

class CCitadel_Modifier_PerchedPredatorDrag : public CCitadelModifier /*0x0*/  // sizeof 0x2B8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x298]; // offset 0x0
    QAngle m_qRelativeOffset; // offset 0x298, size 0xC, align 4
    float32 m_flRelativeDist; // offset 0x2A4, size 0x4, align 4
    Vector m_vecOffsetDir; // offset 0x2A8, size 0xC, align 4
    CHandle< C_BaseEntity > m_hFollowEnt; // offset 0x2B4, size 0x4, align 4
};
