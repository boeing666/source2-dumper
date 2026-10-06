#pragma once

class CCitadel_Modifier_Familiar_CameraDummy : public CCitadelModifier /*0x0*/  // sizeof 0x140, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    bool m_bCamOverrideActive; // offset 0x138, size 0x1, align 1
    char _pad_0139[0x3]; // offset 0x139
    CHandle< C_BaseEntity > m_hDummy; // offset 0x13C, size 0x4, align 4
};
