#pragma once

class CCitadel_Modifier_TechCleave : public CCitadelModifier /*0x0*/  // sizeof 0x168, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CUtlVector< CCitadel_Modifier_TechCleave::DamageTaken_t > m_vDamageTakenEvents; // offset 0xD0, size 0x18, align 8
    char _pad_00E8[0x80]; // offset 0xE8
};
