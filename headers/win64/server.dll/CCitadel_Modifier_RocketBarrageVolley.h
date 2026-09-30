#pragma once

class CCitadel_Modifier_RocketBarrageVolley : public CCitadelModifier /*0x0*/  // sizeof 0x8F8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    float32 m_flFiringInterval; // offset 0x140, size 0x4, align 4
    GameTime_t m_flCastTime; // offset 0x144, size 0x4, align 255
    GameTime_t m_flNextRocketTime; // offset 0x148, size 0x4, align 255
    int32 m_nGrenadesLeft; // offset 0x14C, size 0x4, align 4
    char _pad_0150[0x7A8]; // offset 0x150
};
