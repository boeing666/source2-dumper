#pragma once

class CPlayer_CameraServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0x180, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    QAngle m_vecPunchAngle; // offset 0x48, size 0xC, align 4
    QAngle m_vecPunchAngleVel; // offset 0x54, size 0xC, align 4
    GameTick_t m_nPunchAngleJoltTick; // offset 0x60, size 0x4, align 255
    char _pad_0064[0x4]; // offset 0x64
    fogplayerparams_t m_PlayerFog; // offset 0x68, size 0x40, align 8
    CHandle< CColorCorrection > m_hColorCorrectionCtrl; // offset 0xA8, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewEntity; // offset 0xAC, size 0x4, align 4
    CHandle< CTonemapController2 > m_hTonemapController; // offset 0xB0, size 0x4, align 4
    char _pad_00B4[0x4]; // offset 0xB4
    audioparams_t m_audio; // offset 0xB8, size 0x78, align 8
    CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > > m_PostProcessingVolumes; // offset 0x130, size 0x18, align 8
    float32 m_flOldPlayerZ; // offset 0x148, size 0x4, align 4
    float32 m_flOldPlayerViewOffsetZ; // offset 0x14C, size 0x4, align 4
    char _pad_0150[0x18]; // offset 0x150
    CUtlVector< CHandle< CEnvSoundscapeTriggerable > > m_hTriggerSoundscapeList; // offset 0x168, size 0x18, align 8
};
