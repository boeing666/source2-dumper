#pragma once

struct PortraitWorldLightConfig_t  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_strName; // offset 0x0, size 0x8, align 8
    float32 m_flLatitude; // offset 0x8, size 0x4, align 4
    float32 m_flLongitude; // offset 0xC, size 0x4, align 4
    float32 m_flIntensity; // offset 0x10, size 0x4, align 4
    float32 m_flAdditionalRadius; // offset 0x14, size 0x4, align 4
    float32 m_flSpotFov; // offset 0x18, size 0x4, align 4
    float32 m_flAnimatedNoiseFrequency; // offset 0x1C, size 0x4, align 4
    float32 m_flAnimatedNoiseMinValue; // offset 0x20, size 0x4, align 4
    Color m_color; // offset 0x24, size 0x4, align 1
    bool m_bShowGizmos; // offset 0x28, size 0x1, align 1
    bool m_bShadows; // offset 0x29, size 0x1, align 1
    char _pad_002A[0x6]; // offset 0x2A
};
