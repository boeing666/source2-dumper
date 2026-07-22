#pragma once

class CCitadel_CosmeticItem_Snowball : public CCitadel_Item /*0x0*/  // sizeof 0x1468, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1458]; // offset 0x0
    int32 m_nSeasonal2025Level; // offset 0x1458, size 0x4, align 4 | MNetworkEnable
    float32 m_flSeasonal2025LevelFrac; // offset 0x145C, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flNextShotTime; // offset 0x1460, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int32 m_nShotsRemaining; // offset 0x1464, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
};
