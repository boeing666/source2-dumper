#pragma once

class CCitadel_GrandFinaleStage : public CBaseAnimGraph /*0x0*/  // sizeof 0xE20, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDF8]; // offset 0x0
    VectorWS m_vStartPos; // offset 0xDF8, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0xE04, size 0xC, align 4
    GameTime_t m_flStartEmitTime; // offset 0xE10, size 0x4, align 255
    GameTime_t m_flEndEmitTime; // offset 0xE14, size 0x4, align 255
    int32 m_nTouchCount; // offset 0xE18, size 0x4, align 4
    char _pad_0E1C[0x4]; // offset 0xE1C
};
