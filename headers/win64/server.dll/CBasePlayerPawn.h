#pragma once

class CBasePlayerPawn : public CBaseCombatCharacter /*0x0*/  // sizeof 0xD50, align 0x10 [vtable] (server) {MNetworkUserGroupProxy MNetworkExcludeByUserGroup MNetworkIncludeByUserGroup MNetworkIncludeByUserGroup MNetworkIncludeByUserGroup MNetworkIncludeByName MNetworkOverride MNetworkOverride MNetworkOverride MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkUserGroupProxy MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xBA0]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xBA0, size 0x8, align 8 | MNetworkEnable
    CPlayer_ItemServices* m_pItemServices; // offset 0xBA8, size 0x8, align 8 | MNetworkEnable
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xBB0, size 0x8, align 8 | MNetworkEnable MNetworkUserGroup
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xBB8, size 0x8, align 8 | MNetworkEnable
    CPlayer_WaterServices* m_pWaterServices; // offset 0xBC0, size 0x8, align 8 | MNetworkEnable
    CPlayer_UseServices* m_pUseServices; // offset 0xBC8, size 0x8, align 8 | MNetworkEnable
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xBD0, size 0x8, align 8 | MNetworkEnable
    CPlayer_CameraServices* m_pCameraServices; // offset 0xBD8, size 0x8, align 8 | MNetworkEnable
    CPlayer_MovementServices* m_pMovementServices; // offset 0xBE0, size 0x8, align 8 | MNetworkEnable
    char _pad_0BE8[0x8]; // offset 0xBE8
    CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // offset 0xBF0, size 0x68, align 8 | MNetworkEnable MNetworkUserGroup MNotSaved
    QAngle v_angle; // offset 0xC58, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xC64, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xC70, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_0C74[0x4]; // offset 0xC74
    sky3dparams_t m_skybox3d; // offset 0xC78, size 0x90, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_fTimeLastHurt; // offset 0xD08, size 0x4, align 255
    GameTime_t m_flDeathTime; // offset 0xD0C, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_fNextSuicideTime; // offset 0xD10, size 0x4, align 255 | MNotSaved
    bool m_fInitHUD; // offset 0xD14, size 0x1, align 1
    char _pad_0D15[0x3]; // offset 0xD15
    CAI_Expresser* m_pExpresser; // offset 0xD18, size 0x8, align 8 | MNotSaved
    CHandle< CBasePlayerController > m_hController; // offset 0xD20, size 0x4, align 4 | MNetworkEnable
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xD24, size 0x4, align 4 | MNetworkEnable
    char _pad_0D28[0x4]; // offset 0xD28
    float32 m_fHltvReplayDelay; // offset 0xD2C, size 0x4, align 4 | MNotSaved
    float32 m_fHltvReplayEnd; // offset 0xD30, size 0x4, align 4 | MNotSaved
    CEntityIndex m_iHltvReplayEntity; // offset 0xD34, size 0x4, align 4 | MNotSaved
    CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // offset 0xD38, size 0x18, align 8
};
