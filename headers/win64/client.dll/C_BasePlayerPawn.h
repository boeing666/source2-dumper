#pragma once

class C_BasePlayerPawn : public C_BaseCombatCharacter /*0x0*/  // sizeof 0x13E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1208]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0x1208, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0x1210, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0x1218, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0x1220, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0x1228, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0x1230, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0x1238, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0x1240, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0x1248, size 0x8, align 8
    char _pad_1250[0x8]; // offset 0x1250
    C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // offset 0x1258, size 0x68, align 8 | MNotSaved
    QAngle v_angle; // offset 0x12C0, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0x12CC, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0x12D8, size 0x4, align 4
    char _pad_12DC[0x4]; // offset 0x12DC
    sky3dparams_t m_skybox3d; // offset 0x12E0, size 0x90, align 8
    GameTime_t m_flDeathTime; // offset 0x1370, size 0x4, align 255
    Vector m_vecPredictionError; // offset 0x1374, size 0xC, align 4 | MNotSaved
    GameTime_t m_flPredictionErrorTime; // offset 0x1380, size 0x4, align 255 | MNotSaved
    char _pad_1384[0x1C]; // offset 0x1384
    Vector m_vecLastCameraSetupLocalOrigin; // offset 0x13A0, size 0xC, align 4 | MNotSaved
    GameTime_t m_flLastCameraSetupTime; // offset 0x13AC, size 0x4, align 255 | MNotSaved
    float32 m_flFOVSensitivityAdjust; // offset 0x13B0, size 0x4, align 4 | MNotSaved
    float32 m_flMouseSensitivity; // offset 0x13B4, size 0x4, align 4 | MNotSaved
    Vector m_vOldOrigin; // offset 0x13B8, size 0xC, align 4 | MNotSaved
    float32 m_flOldSimulationTime; // offset 0x13C4, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandNumber; // offset 0x13C8, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandTick; // offset 0x13CC, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hController; // offset 0x13D0, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0x13D4, size 0x4, align 4
    bool m_bIsSwappingToPredictableController; // offset 0x13D8, size 0x1, align 1 | MNotSaved
    char _pad_13D9[0x7]; // offset 0x13D9
};
