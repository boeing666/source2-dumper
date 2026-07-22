#pragma once

class C_EnvWindShared  // sizeof 0xF8, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0x8, size 0x4, align 255 | MNetworkEnable MNotSaved
    uint32 m_iWindSeed; // offset 0xC, size 0x4, align 4 | MNetworkEnable MNotSaved
    uint16 m_iMinWind; // offset 0x10, size 0x2, align 2 | MNetworkEnable
    uint16 m_iMaxWind; // offset 0x12, size 0x2, align 2 | MNetworkEnable
    int32 m_windRadius; // offset 0x14, size 0x4, align 4 | MNetworkEnable
    uint16 m_iMinGust; // offset 0x18, size 0x2, align 2 | MNetworkEnable
    uint16 m_iMaxGust; // offset 0x1A, size 0x2, align 2 | MNetworkEnable
    float32 m_flMinGustDelay; // offset 0x1C, size 0x4, align 4 | MNetworkEnable
    float32 m_flMaxGustDelay; // offset 0x20, size 0x4, align 4 | MNetworkEnable
    float32 m_flGustDuration; // offset 0x24, size 0x4, align 4 | MNetworkEnable
    uint16 m_iGustDirChange; // offset 0x28, size 0x2, align 2 | MNetworkEnable
    uint16 m_iInitialWindDir; // offset 0x2A, size 0x2, align 2 | MNetworkEnable MNotSaved
    float32 m_flInitialWindSpeed; // offset 0x2C, size 0x4, align 4 | MNetworkEnable MNotSaved
    VectorWS m_location; // offset 0x30, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNotSaved
    CHandle< C_BaseEntity > m_hEntOwner; // offset 0x3C, size 0x4, align 4 | MNotSaved
    char _pad_0040[0xB8]; // offset 0x40
};
