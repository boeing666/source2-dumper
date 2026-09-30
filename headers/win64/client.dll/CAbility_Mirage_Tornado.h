#pragma once

class CAbility_Mirage_Tornado : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1DD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16DC]; // offset 0x0
    GameTime_t m_RecastWindowEnd; // offset 0x16DC, size 0x4, align 255
    char _pad_16E0[0x6E0]; // offset 0x16E0
    QAngle m_anglesCharging; // offset 0x1DC0, size 0xC, align 4
    GameTime_t m_flChargeStartTime; // offset 0x1DCC, size 0x4, align 255
};
