#pragma once

class CCitadel_Ability_VampireBat_BatSwarm : public CCitadelBaseAbility /*0x0*/  // sizeof 0x23F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    int32 m_iBonusBats; // offset 0x14A8, size 0x4, align 4
    int32 m_iBatCountOnCast; // offset 0x14AC, size 0x4, align 4
    float32 m_flChannelTime; // offset 0x14B0, size 0x4, align 4
    bool m_bPauseChannel; // offset 0x14B4, size 0x1, align 1
    char _pad_14B5[0x3]; // offset 0x14B5
    float32 m_flLastRemainingChannelTime; // offset 0x14B8, size 0x4, align 4
    char _pad_14BC[0xC]; // offset 0x14BC
    GameTime_t m_flNextBatTime; // offset 0x14C8, size 0x4, align 255
    char _pad_14CC[0xF2C]; // offset 0x14CC
};
