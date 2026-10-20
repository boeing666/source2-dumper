#pragma once

class CCitadel_Ability_ProximityRitual : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1BE0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    ECatStatueState_t m_eState; // offset 0x16E0, size 0x1, align 1
    char _pad_16E1[0x3]; // offset 0x16E1
    CHandle< C_BaseEntity > m_hStatue; // offset 0x16E4, size 0x4, align 4
    char _pad_16E8[0x8]; // offset 0x16E8
    VectorWS m_vLaunchPosition; // offset 0x16F0, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x16FC, size 0xC, align 4
    char _pad_1708[0x4D8]; // offset 0x1708
};
