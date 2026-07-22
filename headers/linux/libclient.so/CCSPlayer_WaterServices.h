#pragma once

class CCSPlayer_WaterServices : public CPlayer_WaterServices /*0x0*/  // sizeof 0x70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    float32 m_flWaterJumpTime; // offset 0x48, size 0x4, align 4
    Vector m_vecWaterJumpVel; // offset 0x4C, size 0xC, align 4
    float32 m_flSwimSoundTime; // offset 0x58, size 0x4, align 4
    char _pad_005C[0x14]; // offset 0x5C
};
