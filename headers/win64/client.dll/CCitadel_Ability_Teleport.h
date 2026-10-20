#pragma once

class CCitadel_Ability_Teleport : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1708, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    bool m_bTeleportingToTarget; // offset 0x16E0, size 0x1, align 1
    char _pad_16E1[0x3]; // offset 0x16E1
    VectorWS m_vTargetPosition; // offset 0x16E4, size 0xC, align 4
    QAngle m_vTargetAngles; // offset 0x16F0, size 0xC, align 4
    char _pad_16FC[0xC]; // offset 0x16FC
};
