#pragma once

class CCitadel_Modifier_VacuumAuraTarget : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x1E8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1C8]; // offset 0x0
    float32 m_flMaxDist; // offset 0x1C8, size 0x4, align 4
    Vector m_vecOffsetDir; // offset 0x1CC, size 0xC, align 4
    Vector m_vecStartPosition; // offset 0x1D8, size 0xC, align 4
    float32 m_flAOERadius; // offset 0x1E4, size 0x4, align 4
};
