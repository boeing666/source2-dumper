#pragma once

class CCitadel_Ability_Bull_Charge : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1FF8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1FC8]; // offset 0x0
    QAngle m_anglesCharging; // offset 0x1FC8, size 0xC, align 4
    GameTime_t m_flChargeStartTime; // offset 0x1FD4, size 0x4, align 255
    GameTime_t m_flFastChargeStartTime; // offset 0x1FD8, size 0x4, align 255
    GameTime_t m_flFastChargeEndTime; // offset 0x1FDC, size 0x4, align 255
    bool m_bHitSomethingStunnable; // offset 0x1FE0, size 0x1, align 1
    char _pad_1FE1[0x3]; // offset 0x1FE1
    bool m_bFirstTick; // offset 0x1FE4, size 0x1, align 1
    char _pad_1FE5[0x3]; // offset 0x1FE5
    Vector m_vGoalDir; // offset 0x1FE8, size 0xC, align 4
    char _pad_1FF4[0x4]; // offset 0x1FF4
};
