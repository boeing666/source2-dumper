#pragma once

class CCitadel_Ability_Familiar_Spotlight : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x17A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1798]; // offset 0x0
    CHandle< C_BaseEntity > m_hWasAttachedTo; // offset 0x1798, size 0x4, align 4
    VectorWS m_vAuraPosition; // offset 0x179C, size 0xC, align 4
};
