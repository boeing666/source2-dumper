#pragma once

class CCitadel_Modifier_Necro_HauntingSkull_Area : public CCitadelModifier /*0x0*/  // sizeof 0x3E0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecDeployedSkulls; // offset 0xC8, size 0x18, align 8
    char _pad_00E0[0x300]; // offset 0xE0
};
