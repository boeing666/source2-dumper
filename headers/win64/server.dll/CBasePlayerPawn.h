#pragma once

class CBasePlayerPawn : public CBaseCombatCharacter /*0x0*/  // sizeof 0xA98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x948]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0x948, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0x950, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0x958, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0x960, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0x968, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0x970, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0x978, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0x980, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0x988, size 0x8, align 8
    char _pad_0990[0x8]; // offset 0x990
    QAngle v_angle; // offset 0x998, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0x9A4, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0x9B0, size 0x4, align 4
    char _pad_09B4[0x4]; // offset 0x9B4
    sky3dparams_t m_skybox3d; // offset 0x9B8, size 0x90, align 8
    GameTime_t m_fTimeLastHurt; // offset 0xA48, size 0x4, align 255
    GameTime_t m_flDeathTime; // offset 0xA4C, size 0x4, align 255
    GameTime_t m_fNextSuicideTime; // offset 0xA50, size 0x4, align 255 | MNotSaved
    char _pad_0A54[0x4]; // offset 0xA54
    bool m_fInitHUD; // offset 0xA58, size 0x1, align 1
    char _pad_0A59[0x7]; // offset 0xA59
    CAI_Expresser* m_pExpresser; // offset 0xA60, size 0x8, align 8
    CHandle< CBasePlayerController > m_hController; // offset 0xA68, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xA6C, size 0x4, align 4
    char _pad_0A70[0x4]; // offset 0xA70
    float32 m_fHltvReplayDelay; // offset 0xA74, size 0x4, align 4 | MNotSaved
    float32 m_fHltvReplayEnd; // offset 0xA78, size 0x4, align 4 | MNotSaved
    CEntityIndex m_iHltvReplayEntity; // offset 0xA7C, size 0x4, align 4 | MNotSaved
    CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // offset 0xA80, size 0x18, align 8
};
