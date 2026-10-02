#pragma once

class C_BasePlayerPawn : public C_BaseCombatCharacter /*0x0*/  // sizeof 0x1060, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE80]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xE80, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0xE88, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xE90, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xE98, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0xEA0, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0xEA8, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xEB0, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0xEB8, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0xEC0, size 0x8, align 8
    char _pad_0EC8[0x8]; // offset 0xEC8
    C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // offset 0xED0, size 0x68, align 8 | MNotSaved
    QAngle v_angle; // offset 0xF38, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xF44, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xF50, size 0x4, align 4
    char _pad_0F54[0x4]; // offset 0xF54
    sky3dparams_t m_skybox3d; // offset 0xF58, size 0x90, align 8
    GameTime_t m_flDeathTime; // offset 0xFE8, size 0x4, align 255
    char _pad_0FEC[0x4]; // offset 0xFEC
    Vector m_vecPredictionError; // offset 0xFF0, size 0xC, align 4 | MNotSaved
    GameTime_t m_flPredictionErrorTime; // offset 0xFFC, size 0x4, align 255 | MNotSaved
    char _pad_1000[0x20]; // offset 0x1000
    Vector m_vecLastCameraSetupLocalOrigin; // offset 0x1020, size 0xC, align 4 | MNotSaved
    GameTime_t m_flLastCameraSetupTime; // offset 0x102C, size 0x4, align 255 | MNotSaved
    float32 m_flFOVSensitivityAdjust; // offset 0x1030, size 0x4, align 4 | MNotSaved
    float32 m_flMouseSensitivity; // offset 0x1034, size 0x4, align 4 | MNotSaved
    Vector m_vOldOrigin; // offset 0x1038, size 0xC, align 4 | MNotSaved
    float32 m_flOldSimulationTime; // offset 0x1044, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandNumber; // offset 0x1048, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandTick; // offset 0x104C, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hController; // offset 0x1050, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0x1054, size 0x4, align 4
    bool m_bIsSwappingToPredictableController; // offset 0x1058, size 0x1, align 1 | MNotSaved
    char _pad_1059[0x7]; // offset 0x1059
};
