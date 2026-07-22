#pragma once

class CBasePlayerPawn : public CBaseCombatCharacter /*0x0*/  // sizeof 0xEC0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD10]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xD10, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0xD18, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xD20, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xD28, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0xD30, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0xD38, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xD40, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0xD48, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0xD50, size 0x8, align 8
    char _pad_0D58[0x8]; // offset 0xD58
    CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // offset 0xD60, size 0x68, align 8 | MNotSaved
    QAngle v_angle; // offset 0xDC8, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xDD4, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xDE0, size 0x4, align 4
    char _pad_0DE4[0x4]; // offset 0xDE4
    sky3dparams_t m_skybox3d; // offset 0xDE8, size 0x90, align 8
    GameTime_t m_fTimeLastHurt; // offset 0xE78, size 0x4, align 255
    GameTime_t m_flDeathTime; // offset 0xE7C, size 0x4, align 255
    GameTime_t m_fNextSuicideTime; // offset 0xE80, size 0x4, align 255 | MNotSaved
    bool m_fInitHUD; // offset 0xE84, size 0x1, align 1
    char _pad_0E85[0x3]; // offset 0xE85
    CAI_Expresser* m_pExpresser; // offset 0xE88, size 0x8, align 8
    CHandle< CBasePlayerController > m_hController; // offset 0xE90, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xE94, size 0x4, align 4
    char _pad_0E98[0x4]; // offset 0xE98
    float32 m_fHltvReplayDelay; // offset 0xE9C, size 0x4, align 4 | MNotSaved
    float32 m_fHltvReplayEnd; // offset 0xEA0, size 0x4, align 4 | MNotSaved
    CEntityIndex m_iHltvReplayEntity; // offset 0xEA4, size 0x4, align 4 | MNotSaved
    CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // offset 0xEA8, size 0x18, align 8
};
