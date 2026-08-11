#pragma once

class CCSPlayer_WaterServices : public CPlayer_WaterServices /*0x0*/  // sizeof 0x80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    GameTime_t m_NextDrownDamageTime; // offset 0x48, size 0x4, align 255
    int32 m_nDrownDmgRate; // offset 0x4C, size 0x4, align 4
    GameTime_t m_AirFinishedTime; // offset 0x50, size 0x4, align 255
    float32 m_flWaterJumpTime; // offset 0x54, size 0x4, align 4
    Vector m_vecWaterJumpVel; // offset 0x58, size 0xC, align 4
    float32 m_flSwimSoundTime; // offset 0x64, size 0x4, align 4
    char _pad_0068[0x18]; // offset 0x68
};
