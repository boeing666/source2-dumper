#pragma once

class CCitadel_Modifier_VacuumAuraTarget : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x210, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    float32 m_flMaxDist; // offset 0x1D8, size 0x4, align 4
    Vector m_vecOffsetDir; // offset 0x1DC, size 0xC, align 4
    Vector m_vecStartPosition; // offset 0x1E8, size 0xC, align 4
    float32 m_flAOERadius; // offset 0x1F4, size 0x4, align 4
    char _pad_01F8[0x18]; // offset 0x1F8
};
