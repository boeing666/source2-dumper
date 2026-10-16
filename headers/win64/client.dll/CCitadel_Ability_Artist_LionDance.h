#pragma once

class CCitadel_Ability_Artist_LionDance : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x19C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16DC]; // offset 0x0
    GameTime_t m_tEndTime; // offset 0x16DC, size 0x4, align 255
    GameTime_t m_tNextPulseTime; // offset 0x16E0, size 0x4, align 255
    bool m_bActive; // offset 0x16E4, size 0x1, align 1
    char _pad_16E5[0x3]; // offset 0x16E5
    int32 m_iRemainingShots; // offset 0x16E8, size 0x4, align 4
    VectorWS m_vLaunchPosition; // offset 0x16EC, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x16F8, size 0xC, align 4
    CHandle< C_BaseEntity > m_pPointModifier; // offset 0x1704, size 0x4, align 4
    char _pad_1708[0x2C0]; // offset 0x1708
};
