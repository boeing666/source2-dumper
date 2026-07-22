#pragma once

class CPlayer_CameraServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0x3A0, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    QAngle m_vecPunchAngle; // offset 0x48, size 0xC, align 4 | MNetworkEnable MNetworkPriority MNetworkEncoder MNetworkChangeCallback
    char _pad_0054[0x84]; // offset 0x54
    QAngle m_vecPunchAngleVel; // offset 0xD8, size 0xC, align 4 | MNetworkEnable MNetworkEncoder
    char _pad_00E4[0x84]; // offset 0xE4
    GameTick_t m_nPunchAngleJoltTickClientSide; // offset 0x168, size 0x4, align 255
    GameTick_t m_nPunchAngleJoltTick; // offset 0x16C, size 0x4, align 255 | MNetworkEnable MNetworkChangeCallback
    C_fogplayerparams_t m_PlayerFog; // offset 0x170, size 0x40, align 255 | MNetworkEnable
    CHandle< C_ColorCorrection > m_hColorCorrectionCtrl; // offset 0x1B0, size 0x4, align 4 | MNetworkEnable
    CHandle< C_BaseEntity > m_hViewEntity; // offset 0x1B4, size 0x4, align 4 | MNetworkEnable
    CHandle< C_TonemapController2 > m_hTonemapController; // offset 0x1B8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_01BC[0x4]; // offset 0x1BC
    audioparams_t m_audio; // offset 0x1C0, size 0x78, align 255 | MNetworkEnable MNetworkUserGroup
    C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > > m_PostProcessingVolumes; // offset 0x238, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup
    float32 m_flOldPlayerZ; // offset 0x250, size 0x4, align 4
    float32 m_flOldPlayerViewOffsetZ; // offset 0x254, size 0x4, align 4
    fogparams_t m_CurrentFog; // offset 0x258, size 0x68, align 255
    CHandle< C_FogController > m_hOldFogController; // offset 0x2C0, size 0x4, align 4
    bool[5] m_bOverrideFogColor; // offset 0x2C4, size 0x5, align 1
    Color[5] m_OverrideFogColor; // offset 0x2C9, size 0x14, align 1
    bool[5] m_bOverrideFogStartEnd; // offset 0x2DD, size 0x5, align 1
    char _pad_02E2[0x2]; // offset 0x2E2
    float32[5] m_fOverrideFogStart; // offset 0x2E4, size 0x14, align 4
    float32[5] m_fOverrideFogEnd; // offset 0x2F8, size 0x14, align 4
    CHandle< C_PostProcessingVolume > m_hActivePostProcessingVolume; // offset 0x30C, size 0x4, align 4
    QAngle m_angDemoViewAngles; // offset 0x310, size 0xC, align 4
    char _pad_031C[0x84]; // offset 0x31C
};
