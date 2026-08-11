#pragma once

class CCitadel_CosmeticItem_Snowball : public CCitadel_Item /*0x0*/  // sizeof 0x1208, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11F8]; // offset 0x0
    int32 m_nSeasonal2025Level; // offset 0x11F8, size 0x4, align 4 | MNetworkEnable
    float32 m_flSeasonal2025LevelFrac; // offset 0x11FC, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flNextShotTime; // offset 0x1200, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int32 m_nShotsRemaining; // offset 0x1204, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
};
