#pragma once

class CCitadel_Ability_Teleport : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1700, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    bool m_bTeleportingToTarget; // offset 0x16D8, size 0x1, align 1
    char _pad_16D9[0x3]; // offset 0x16D9
    VectorWS m_vTargetPosition; // offset 0x16DC, size 0xC, align 4
    QAngle m_vTargetAngles; // offset 0x16E8, size 0xC, align 4
    char _pad_16F4[0xC]; // offset 0x16F4
};
