#pragma once

class CCitadel_Ability_Viscous_Telepunch : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x20A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x2078]; // offset 0x0
    VectorWS m_vecTeleportPosition; // offset 0x2078, size 0xC, align 4
    Vector m_vecTeleportPositionNormal; // offset 0x2084, size 0xC, align 4
    ETelepunchState_t m_eTelepunchState; // offset 0x2090, size 0x1, align 1
    char _pad_2091[0x3]; // offset 0x2091
    GameTime_t m_flNextStateTime; // offset 0x2094, size 0x4, align 255
    char _pad_2098[0x10]; // offset 0x2098
};
