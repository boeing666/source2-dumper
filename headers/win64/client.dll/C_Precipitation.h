#pragma once

class C_Precipitation : public C_BaseTrigger /*0x0*/  // sizeof 0xAC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA78]; // offset 0x0
    float32 m_flDensity; // offset 0xA78, size 0x4, align 4 | MNotSaved
    char _pad_0A7C[0xC]; // offset 0xA7C
    float32 m_flParticleInnerDist; // offset 0xA88, size 0x4, align 4 | MNotSaved
    char _pad_0A8C[0x4]; // offset 0xA8C
    char* m_pParticleDef; // offset 0xA90, size 0x8, align 8 | MNotSaved
    char _pad_0A98[0x20]; // offset 0xA98
    TimedEvent[1] m_tParticlePrecipTraceTimer; // offset 0xAB8, size 0x8, align 4 | MNotSaved
    bool[1] m_bActiveParticlePrecipEmitter; // offset 0xAC0, size 0x1, align 1 | MNotSaved
    bool m_bParticlePrecipInitialized; // offset 0xAC1, size 0x1, align 1 | MNotSaved
    bool m_bHasSimulatedSinceLastSceneObjectUpdate; // offset 0xAC2, size 0x1, align 1 | MNotSaved
    char _pad_0AC3[0x1]; // offset 0xAC3
    int32 m_nAvailableSheetSequencesMaxIndex; // offset 0xAC4, size 0x4, align 4 | MNotSaved
};
