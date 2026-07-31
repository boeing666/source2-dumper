#pragma once

class CDOTA_Modifier_Watch_Tower : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_iCapturingTeam; // offset 0x1A78, size 0x4, align 4
    float32 m_flCaptureProgress; // offset 0x1A7C, size 0x4, align 4
    float32 m_flBonusTime; // offset 0x1A80, size 0x4, align 4
    bool m_bInitialSetupDone; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
    int32 m_iOriginalTeam; // offset 0x1A88, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPreviousHero; // offset 0x1A8C, size 0x4, align 4
    CUtlVector< PlayerID_t > m_vecLastCreditedPlayerIDs; // offset 0x1A90, size 0x18, align 8
    float32 m_flAccumulatedCaptureTime; // offset 0x1AA8, size 0x4, align 4
    int32 m_iBonusCount; // offset 0x1AAC, size 0x4, align 4
    ParticleIndex_t m_nFxOutpostAmbient; // offset 0x1AB0, size 0x4, align 255
    ParticleIndex_t m_nFxOutpostInitialAmbient; // offset 0x1AB4, size 0x4, align 255
};
