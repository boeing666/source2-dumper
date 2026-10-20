#pragma once

class CCitadel_Ability_Thumper_2 : public CCitadelBaseAbility /*0x0*/  // sizeof 0x16D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    VectorWS m_vStompPos; // offset 0x14A8, size 0xC, align 4
    Vector m_vStompDir; // offset 0x14B4, size 0xC, align 4
    int32 m_nStomps; // offset 0x14C0, size 0x4, align 4
    char _pad_14C4[0x214]; // offset 0x14C4
};
