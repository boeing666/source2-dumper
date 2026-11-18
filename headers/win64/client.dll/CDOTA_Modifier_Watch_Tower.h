#pragma once

class CDOTA_Modifier_Watch_Tower : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 m_iCapturingTeam; // offset 0x1AF8, size 0x4, align 4
    float32 m_flCaptureProgress; // offset 0x1AFC, size 0x4, align 4
    float32 m_flBonusTime; // offset 0x1B00, size 0x4, align 4
    bool m_bInitialSetupDone; // offset 0x1B04, size 0x1, align 1
    char _pad_1B05[0x3]; // offset 0x1B05
    int32 m_iOriginalTeam; // offset 0x1B08, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPreviousHero; // offset 0x1B0C, size 0x4, align 4
    CUtlVector< PlayerID_t > m_vecLastCreditedPlayerIDs; // offset 0x1B10, size 0x18, align 8
    float32 m_flAccumulatedCaptureTime; // offset 0x1B28, size 0x4, align 4
    int32 m_iBonusCount; // offset 0x1B2C, size 0x4, align 4
    ParticleIndex_t m_nFxOutpostAmbient; // offset 0x1B30, size 0x4, align 255
    ParticleIndex_t m_nFxOutpostInitialAmbient; // offset 0x1B34, size 0x4, align 255
};
