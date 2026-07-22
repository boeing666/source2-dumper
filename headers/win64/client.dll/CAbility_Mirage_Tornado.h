#pragma once

class CAbility_Mirage_Tornado : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1670, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11DC]; // offset 0x0
    GameTime_t m_RecastWindowEnd; // offset 0x11DC, size 0x4, align 255
    char _pad_11E0[0x480]; // offset 0x11E0
    QAngle m_anglesCharging; // offset 0x1660, size 0xC, align 4 | MNetworkEnable
    GameTime_t m_flChargeStartTime; // offset 0x166C, size 0x4, align 255 | MNetworkEnable MNetworkChangeCallback
};
