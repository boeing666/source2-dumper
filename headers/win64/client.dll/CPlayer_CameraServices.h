#pragma once

class CPlayer_CameraServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0x290, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    QAngle m_vecCsViewPunchAngle; // offset 0x48, size 0xC, align 4
    GameTick_t m_nCsViewPunchAngleTick; // offset 0x54, size 0x4, align 255
    float32 m_flCsViewPunchAngleTickRatio; // offset 0x58, size 0x4, align 4
    char _pad_005C[0x4]; // offset 0x5C
    C_fogplayerparams_t m_PlayerFog; // offset 0x60, size 0x40, align 8
    CHandle< C_ColorCorrection > m_hColorCorrectionCtrl; // offset 0xA0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hViewEntity; // offset 0xA4, size 0x4, align 4
    CHandle< C_TonemapController2 > m_hTonemapController; // offset 0xA8, size 0x4, align 4
    char _pad_00AC[0x4]; // offset 0xAC
    audioparams_t m_audio; // offset 0xB0, size 0x78, align 8
    C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > > m_PostProcessingVolumes; // offset 0x128, size 0x18, align 8
    float32 m_flOldPlayerZ; // offset 0x140, size 0x4, align 4
    float32 m_flOldPlayerViewOffsetZ; // offset 0x144, size 0x4, align 4
    fogparams_t m_CurrentFog; // offset 0x148, size 0x68, align 8
    CHandle< C_FogController > m_hOldFogController; // offset 0x1B0, size 0x4, align 4
    bool[5] m_bOverrideFogColor; // offset 0x1B4, size 0x5, align 1
    Color[5] m_OverrideFogColor; // offset 0x1B9, size 0x14, align 1
    bool[5] m_bOverrideFogStartEnd; // offset 0x1CD, size 0x5, align 1
    char _pad_01D2[0x2]; // offset 0x1D2
    float32[5] m_fOverrideFogStart; // offset 0x1D4, size 0x14, align 4
    float32[5] m_fOverrideFogEnd; // offset 0x1E8, size 0x14, align 4
    CHandle< C_PostProcessingVolume > m_hActivePostProcessingVolume; // offset 0x1FC, size 0x4, align 4
    QAngle m_angDemoViewAngles; // offset 0x200, size 0xC, align 4
    char _pad_020C[0x84]; // offset 0x20C
};
