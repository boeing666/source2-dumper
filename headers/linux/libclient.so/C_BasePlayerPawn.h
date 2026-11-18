#pragma once

class C_BasePlayerPawn : public C_BaseCombatCharacter /*0x0*/  // sizeof 0xFB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE40]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xE40, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0xE48, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xE50, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xE58, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0xE60, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0xE68, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xE70, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0xE78, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0xE80, size 0x8, align 8
    char _pad_0E88[0x8]; // offset 0xE88
    QAngle v_angle; // offset 0xE90, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xE9C, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xEA8, size 0x4, align 4
    char _pad_0EAC[0x4]; // offset 0xEAC
    sky3dparams_t m_skybox3d; // offset 0xEB0, size 0x90, align 8
    GameTime_t m_flDeathTime; // offset 0xF40, size 0x4, align 255
    char _pad_0F44[0x4]; // offset 0xF44
    Vector m_vecPredictionError; // offset 0xF48, size 0xC, align 4 | MNotSaved
    GameTime_t m_flPredictionErrorTime; // offset 0xF54, size 0x4, align 255 | MNotSaved
    char _pad_0F58[0x20]; // offset 0xF58
    Vector m_vecLastCameraSetupLocalOrigin; // offset 0xF78, size 0xC, align 4 | MNotSaved
    GameTime_t m_flLastCameraSetupTime; // offset 0xF84, size 0x4, align 255 | MNotSaved
    float32 m_flFOVSensitivityAdjust; // offset 0xF88, size 0x4, align 4 | MNotSaved
    float32 m_flMouseSensitivity; // offset 0xF8C, size 0x4, align 4 | MNotSaved
    Vector m_vOldOrigin; // offset 0xF90, size 0xC, align 4 | MNotSaved
    float32 m_flOldSimulationTime; // offset 0xF9C, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandNumber; // offset 0xFA0, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandTick; // offset 0xFA4, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hController; // offset 0xFA8, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xFAC, size 0x4, align 4
    bool m_bIsSwappingToPredictableController; // offset 0xFB0, size 0x1, align 1 | MNotSaved
    char _pad_0FB1[0x7]; // offset 0xFB1
};
