#pragma once

class C_Precipitation : public C_BaseTrigger /*0x0*/  // sizeof 0x11C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    float32 m_flDensity; // offset 0x1180, size 0x4, align 4 | MNotSaved
    char _pad_1184[0xC]; // offset 0x1184
    float32 m_flParticleInnerDist; // offset 0x1190, size 0x4, align 4 | MNotSaved
    char _pad_1194[0x4]; // offset 0x1194
    char* m_pParticleDef; // offset 0x1198, size 0x8, align 8 | MNotSaved
    char _pad_11A0[0xC]; // offset 0x11A0
    TimedEvent[1] m_tParticlePrecipTraceTimer; // offset 0x11AC, size 0x8, align 4 | MNotSaved
    bool[1] m_bActiveParticlePrecipEmitter; // offset 0x11B4, size 0x1, align 1 | MNotSaved
    bool m_bParticlePrecipInitialized; // offset 0x11B5, size 0x1, align 1 | MNotSaved
    bool m_bHasSimulatedSinceLastSceneObjectUpdate; // offset 0x11B6, size 0x1, align 1 | MNotSaved
    char _pad_11B7[0x1]; // offset 0x11B7
    int32 m_nAvailableSheetSequencesMaxIndex; // offset 0x11B8, size 0x4, align 4 | MNotSaved
    char _pad_11BC[0x4]; // offset 0x11BC
};
