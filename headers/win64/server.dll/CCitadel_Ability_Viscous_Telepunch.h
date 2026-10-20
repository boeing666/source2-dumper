#pragma once

class CCitadel_Ability_Viscous_Telepunch : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1E78, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1E48]; // offset 0x0
    VectorWS m_vecTeleportPosition; // offset 0x1E48, size 0xC, align 4
    Vector m_vecTeleportPositionNormal; // offset 0x1E54, size 0xC, align 4
    ETelepunchState_t m_eTelepunchState; // offset 0x1E60, size 0x1, align 1
    char _pad_1E61[0x3]; // offset 0x1E61
    GameTime_t m_flNextStateTime; // offset 0x1E64, size 0x4, align 255
    char _pad_1E68[0x10]; // offset 0x1E68
};
