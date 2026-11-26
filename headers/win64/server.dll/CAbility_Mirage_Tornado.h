#pragma once

class CAbility_Mirage_Tornado : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1BA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14AC]; // offset 0x0
    GameTime_t m_RecastWindowEnd; // offset 0x14AC, size 0x4, align 255
    GameTime_t m_FirstCastTime; // offset 0x14B0, size 0x4, align 255
    char _pad_14B4[0x6E4]; // offset 0x14B4
    QAngle m_anglesCharging; // offset 0x1B98, size 0xC, align 4
    GameTime_t m_flChargeStartTime; // offset 0x1BA4, size 0x4, align 255
};
