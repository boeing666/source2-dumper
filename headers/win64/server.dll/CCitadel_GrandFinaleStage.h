#pragma once

class CCitadel_GrandFinaleStage : public CBaseAnimGraph /*0x0*/  // sizeof 0xAC0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    Vector m_vStartPos; // offset 0xA90, size 0xC, align 4
    Vector m_vEndPos; // offset 0xA9C, size 0xC, align 4
    GameTime_t m_flStartEmitTime; // offset 0xAA8, size 0x4, align 255
    GameTime_t m_flEndEmitTime; // offset 0xAAC, size 0x4, align 255
    int32 m_nTouchCount; // offset 0xAB0, size 0x4, align 4
    char _pad_0AB4[0xC]; // offset 0xAB4
};
