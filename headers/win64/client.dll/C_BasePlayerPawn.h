#pragma once

class C_BasePlayerPawn : public C_BaseCombatCharacter /*0x0*/  // sizeof 0xDC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC50]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xC50, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0xC58, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xC60, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xC68, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0xC70, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0xC78, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xC80, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0xC88, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0xC90, size 0x8, align 8
    char _pad_0C98[0x8]; // offset 0xC98
    QAngle v_angle; // offset 0xCA0, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xCAC, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xCB8, size 0x4, align 4
    char _pad_0CBC[0x4]; // offset 0xCBC
    sky3dparams_t m_skybox3d; // offset 0xCC0, size 0x90, align 8
    GameTime_t m_flDeathTime; // offset 0xD50, size 0x4, align 255
    char _pad_0D54[0x4]; // offset 0xD54
    Vector m_vecPredictionError; // offset 0xD58, size 0xC, align 4 | MNotSaved
    GameTime_t m_flPredictionErrorTime; // offset 0xD64, size 0x4, align 255 | MNotSaved
    char _pad_0D68[0x20]; // offset 0xD68
    Vector m_vecLastCameraSetupLocalOrigin; // offset 0xD88, size 0xC, align 4 | MNotSaved
    GameTime_t m_flLastCameraSetupTime; // offset 0xD94, size 0x4, align 255 | MNotSaved
    float32 m_flFOVSensitivityAdjust; // offset 0xD98, size 0x4, align 4 | MNotSaved
    float32 m_flMouseSensitivity; // offset 0xD9C, size 0x4, align 4 | MNotSaved
    Vector m_vOldOrigin; // offset 0xDA0, size 0xC, align 4 | MNotSaved
    float32 m_flOldSimulationTime; // offset 0xDAC, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandNumber; // offset 0xDB0, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandTick; // offset 0xDB4, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hController; // offset 0xDB8, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xDBC, size 0x4, align 4
    bool m_bIsSwappingToPredictableController; // offset 0xDC0, size 0x1, align 1 | MNotSaved
    char _pad_0DC1[0x7]; // offset 0xDC1
};
