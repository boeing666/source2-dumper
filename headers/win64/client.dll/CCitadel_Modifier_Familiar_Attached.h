#pragma once

class CCitadel_Modifier_Familiar_Attached : public CCitadelModifier /*0x0*/  // sizeof 0x2E8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x2E4]; // offset 0x0
    CHandle< C_BaseEntity > m_hAttachedTo; // offset 0x2E4, size 0x4, align 4
};
