#pragma once

class CPlayer_CameraServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0x278, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    C_fogplayerparams_t m_PlayerFog; // offset 0x48, size 0x40, align 8
    CHandle< C_ColorCorrection > m_hColorCorrectionCtrl; // offset 0x88, size 0x4, align 4
    CHandle< C_BaseEntity > m_hViewEntity; // offset 0x8C, size 0x4, align 4
    CHandle< C_TonemapController2 > m_hTonemapController; // offset 0x90, size 0x4, align 4
    char _pad_0094[0x4]; // offset 0x94
    audioparams_t m_audio; // offset 0x98, size 0x78, align 8
    C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > > m_PostProcessingVolumes; // offset 0x110, size 0x18, align 8
    float32 m_flOldPlayerZ; // offset 0x128, size 0x4, align 4
    float32 m_flOldPlayerViewOffsetZ; // offset 0x12C, size 0x4, align 4
    fogparams_t m_CurrentFog; // offset 0x130, size 0x68, align 8
    CHandle< C_FogController > m_hOldFogController; // offset 0x198, size 0x4, align 4
    bool[5] m_bOverrideFogColor; // offset 0x19C, size 0x5, align 1
    Color[5] m_OverrideFogColor; // offset 0x1A1, size 0x14, align 1
    bool[5] m_bOverrideFogStartEnd; // offset 0x1B5, size 0x5, align 1
    char _pad_01BA[0x2]; // offset 0x1BA
    float32[5] m_fOverrideFogStart; // offset 0x1BC, size 0x14, align 4
    float32[5] m_fOverrideFogEnd; // offset 0x1D0, size 0x14, align 4
    CHandle< C_PostProcessingVolume > m_hActivePostProcessingVolume; // offset 0x1E4, size 0x4, align 4
    QAngle m_angDemoViewAngles; // offset 0x1E8, size 0xC, align 4
    char _pad_01F4[0x84]; // offset 0x1F4
};
