#pragma once

struct PingParticleInfo_t  // sizeof 0x14, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    float32 m_flDuration; // offset 0x0, size 0x4, align 4
    float32 m_flRadius; // offset 0x4, size 0x4, align 4
    float32 m_flVerticalOffset; // offset 0x8, size 0x4, align 4
    float32 m_flBonusVerticalOffsetFromTargetEntity; // offset 0xC, size 0x4, align 4
    bool m_bShowDotaPlusBadge; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
};
