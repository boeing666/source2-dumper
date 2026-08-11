#pragma once

class CCitadel_Ability_Thumper_2 : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1110, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    Vector m_vStompPos; // offset 0xF70, size 0xC, align 4
    Vector m_vStompDir; // offset 0xF7C, size 0xC, align 4
    int32 m_nStomps; // offset 0xF88, size 0x4, align 4
    char _pad_0F8C[0x184]; // offset 0xF8C
};
