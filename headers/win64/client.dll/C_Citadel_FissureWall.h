#pragma once

class C_Citadel_FissureWall : public CBaseAnimGraph /*0x0*/  // sizeof 0xDC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    VectorWS m_vStartPos; // offset 0xDA0, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0xDAC, size 0xC, align 4
    GameTime_t m_flStartEmitTime; // offset 0xDB8, size 0x4, align 255
    GameTime_t m_flEndEmitTime; // offset 0xDBC, size 0x4, align 255
    bool m_bSolid; // offset 0xDC0, size 0x1, align 1
    char _pad_0DC1[0x3]; // offset 0xDC1
    int32 m_nTouchCount; // offset 0xDC4, size 0x4, align 4
};
