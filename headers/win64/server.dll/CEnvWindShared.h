#pragma once

class CEnvWindShared  // sizeof 0x130, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0x8, size 0x4, align 255 | MNotSaved
    uint32 m_iWindSeed; // offset 0xC, size 0x4, align 4 | MNotSaved
    uint16 m_iMinWind; // offset 0x10, size 0x2, align 2
    uint16 m_iMaxWind; // offset 0x12, size 0x2, align 2
    int32 m_windRadius; // offset 0x14, size 0x4, align 4
    uint16 m_iMinGust; // offset 0x18, size 0x2, align 2
    uint16 m_iMaxGust; // offset 0x1A, size 0x2, align 2
    float32 m_flMinGustDelay; // offset 0x1C, size 0x4, align 4
    float32 m_flMaxGustDelay; // offset 0x20, size 0x4, align 4
    float32 m_flGustDuration; // offset 0x24, size 0x4, align 4
    uint16 m_iGustDirChange; // offset 0x28, size 0x2, align 2
    uint16 m_iInitialWindDir; // offset 0x2A, size 0x2, align 2 | MNotSaved
    float32 m_flInitialWindSpeed; // offset 0x2C, size 0x4, align 4 | MNotSaved
    VectorWS m_location; // offset 0x30, size 0xC, align 4 | MNotSaved
    char _pad_003C[0x4]; // offset 0x3C
    CEntityIOOutput m_OnGustStart; // offset 0x40, size 0x18, align 255
    CEntityIOOutput m_OnGustEnd; // offset 0x58, size 0x18, align 255
    CHandle< CBaseEntity > m_hEntOwner; // offset 0x70, size 0x4, align 4 | MNotSaved
    char _pad_0074[0xBC]; // offset 0x74
};
