#pragma once

class CCitadel_Modifier_Familiar_CameraDummy : public CCitadelModifier /*0x0*/  // sizeof 0xC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    bool m_bCamOverrideActive; // offset 0xC0, size 0x1, align 1
    char _pad_00C1[0x3]; // offset 0xC1
    CHandle< C_BaseEntity > m_hDummy; // offset 0xC4, size 0x4, align 4
};
