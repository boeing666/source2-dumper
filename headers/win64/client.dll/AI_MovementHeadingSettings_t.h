#pragma once

struct AI_MovementHeadingSettings_t  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults}
{
    AI_MovementHeadingMode_t m_eMode; // offset 0x0, size 0x4, align 4
    bool m_bUseBadZones; // offset 0x4, size 0x1, align 1
    char _pad_0005[0x3]; // offset 0x5
    CUtlVector< AI_MovementHeadingBadZone_t > m_badZones; // offset 0x8, size 0x18, align 8
    float32 m_flPredictionLookAhead; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
};
