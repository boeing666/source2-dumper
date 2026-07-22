#pragma once

class CCitadel_FissureWall : public CBaseAnimGraph /*0x0*/  // sizeof 0xAC0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    Vector m_vStartPos; // offset 0xA90, size 0xC, align 4
    Vector m_vEndPos; // offset 0xA9C, size 0xC, align 4
    GameTime_t m_flStartEmitTime; // offset 0xAA8, size 0x4, align 255
    GameTime_t m_flEndEmitTime; // offset 0xAAC, size 0x4, align 255
    bool m_bSolid; // offset 0xAB0, size 0x1, align 1
    char _pad_0AB1[0x3]; // offset 0xAB1
    int32 m_nTouchCount; // offset 0xAB4, size 0x4, align 4
    char _pad_0AB8[0x8]; // offset 0xAB8
};
