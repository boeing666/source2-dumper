#pragma once

class CAbility_Mirage_Tornado : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1BA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14AC]; // offset 0x0
    GameTime_t m_RecastWindowEnd; // offset 0x14AC, size 0x4, align 255
    char _pad_14B0[0x6E0]; // offset 0x14B0
    QAngle m_anglesCharging; // offset 0x1B90, size 0xC, align 4
    GameTime_t m_flChargeStartTime; // offset 0x1B9C, size 0x4, align 255
};
