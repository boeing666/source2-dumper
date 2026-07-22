#pragma once

class C_Citadel_FissureWall : public CBaseAnimGraph /*0x0*/  // sizeof 0xCD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    Vector m_vStartPos; // offset 0xCA8, size 0xC, align 4
    Vector m_vEndPos; // offset 0xCB4, size 0xC, align 4
    GameTime_t m_flStartEmitTime; // offset 0xCC0, size 0x4, align 255
    GameTime_t m_flEndEmitTime; // offset 0xCC4, size 0x4, align 255
    bool m_bSolid; // offset 0xCC8, size 0x1, align 1
    char _pad_0CC9[0x3]; // offset 0xCC9
    int32 m_nTouchCount; // offset 0xCCC, size 0x4, align 4
};
