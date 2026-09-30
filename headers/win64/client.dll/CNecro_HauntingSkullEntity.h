#pragma once

class CNecro_HauntingSkullEntity : public C_BaseModelEntity /*0x0*/  // sizeof 0xBC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB4]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0xBB4, size 0x4, align 4
    int32 m_eSkullState; // offset 0xBB8, size 0x4, align 4
    char _pad_0BBC[0x4]; // offset 0xBBC
};
