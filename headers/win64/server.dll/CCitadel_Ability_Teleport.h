#pragma once

class CCitadel_Ability_Teleport : public CCitadelBaseAbility /*0x0*/  // sizeof 0x14C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    bool m_bTeleportingToTarget; // offset 0x14A0, size 0x1, align 1
    char _pad_14A1[0x3]; // offset 0x14A1
    VectorWS m_vTargetPosition; // offset 0x14A4, size 0xC, align 4
    QAngle m_vTargetAngles; // offset 0x14B0, size 0xC, align 4
    char _pad_14BC[0xC]; // offset 0x14BC
};
