#pragma once

class CCitadel_Modifier_PerchedPredatorDrag : public CCitadelModifier /*0x0*/  // sizeof 0x1F0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    QAngle m_qRelativeOffset; // offset 0x1D0, size 0xC, align 4
    float32 m_flRelativeDist; // offset 0x1DC, size 0x4, align 4
    Vector m_vecOffsetDir; // offset 0x1E0, size 0xC, align 4
    CHandle< CBaseEntity > m_hFollowEnt; // offset 0x1EC, size 0x4, align 4
};
