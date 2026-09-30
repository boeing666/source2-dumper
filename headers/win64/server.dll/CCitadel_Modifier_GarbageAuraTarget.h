#pragma once

class CCitadel_Modifier_GarbageAuraTarget : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x2E0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x2A8]; // offset 0x0
    float32 m_flMaxDist; // offset 0x2A8, size 0x4, align 4
    Vector m_vecOffsetDir; // offset 0x2AC, size 0xC, align 4
    VectorWS m_vecStartPosition; // offset 0x2B8, size 0xC, align 4
    float32 m_flAOERadius; // offset 0x2C4, size 0x4, align 4
    char _pad_02C8[0x18]; // offset 0x2C8
};
