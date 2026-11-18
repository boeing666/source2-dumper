#pragma once

class CDOTA_Modifier_AghsFort_Watch_Tower : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    TowerState_t m_nState; // offset 0x1AF8, size 0x4, align 4
    float32 m_flYaw; // offset 0x1AFC, size 0x4, align 4
    int32 m_nCaptureDuration; // offset 0x1B00, size 0x4, align 4
    GameTime_t m_flEffectiveCaptureStartTime; // offset 0x1B04, size 0x4, align 255
    int32 m_nCapturingPlayerCount; // offset 0x1B08, size 0x4, align 4
    float32 m_flCaptureProgress; // offset 0x1B0C, size 0x4, align 4
    int32 m_iCapturingTeam; // offset 0x1B10, size 0x4, align 4
    ParticleIndex_t m_nFxOutpostAmbient; // offset 0x1B14, size 0x4, align 255
    GameTime_t m_flDestroyTime; // offset 0x1B18, size 0x4, align 255
    GameTime_t m_flAutoChannelCompleteTime; // offset 0x1B1C, size 0x4, align 255
    bool m_bAscensionLevelPicker; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x3]; // offset 0x1B21
    int32 m_nEliteChallengeLevel; // offset 0x1B24, size 0x4, align 4
    CUtlString m_strNextRoomName; // offset 0x1B28, size 0x8, align 8
    CUtlString m_strNextEncounterName; // offset 0x1B30, size 0x8, align 8
    bool m_bStartedBeamFacing; // offset 0x1B38, size 0x1, align 1
    char _pad_1B39[0x7]; // offset 0x1B39
};
