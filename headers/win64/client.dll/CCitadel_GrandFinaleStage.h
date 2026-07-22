#pragma once

class CCitadel_GrandFinaleStage : public CBaseAnimGraph /*0x0*/  // sizeof 0xCD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    Vector m_vStartPos; // offset 0xCA8, size 0xC, align 4
    Vector m_vEndPos; // offset 0xCB4, size 0xC, align 4
    GameTime_t m_flStartEmitTime; // offset 0xCC0, size 0x4, align 255
    GameTime_t m_flEndEmitTime; // offset 0xCC4, size 0x4, align 255
    int32 m_nTouchCount; // offset 0xCC8, size 0x4, align 4
    char _pad_0CCC[0x4]; // offset 0xCCC
};
