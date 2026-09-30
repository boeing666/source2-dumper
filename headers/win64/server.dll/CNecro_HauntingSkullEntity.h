#pragma once

class CNecro_HauntingSkullEntity : public CBaseModelEntity /*0x0*/  // sizeof 0xB80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB78]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0xB78, size 0x4, align 4
    int32 m_eSkullState; // offset 0xB7C, size 0x4, align 4
};
