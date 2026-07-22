#pragma once

class CDOTA_Modifier_Watch_Tower : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 m_iCapturingTeam; // offset 0x1A58, size 0x4, align 4
    float32 m_flCaptureProgress; // offset 0x1A5C, size 0x4, align 4
    float32 m_flBonusTime; // offset 0x1A60, size 0x4, align 4
    bool m_bInitialSetupDone; // offset 0x1A64, size 0x1, align 1
    char _pad_1A65[0x3]; // offset 0x1A65
    int32 m_iOriginalTeam; // offset 0x1A68, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPreviousHero; // offset 0x1A6C, size 0x4, align 4
    CUtlVector< PlayerID_t > m_vecLastCreditedPlayerIDs; // offset 0x1A70, size 0x18, align 8
    float32 m_flAccumulatedCaptureTime; // offset 0x1A88, size 0x4, align 4
    int32 m_iBonusCount; // offset 0x1A8C, size 0x4, align 4
    ParticleIndex_t m_nFxOutpostAmbient; // offset 0x1A90, size 0x4, align 255
    ParticleIndex_t m_nFxOutpostInitialAmbient; // offset 0x1A94, size 0x4, align 255
};
