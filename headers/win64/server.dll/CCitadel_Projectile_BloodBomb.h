#pragma once

class CCitadel_Projectile_BloodBomb : public CCitadelProjectile /*0x0*/  // sizeof 0x998, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x968]; // offset 0x0
    bool m_bSecondBomb; // offset 0x968, size 0x1, align 1
    char _pad_0969[0x3]; // offset 0x969
    int32 m_nBeepSoundBuildupCount; // offset 0x96C, size 0x4, align 4
    float32 m_flBeepSoundIntervalBias; // offset 0x970, size 0x4, align 4
    float32 m_flBeepSoundMaxFrequency; // offset 0x974, size 0x4, align 4
    float32 m_flArmingDuration; // offset 0x978, size 0x4, align 4
    char _pad_097C[0x4]; // offset 0x97C
    CUtlVector< float32 > m_vecBeepIntervals; // offset 0x980, size 0x18, align 8
};
