#pragma once

class CCitadel_Modifier_Necro_HauntingSkull_Area : public CCitadelModifier /*0x0*/  // sizeof 0x570, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecDeployedSkulls; // offset 0x138, size 0x18, align 8
    char _pad_0150[0x420]; // offset 0x150
};
