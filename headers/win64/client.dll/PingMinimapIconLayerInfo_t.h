#pragma once

struct PingMinimapIconLayerInfo_t  // sizeof 0x28, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    int32 m_nIconID; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    float32 m_flSizeScale; // offset 0x4, size 0x4, align 4
    float32 m_flIntensity; // offset 0x8, size 0x4, align 4
    bool m_bAdditive; // offset 0xC, size 0x1, align 1
    bool m_bForceBaseIconWhite; // offset 0xD, size 0x1, align 1
    char _pad_000E[0x2]; // offset 0xE
    EPingMinimapAnimType m_eAnimType; // offset 0x10, size 0x4, align 4
    EPingMinimapDrawCondition m_eDrawCondition; // offset 0x14, size 0x4, align 4
    float32 m_flPulseStartSizeScale; // offset 0x18, size 0x4, align 4
    float32 m_flPulseBonusIntensity; // offset 0x1C, size 0x4, align 4
    float32 m_flPulseDuration; // offset 0x20, size 0x4, align 4
    int32 m_nPulseCount; // offset 0x24, size 0x4, align 4
};
