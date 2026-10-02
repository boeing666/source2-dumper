#pragma once

class CBasePlayerPawn : public CBaseCombatCharacter /*0x0*/  // sizeof 0xD70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xBB0, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0xBB8, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xBC0, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xBC8, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0xBD0, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0xBD8, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xBE0, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0xBE8, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0xBF0, size 0x8, align 8
    char _pad_0BF8[0x8]; // offset 0xBF8
    CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // offset 0xC00, size 0x68, align 8 | MNotSaved
    QAngle v_angle; // offset 0xC68, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xC74, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xC80, size 0x4, align 4
    char _pad_0C84[0x4]; // offset 0xC84
    sky3dparams_t m_skybox3d; // offset 0xC88, size 0x90, align 8
    GameTime_t m_fTimeLastHurt; // offset 0xD18, size 0x4, align 255
    GameTime_t m_flDeathTime; // offset 0xD1C, size 0x4, align 255
    GameTime_t m_fNextSuicideTime; // offset 0xD20, size 0x4, align 255 | MNotSaved
    char _pad_0D24[0x4]; // offset 0xD24
    bool m_fInitHUD; // offset 0xD28, size 0x1, align 1
    char _pad_0D29[0x7]; // offset 0xD29
    CAI_Expresser* m_pExpresser; // offset 0xD30, size 0x8, align 8
    CHandle< CBasePlayerController > m_hController; // offset 0xD38, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xD3C, size 0x4, align 4
    char _pad_0D40[0x4]; // offset 0xD40
    float32 m_fHltvReplayDelay; // offset 0xD44, size 0x4, align 4 | MNotSaved
    float32 m_fHltvReplayEnd; // offset 0xD48, size 0x4, align 4 | MNotSaved
    CEntityIndex m_iHltvReplayEntity; // offset 0xD4C, size 0x4, align 4 | MNotSaved
    CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // offset 0xD50, size 0x18, align 8
    char _pad_0D68[0x8]; // offset 0xD68
};
