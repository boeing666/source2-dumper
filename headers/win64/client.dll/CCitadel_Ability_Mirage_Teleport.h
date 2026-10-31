#pragma once

class CCitadel_Ability_Mirage_Teleport : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x19E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16F8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x16F8, size 0x4, align 4
    GameTime_t m_tTeleportCompletedTime; // offset 0x16FC, size 0x4, align 255
    GameTime_t m_tLastLandedTime; // offset 0x1700, size 0x4, align 255
    VectorWS m_vTargetPosition; // offset 0x1704, size 0xC, align 4
    QAngle m_vTargetAngles; // offset 0x1710, size 0xC, align 4
    char _pad_171C[0x2CC]; // offset 0x171C
};
