#pragma once

class CAbility_Mirage_Tornado : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1DE0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E4]; // offset 0x0
    GameTime_t m_RecastWindowEnd; // offset 0x16E4, size 0x4, align 255
    GameTime_t m_FirstCastTime; // offset 0x16E8, size 0x4, align 255
    char _pad_16EC[0x6E4]; // offset 0x16EC
    QAngle m_anglesCharging; // offset 0x1DD0, size 0xC, align 4
    GameTime_t m_flChargeStartTime; // offset 0x1DDC, size 0x4, align 255
};
