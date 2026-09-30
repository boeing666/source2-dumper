#pragma once

class CSoundOpvarSetPrecipitationEntity : public CSoundOpvarSetPointBase /*0x0*/  // sizeof 0x5E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x560]; // offset 0x0
    CUtlVector< Vector > m_arDirections; // offset 0x560, size 0x18, align 8 | MNotSaved
    CUtlVector< float32 > m_arSky; // offset 0x578, size 0x18, align 8 | MNotSaved
    int32 m_nCurrentIndex; // offset 0x590, size 0x4, align 4 | MNotSaved
    float32 m_flSmoothedValue; // offset 0x594, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastSmoothTime; // offset 0x598, size 0x4, align 255 | MNotSaved
    int32 m_nMode; // offset 0x59C, size 0x4, align 4
    CUtlSymbolLarge m_iszPrecipitationSubclass; // offset 0x5A0, size 0x8, align 8
    Vector m_vBoxMins; // offset 0x5A8, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x5B4, size 0xC, align 4
    float32 m_flDensityMin; // offset 0x5C0, size 0x4, align 4
    float32 m_flDensityMax; // offset 0x5C4, size 0x4, align 4
    float32 m_flDensityMapMin; // offset 0x5C8, size 0x4, align 4
    float32 m_flDensityMapMax; // offset 0x5CC, size 0x4, align 4
    int32 m_nTotalDirections; // offset 0x5D0, size 0x4, align 4
    int32 m_nTracesPerFrame; // offset 0x5D4, size 0x4, align 4
    float32 m_flConeAngle; // offset 0x5D8, size 0x4, align 4
    float32 m_flTraceDistance; // offset 0x5DC, size 0x4, align 4
    float32 m_flSmoothHalfLife; // offset 0x5E0, size 0x4, align 4
    char _pad_05E4[0x4]; // offset 0x5E4
};
