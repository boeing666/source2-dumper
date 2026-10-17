#pragma once

class CSoundOpvarSetPrecipitationEntity : public CSoundOpvarSetPointBase /*0x0*/  // sizeof 0x8B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    CUtlVector< Vector > m_arDirections; // offset 0x828, size 0x18, align 8 | MNotSaved
    CUtlVector< float32 > m_arSky; // offset 0x840, size 0x18, align 8 | MNotSaved
    int32 m_nCurrentIndex; // offset 0x858, size 0x4, align 4 | MNotSaved
    float32 m_flSmoothedValue; // offset 0x85C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastSmoothTime; // offset 0x860, size 0x4, align 255 | MNotSaved
    int32 m_nMode; // offset 0x864, size 0x4, align 4
    CUtlSymbolLarge m_iszPrecipitationSubclass; // offset 0x868, size 0x8, align 8
    Vector m_vBoxMins; // offset 0x870, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x87C, size 0xC, align 4
    float32 m_flDensityMin; // offset 0x888, size 0x4, align 4
    float32 m_flDensityMax; // offset 0x88C, size 0x4, align 4
    float32 m_flDensityMapMin; // offset 0x890, size 0x4, align 4
    float32 m_flDensityMapMax; // offset 0x894, size 0x4, align 4
    int32 m_nTotalDirections; // offset 0x898, size 0x4, align 4
    int32 m_nTracesPerFrame; // offset 0x89C, size 0x4, align 4
    float32 m_flConeAngle; // offset 0x8A0, size 0x4, align 4
    float32 m_flTraceDistance; // offset 0x8A4, size 0x4, align 4
    float32 m_flSmoothHalfLife; // offset 0x8A8, size 0x4, align 4
    char _pad_08AC[0x4]; // offset 0x8AC
};
