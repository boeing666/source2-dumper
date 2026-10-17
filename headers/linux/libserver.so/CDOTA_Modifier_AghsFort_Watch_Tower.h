#pragma once

class CDOTA_Modifier_AghsFort_Watch_Tower : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    TowerState_t m_nState; // offset 0x1AA8, size 0x4, align 4
    float32 m_flYaw; // offset 0x1AAC, size 0x4, align 4
    int32 m_nCaptureDuration; // offset 0x1AB0, size 0x4, align 4
    GameTime_t m_flEffectiveCaptureStartTime; // offset 0x1AB4, size 0x4, align 255
    int32 m_nCapturingPlayerCount; // offset 0x1AB8, size 0x4, align 4
    float32 m_flCaptureProgress; // offset 0x1ABC, size 0x4, align 4
    int32 m_iCapturingTeam; // offset 0x1AC0, size 0x4, align 4
    ParticleIndex_t m_nFxOutpostAmbient; // offset 0x1AC4, size 0x4, align 255
    GameTime_t m_flDestroyTime; // offset 0x1AC8, size 0x4, align 255
    GameTime_t m_flAutoChannelCompleteTime; // offset 0x1ACC, size 0x4, align 255
    bool m_bAscensionLevelPicker; // offset 0x1AD0, size 0x1, align 1
    char _pad_1AD1[0x3]; // offset 0x1AD1
    int32 m_nEliteChallengeLevel; // offset 0x1AD4, size 0x4, align 4
    CUtlString m_strNextRoomName; // offset 0x1AD8, size 0x8, align 8
    CUtlString m_strNextEncounterName; // offset 0x1AE0, size 0x8, align 8
    bool m_bStartedBeamFacing; // offset 0x1AE8, size 0x1, align 1
    char _pad_1AE9[0x7]; // offset 0x1AE9
};
