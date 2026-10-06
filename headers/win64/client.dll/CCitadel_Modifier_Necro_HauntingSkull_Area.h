#pragma once

class CCitadel_Modifier_Necro_HauntingSkull_Area : public CCitadelModifier /*0x0*/  // sizeof 0x578, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecDeployedSkulls; // offset 0x140, size 0x18, align 8
    char _pad_0158[0x420]; // offset 0x158
};
