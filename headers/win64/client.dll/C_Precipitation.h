#pragma once

class C_Precipitation : public C_BaseTrigger /*0x0*/  // sizeof 0x10D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    float32 m_flDensity; // offset 0x1098, size 0x4, align 4 | MNotSaved
    char _pad_109C[0xC]; // offset 0x109C
    float32 m_flParticleInnerDist; // offset 0x10A8, size 0x4, align 4 | MNotSaved
    char _pad_10AC[0x4]; // offset 0x10AC
    char* m_pParticleDef; // offset 0x10B0, size 0x8, align 8 | MNotSaved
    char _pad_10B8[0xC]; // offset 0x10B8
    TimedEvent[1] m_tParticlePrecipTraceTimer; // offset 0x10C4, size 0x8, align 4 | MNotSaved
    bool[1] m_bActiveParticlePrecipEmitter; // offset 0x10CC, size 0x1, align 1 | MNotSaved
    bool m_bParticlePrecipInitialized; // offset 0x10CD, size 0x1, align 1 | MNotSaved
    bool m_bHasSimulatedSinceLastSceneObjectUpdate; // offset 0x10CE, size 0x1, align 1 | MNotSaved
    char _pad_10CF[0x1]; // offset 0x10CF
    int32 m_nAvailableSheetSequencesMaxIndex; // offset 0x10D0, size 0x4, align 4 | MNotSaved
    char _pad_10D4[0x4]; // offset 0x10D4
};
