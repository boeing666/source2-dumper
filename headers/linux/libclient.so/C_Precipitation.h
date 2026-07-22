#pragma once

class C_Precipitation : public C_BaseTrigger /*0x0*/  // sizeof 0x1060, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    float32 m_flDensity; // offset 0x1020, size 0x4, align 4 | MNotSaved
    char _pad_1024[0xC]; // offset 0x1024
    float32 m_flParticleInnerDist; // offset 0x1030, size 0x4, align 4 | MNotSaved
    char _pad_1034[0x4]; // offset 0x1034
    char* m_pParticleDef; // offset 0x1038, size 0x8, align 8 | MNotSaved
    char _pad_1040[0xC]; // offset 0x1040
    TimedEvent[1] m_tParticlePrecipTraceTimer; // offset 0x104C, size 0x8, align 4 | MNotSaved
    bool[1] m_bActiveParticlePrecipEmitter; // offset 0x1054, size 0x1, align 1 | MNotSaved
    bool m_bParticlePrecipInitialized; // offset 0x1055, size 0x1, align 1 | MNotSaved
    bool m_bHasSimulatedSinceLastSceneObjectUpdate; // offset 0x1056, size 0x1, align 1 | MNotSaved
    char _pad_1057[0x1]; // offset 0x1057
    int32 m_nAvailableSheetSequencesMaxIndex; // offset 0x1058, size 0x4, align 4 | MNotSaved
    char _pad_105C[0x4]; // offset 0x105C
};
