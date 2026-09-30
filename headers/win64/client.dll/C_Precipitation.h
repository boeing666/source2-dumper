#pragma once

class C_Precipitation : public C_BaseTrigger /*0x0*/  // sizeof 0xCD8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC98]; // offset 0x0
    float32 m_flDensity; // offset 0xC98, size 0x4, align 4 | MNotSaved
    char _pad_0C9C[0xC]; // offset 0xC9C
    float32 m_flParticleInnerDist; // offset 0xCA8, size 0x4, align 4 | MNotSaved
    char _pad_0CAC[0x4]; // offset 0xCAC
    char* m_pParticleDef; // offset 0xCB0, size 0x8, align 8 | MNotSaved
    char _pad_0CB8[0xC]; // offset 0xCB8
    TimedEvent[1] m_tParticlePrecipTraceTimer; // offset 0xCC4, size 0x8, align 4 | MNotSaved
    bool[1] m_bActiveParticlePrecipEmitter; // offset 0xCCC, size 0x1, align 1 | MNotSaved
    bool m_bParticlePrecipInitialized; // offset 0xCCD, size 0x1, align 1 | MNotSaved
    bool m_bHasSimulatedSinceLastSceneObjectUpdate; // offset 0xCCE, size 0x1, align 1 | MNotSaved
    char _pad_0CCF[0x1]; // offset 0xCCF
    int32 m_nAvailableSheetSequencesMaxIndex; // offset 0xCD0, size 0x4, align 4 | MNotSaved
    char _pad_0CD4[0x4]; // offset 0xCD4
};
