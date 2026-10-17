#pragma once

class C_BasePlayerPawn : public C_BaseCombatCharacter /*0x0*/  // sizeof 0xF50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDD8]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xDD8, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0xDE0, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xDE8, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xDF0, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0xDF8, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0xE00, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xE08, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0xE10, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0xE18, size 0x8, align 8
    char _pad_0E20[0x8]; // offset 0xE20
    QAngle v_angle; // offset 0xE28, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xE34, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xE40, size 0x4, align 4
    char _pad_0E44[0x4]; // offset 0xE44
    sky3dparams_t m_skybox3d; // offset 0xE48, size 0x90, align 8
    GameTime_t m_flDeathTime; // offset 0xED8, size 0x4, align 255
    char _pad_0EDC[0x4]; // offset 0xEDC
    Vector m_vecPredictionError; // offset 0xEE0, size 0xC, align 4 | MNotSaved
    GameTime_t m_flPredictionErrorTime; // offset 0xEEC, size 0x4, align 255 | MNotSaved
    char _pad_0EF0[0x20]; // offset 0xEF0
    Vector m_vecLastCameraSetupLocalOrigin; // offset 0xF10, size 0xC, align 4 | MNotSaved
    GameTime_t m_flLastCameraSetupTime; // offset 0xF1C, size 0x4, align 255 | MNotSaved
    float32 m_flFOVSensitivityAdjust; // offset 0xF20, size 0x4, align 4 | MNotSaved
    float32 m_flMouseSensitivity; // offset 0xF24, size 0x4, align 4 | MNotSaved
    Vector m_vOldOrigin; // offset 0xF28, size 0xC, align 4 | MNotSaved
    float32 m_flOldSimulationTime; // offset 0xF34, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandNumber; // offset 0xF38, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandTick; // offset 0xF3C, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hController; // offset 0xF40, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xF44, size 0x4, align 4
    bool m_bIsSwappingToPredictableController; // offset 0xF48, size 0x1, align 1 | MNotSaved
    char _pad_0F49[0x7]; // offset 0xF49
};
