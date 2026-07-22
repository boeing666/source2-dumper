#pragma once

class C_BasePlayerPawn : public C_BaseCombatCharacter /*0x0*/  // sizeof 0xCD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xB60]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xB60, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0xB68, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xB70, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xB78, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0xB80, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0xB88, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xB90, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0xB98, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0xBA0, size 0x8, align 8
    char _pad_0BA8[0x8]; // offset 0xBA8
    QAngle v_angle; // offset 0xBB0, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xBBC, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xBC8, size 0x4, align 4
    char _pad_0BCC[0x4]; // offset 0xBCC
    sky3dparams_t m_skybox3d; // offset 0xBD0, size 0x90, align 8
    GameTime_t m_flDeathTime; // offset 0xC60, size 0x4, align 255
    Vector m_vecPredictionError; // offset 0xC64, size 0xC, align 4 | MNotSaved
    GameTime_t m_flPredictionErrorTime; // offset 0xC70, size 0x4, align 255 | MNotSaved
    char _pad_0C74[0x1C]; // offset 0xC74
    Vector m_vecLastCameraSetupLocalOrigin; // offset 0xC90, size 0xC, align 4 | MNotSaved
    GameTime_t m_flLastCameraSetupTime; // offset 0xC9C, size 0x4, align 255 | MNotSaved
    float32 m_flFOVSensitivityAdjust; // offset 0xCA0, size 0x4, align 4 | MNotSaved
    float32 m_flMouseSensitivity; // offset 0xCA4, size 0x4, align 4 | MNotSaved
    Vector m_vOldOrigin; // offset 0xCA8, size 0xC, align 4 | MNotSaved
    float32 m_flOldSimulationTime; // offset 0xCB4, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandNumber; // offset 0xCB8, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandTick; // offset 0xCBC, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hController; // offset 0xCC0, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xCC4, size 0x4, align 4
    bool m_bIsSwappingToPredictableController; // offset 0xCC8, size 0x1, align 1 | MNotSaved
    char _pad_0CC9[0x7]; // offset 0xCC9
};
