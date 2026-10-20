#pragma once

class CCitadel_Ability_Viscous_Telepunch : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x20B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x2080]; // offset 0x0
    VectorWS m_vecTeleportPosition; // offset 0x2080, size 0xC, align 4
    Vector m_vecTeleportPositionNormal; // offset 0x208C, size 0xC, align 4
    ETelepunchState_t m_eTelepunchState; // offset 0x2098, size 0x1, align 1
    char _pad_2099[0x3]; // offset 0x2099
    GameTime_t m_flNextStateTime; // offset 0x209C, size 0x4, align 255
    char _pad_20A0[0x10]; // offset 0x20A0
};
