#pragma once

class C_BasePlayerPawn : public C_BaseCombatCharacter /*0x0*/  // sizeof 0x10C0, align 0x8 [vtable] (client) {MNetworkUserGroupProxy MNetworkExcludeByUserGroup MNetworkIncludeByUserGroup MNetworkIncludeByUserGroup MNetworkIncludeByUserGroup MNetworkOverride MNetworkOverride MNetworkOverride MNetworkOverride MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xEE8]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xEE8, size 0x8, align 8 | MNetworkEnable
    CPlayer_ItemServices* m_pItemServices; // offset 0xEF0, size 0x8, align 8 | MNetworkEnable
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xEF8, size 0x8, align 8 | MNetworkEnable MNetworkUserGroup
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xF00, size 0x8, align 8 | MNetworkEnable
    CPlayer_WaterServices* m_pWaterServices; // offset 0xF08, size 0x8, align 8 | MNetworkEnable
    CPlayer_UseServices* m_pUseServices; // offset 0xF10, size 0x8, align 8 | MNetworkEnable
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xF18, size 0x8, align 8 | MNetworkEnable
    CPlayer_CameraServices* m_pCameraServices; // offset 0xF20, size 0x8, align 8 | MNetworkEnable
    CPlayer_MovementServices* m_pMovementServices; // offset 0xF28, size 0x8, align 8 | MNetworkEnable
    char _pad_0F30[0x8]; // offset 0xF30
    C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // offset 0xF38, size 0x68, align 8 | MNetworkEnable MNetworkUserGroup MNotSaved
    QAngle v_angle; // offset 0xFA0, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xFAC, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xFB8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_0FBC[0x4]; // offset 0xFBC
    sky3dparams_t m_skybox3d; // offset 0xFC0, size 0x90, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flDeathTime; // offset 0x1050, size 0x4, align 255 | MNetworkEnable
    Vector m_vecPredictionError; // offset 0x1054, size 0xC, align 4 | MNotSaved
    GameTime_t m_flPredictionErrorTime; // offset 0x1060, size 0x4, align 255 | MNotSaved
    char _pad_1064[0x1C]; // offset 0x1064
    Vector m_vecLastCameraSetupLocalOrigin; // offset 0x1080, size 0xC, align 4 | MNotSaved
    GameTime_t m_flLastCameraSetupTime; // offset 0x108C, size 0x4, align 255 | MNotSaved
    float32 m_flFOVSensitivityAdjust; // offset 0x1090, size 0x4, align 4 | MNotSaved
    float32 m_flMouseSensitivity; // offset 0x1094, size 0x4, align 4 | MNotSaved
    Vector m_vOldOrigin; // offset 0x1098, size 0xC, align 4 | MNotSaved
    float32 m_flOldSimulationTime; // offset 0x10A4, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandNumber; // offset 0x10A8, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandTick; // offset 0x10AC, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hController; // offset 0x10B0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0x10B4, size 0x4, align 4 | MNetworkEnable
    bool m_bIsSwappingToPredictableController; // offset 0x10B8, size 0x1, align 1 | MNotSaved
    char _pad_10B9[0x7]; // offset 0x10B9
};
