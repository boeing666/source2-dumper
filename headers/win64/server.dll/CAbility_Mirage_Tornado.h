#pragma once

class CAbility_Mirage_Tornado : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1B98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A4]; // offset 0x0
    GameTime_t m_RecastWindowEnd; // offset 0x14A4, size 0x4, align 255
    char _pad_14A8[0x6E0]; // offset 0x14A8
    QAngle m_anglesCharging; // offset 0x1B88, size 0xC, align 4
    GameTime_t m_flChargeStartTime; // offset 0x1B94, size 0x4, align 255
};
