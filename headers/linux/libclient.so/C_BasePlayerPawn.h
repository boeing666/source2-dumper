#pragma once

class C_BasePlayerPawn : public C_BaseCombatCharacter /*0x0*/  // sizeof 0xE58, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCE8]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xCE8, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0xCF0, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xCF8, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xD00, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0xD08, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0xD10, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xD18, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0xD20, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0xD28, size 0x8, align 8
    char _pad_0D30[0x8]; // offset 0xD30
    QAngle v_angle; // offset 0xD38, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xD44, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xD50, size 0x4, align 4
    char _pad_0D54[0x4]; // offset 0xD54
    sky3dparams_t m_skybox3d; // offset 0xD58, size 0x90, align 8
    GameTime_t m_flDeathTime; // offset 0xDE8, size 0x4, align 255
    Vector m_vecPredictionError; // offset 0xDEC, size 0xC, align 4 | MNotSaved
    GameTime_t m_flPredictionErrorTime; // offset 0xDF8, size 0x4, align 255 | MNotSaved
    char _pad_0DFC[0x1C]; // offset 0xDFC
    Vector m_vecLastCameraSetupLocalOrigin; // offset 0xE18, size 0xC, align 4 | MNotSaved
    GameTime_t m_flLastCameraSetupTime; // offset 0xE24, size 0x4, align 255 | MNotSaved
    float32 m_flFOVSensitivityAdjust; // offset 0xE28, size 0x4, align 4 | MNotSaved
    float32 m_flMouseSensitivity; // offset 0xE2C, size 0x4, align 4 | MNotSaved
    Vector m_vOldOrigin; // offset 0xE30, size 0xC, align 4 | MNotSaved
    float32 m_flOldSimulationTime; // offset 0xE3C, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandNumber; // offset 0xE40, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandTick; // offset 0xE44, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hController; // offset 0xE48, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xE4C, size 0x4, align 4
    bool m_bIsSwappingToPredictableController; // offset 0xE50, size 0x1, align 1 | MNotSaved
    char _pad_0E51[0x7]; // offset 0xE51
};
