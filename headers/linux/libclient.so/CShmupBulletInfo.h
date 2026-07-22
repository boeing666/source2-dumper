#pragma once

class CShmupBulletInfo  // sizeof 0x50, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    EShmupBulletPattern m_pattern; // offset 0x0, size 0x4, align 4
    int32 m_nCount; // offset 0x4, size 0x4, align 4
    float32 m_flSpeed; // offset 0x8, size 0x4, align 4
    float32 m_flRadius; // offset 0xC, size 0x4, align 4
    float32 m_flRandomTargetingOffsetMin; // offset 0x10, size 0x4, align 4
    float32 m_flRandomTargetingOffsetMax; // offset 0x14, size 0x4, align 4
    int32 m_nBulletsPerWave; // offset 0x18, size 0x4, align 4
    float32 m_flAngleWidth; // offset 0x1C, size 0x4, align 4
    float32 m_flAngleOffset; // offset 0x20, size 0x4, align 4
    float32 m_flSpeedPerBullet; // offset 0x24, size 0x4, align 4
    float32 m_flRadiusPerBullet; // offset 0x28, size 0x4, align 4
    float32 m_flAngleOffsetPerBullet; // offset 0x2C, size 0x4, align 4
    float32 m_flAngleOffsetPerWave; // offset 0x30, size 0x4, align 4
    float32 m_flAngleStaggerPerWave; // offset 0x34, size 0x4, align 4
    float32 m_flAngleSinWaveOffset; // offset 0x38, size 0x4, align 4
    bool m_bSwapColorPerBullet; // offset 0x3C, size 0x1, align 1
    char _pad_003D[0x3]; // offset 0x3D
    float32 m_flInterval; // offset 0x40, size 0x4, align 4
    Vector2D m_vFixedDirection; // offset 0x44, size 0x8, align 4
    bool m_bUseStoredPlayerLocation; // offset 0x4C, size 0x1, align 1
    char _pad_004D[0x3]; // offset 0x4D
};
