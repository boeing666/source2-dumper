#pragma once

class CAbility_Mirage_Tornado : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1408, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF74]; // offset 0x0
    GameTime_t m_RecastWindowEnd; // offset 0xF74, size 0x4, align 255
    char _pad_0F78[0x480]; // offset 0xF78
    QAngle m_anglesCharging; // offset 0x13F8, size 0xC, align 4 | MNetworkEnable
    GameTime_t m_flChargeStartTime; // offset 0x1404, size 0x4, align 255 | MNetworkEnable MNetworkChangeCallback
};
