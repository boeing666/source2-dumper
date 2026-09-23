#pragma once

class C_Precipitation : public C_BaseTrigger /*0x0*/  // sizeof 0x1148, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1108]; // offset 0x0
    float32 m_flDensity; // offset 0x1108, size 0x4, align 4 | MNotSaved
    char _pad_110C[0xC]; // offset 0x110C
    float32 m_flParticleInnerDist; // offset 0x1118, size 0x4, align 4 | MNotSaved
    char _pad_111C[0x4]; // offset 0x111C
    char* m_pParticleDef; // offset 0x1120, size 0x8, align 8 | MNotSaved
    char _pad_1128[0xC]; // offset 0x1128
    TimedEvent[1] m_tParticlePrecipTraceTimer; // offset 0x1134, size 0x8, align 4 | MNotSaved
    bool[1] m_bActiveParticlePrecipEmitter; // offset 0x113C, size 0x1, align 1 | MNotSaved
    bool m_bParticlePrecipInitialized; // offset 0x113D, size 0x1, align 1 | MNotSaved
    bool m_bHasSimulatedSinceLastSceneObjectUpdate; // offset 0x113E, size 0x1, align 1 | MNotSaved
    char _pad_113F[0x1]; // offset 0x113F
    int32 m_nAvailableSheetSequencesMaxIndex; // offset 0x1140, size 0x4, align 4 | MNotSaved
    char _pad_1144[0x4]; // offset 0x1144
};
