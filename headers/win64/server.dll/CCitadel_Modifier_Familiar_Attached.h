#pragma once

class CCitadel_Modifier_Familiar_Attached : public CCitadelModifier /*0x0*/  // sizeof 0x438, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x434]; // offset 0x0
    CHandle< CBaseEntity > m_hAttachedTo; // offset 0x434, size 0x4, align 4
};
