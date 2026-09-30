#pragma once

class CCitadel_Ability_Familiar_Spotlight : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x17A0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1790]; // offset 0x0
    CHandle< C_BaseEntity > m_hWasAttachedTo; // offset 0x1790, size 0x4, align 4
    VectorWS m_vAuraPosition; // offset 0x1794, size 0xC, align 4
};
