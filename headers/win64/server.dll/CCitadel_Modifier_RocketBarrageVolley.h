#pragma once

class CCitadel_Modifier_RocketBarrageVolley : public CCitadelModifier /*0x0*/  // sizeof 0x678, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    float32 m_flFiringInterval; // offset 0xD0, size 0x4, align 4
    GameTime_t m_flCastTime; // offset 0xD4, size 0x4, align 255
    GameTime_t m_flNextRocketTime; // offset 0xD8, size 0x4, align 255
    int32 m_nGrenadesLeft; // offset 0xDC, size 0x4, align 4
    char _pad_00E0[0x598]; // offset 0xE0
};
