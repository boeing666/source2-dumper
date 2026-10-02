#pragma once

class CCitadel_FissureWall : public CBaseAnimGraph /*0x0*/  // sizeof 0xB10, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    VectorWS m_vStartPos; // offset 0xAE0, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0xAEC, size 0xC, align 4
    GameTime_t m_flStartEmitTime; // offset 0xAF8, size 0x4, align 255
    GameTime_t m_flEndEmitTime; // offset 0xAFC, size 0x4, align 255
    bool m_bSolid; // offset 0xB00, size 0x1, align 1
    char _pad_0B01[0x3]; // offset 0xB01
    int32 m_nTouchCount; // offset 0xB04, size 0x4, align 4
    char _pad_0B08[0x8]; // offset 0xB08
};
