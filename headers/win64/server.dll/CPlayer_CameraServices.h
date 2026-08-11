#pragma once

class CPlayer_CameraServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    fogplayerparams_t m_PlayerFog; // offset 0x48, size 0x40, align 8
    CHandle< CColorCorrection > m_hColorCorrectionCtrl; // offset 0x88, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewEntity; // offset 0x8C, size 0x4, align 4
    CHandle< CTonemapController2 > m_hTonemapController; // offset 0x90, size 0x4, align 4
    char _pad_0094[0x4]; // offset 0x94
    audioparams_t m_audio; // offset 0x98, size 0x78, align 8
    CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > > m_PostProcessingVolumes; // offset 0x110, size 0x18, align 8
    float32 m_flOldPlayerZ; // offset 0x128, size 0x4, align 4
    float32 m_flOldPlayerViewOffsetZ; // offset 0x12C, size 0x4, align 4
    char _pad_0130[0x18]; // offset 0x130
    CUtlVector< CHandle< CEnvSoundscapeTriggerable > > m_hTriggerSoundscapeList; // offset 0x148, size 0x18, align 8
};
