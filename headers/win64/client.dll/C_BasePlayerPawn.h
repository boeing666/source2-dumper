#pragma once

class C_BasePlayerPawn : public C_BaseCombatCharacter /*0x0*/  // sizeof 0xE28, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCB0]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xCB0, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0xCB8, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xCC0, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xCC8, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0xCD0, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0xCD8, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xCE0, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0xCE8, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0xCF0, size 0x8, align 8
    char _pad_0CF8[0x8]; // offset 0xCF8
    QAngle v_angle; // offset 0xD00, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xD0C, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xD18, size 0x4, align 4
    char _pad_0D1C[0x4]; // offset 0xD1C
    sky3dparams_t m_skybox3d; // offset 0xD20, size 0x90, align 8
    GameTime_t m_flDeathTime; // offset 0xDB0, size 0x4, align 255
    char _pad_0DB4[0x4]; // offset 0xDB4
    Vector m_vecPredictionError; // offset 0xDB8, size 0xC, align 4 | MNotSaved
    GameTime_t m_flPredictionErrorTime; // offset 0xDC4, size 0x4, align 255 | MNotSaved
    char _pad_0DC8[0x20]; // offset 0xDC8
    Vector m_vecLastCameraSetupLocalOrigin; // offset 0xDE8, size 0xC, align 4 | MNotSaved
    GameTime_t m_flLastCameraSetupTime; // offset 0xDF4, size 0x4, align 255 | MNotSaved
    float32 m_flFOVSensitivityAdjust; // offset 0xDF8, size 0x4, align 4 | MNotSaved
    float32 m_flMouseSensitivity; // offset 0xDFC, size 0x4, align 4 | MNotSaved
    Vector m_vOldOrigin; // offset 0xE00, size 0xC, align 4 | MNotSaved
    float32 m_flOldSimulationTime; // offset 0xE0C, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandNumber; // offset 0xE10, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandTick; // offset 0xE14, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hController; // offset 0xE18, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xE1C, size 0x4, align 4
    bool m_bIsSwappingToPredictableController; // offset 0xE20, size 0x1, align 1 | MNotSaved
    char _pad_0E21[0x7]; // offset 0xE21
};
