#pragma once

class CPlayer_CameraServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0x178, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    QAngle m_vecCsViewPunchAngle; // offset 0x48, size 0xC, align 4
    GameTick_t m_nCsViewPunchAngleTick; // offset 0x54, size 0x4, align 255
    float32 m_flCsViewPunchAngleTickRatio; // offset 0x58, size 0x4, align 4
    char _pad_005C[0x4]; // offset 0x5C
    fogplayerparams_t m_PlayerFog; // offset 0x60, size 0x40, align 8
    CHandle< CColorCorrection > m_hColorCorrectionCtrl; // offset 0xA0, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewEntity; // offset 0xA4, size 0x4, align 4
    CHandle< CTonemapController2 > m_hTonemapController; // offset 0xA8, size 0x4, align 4
    char _pad_00AC[0x4]; // offset 0xAC
    audioparams_t m_audio; // offset 0xB0, size 0x78, align 8
    CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > > m_PostProcessingVolumes; // offset 0x128, size 0x18, align 8
    float32 m_flOldPlayerZ; // offset 0x140, size 0x4, align 4
    float32 m_flOldPlayerViewOffsetZ; // offset 0x144, size 0x4, align 4
    char _pad_0148[0x18]; // offset 0x148
    CUtlVector< CHandle< CEnvSoundscapeTriggerable > > m_hTriggerSoundscapeList; // offset 0x160, size 0x18, align 8
};
