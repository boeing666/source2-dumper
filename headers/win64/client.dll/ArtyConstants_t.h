#pragma once

struct ArtyConstants_t  // sizeof 0x34, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MVDataRoot}
{
    float32 m_flWindAccel; // offset 0x0, size 0x4, align 4
    float32 m_flG0; // offset 0x4, size 0x4, align 4
    float32 m_flDragCoeff; // offset 0x8, size 0x4, align 4
    bool m_bPuzzle; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
    float32 m_flMinVelocityForFallDamage; // offset 0x10, size 0x4, align 4
    float32 m_flFallDamageMult; // offset 0x14, size 0x4, align 4
    float32 m_flMinAirTimeForDamage; // offset 0x18, size 0x4, align 4
    bool m_bRefillAmmoEachLevel; // offset 0x1C, size 0x1, align 1
    char _pad_001D[0x3]; // offset 0x1D
    float32 m_flMaxClimbHeight; // offset 0x20, size 0x4, align 4
    bool m_bShowPathProjection; // offset 0x24, size 0x1, align 1
    bool m_bShowTrails; // offset 0x25, size 0x1, align 1
    bool m_bClearOldTrailsOnFire; // offset 0x26, size 0x1, align 1
    char _pad_0027[0x1]; // offset 0x27
    float32 m_flTrailLingerSeconds; // offset 0x28, size 0x4, align 4
    float32 m_flVelocityPerChargeSecond; // offset 0x2C, size 0x4, align 4
    float32 m_flMinimumGameObjectY; // offset 0x30, size 0x4, align 4
};
