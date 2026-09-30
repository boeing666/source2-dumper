#pragma once

class CCitadel_Ability_Viscous_Telepunch : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1E70, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1E40]; // offset 0x0
    VectorWS m_vecTeleportPosition; // offset 0x1E40, size 0xC, align 4
    Vector m_vecTeleportPositionNormal; // offset 0x1E4C, size 0xC, align 4
    ETelepunchState_t m_eTelepunchState; // offset 0x1E58, size 0x1, align 1
    char _pad_1E59[0x3]; // offset 0x1E59
    GameTime_t m_flNextStateTime; // offset 0x1E5C, size 0x4, align 255
    char _pad_1E60[0x10]; // offset 0x1E60
};
