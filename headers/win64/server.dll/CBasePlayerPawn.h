#pragma once

class CBasePlayerPawn : public CBaseCombatCharacter /*0x0*/  // sizeof 0x9B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x868]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0x868, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0x870, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0x878, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0x880, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0x888, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0x890, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0x898, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0x8A0, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0x8A8, size 0x8, align 8
    char _pad_08B0[0x8]; // offset 0x8B0
    QAngle v_angle; // offset 0x8B8, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0x8C4, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0x8D0, size 0x4, align 4
    char _pad_08D4[0x4]; // offset 0x8D4
    sky3dparams_t m_skybox3d; // offset 0x8D8, size 0x90, align 8
    GameTime_t m_fTimeLastHurt; // offset 0x968, size 0x4, align 255
    GameTime_t m_flDeathTime; // offset 0x96C, size 0x4, align 255
    GameTime_t m_fNextSuicideTime; // offset 0x970, size 0x4, align 255 | MNotSaved
    bool m_fInitHUD; // offset 0x974, size 0x1, align 1
    char _pad_0975[0x3]; // offset 0x975
    CAI_Expresser* m_pExpresser; // offset 0x978, size 0x8, align 8
    CHandle< CBasePlayerController > m_hController; // offset 0x980, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0x984, size 0x4, align 4
    char _pad_0988[0x4]; // offset 0x988
    float32 m_fHltvReplayDelay; // offset 0x98C, size 0x4, align 4 | MNotSaved
    float32 m_fHltvReplayEnd; // offset 0x990, size 0x4, align 4 | MNotSaved
    CEntityIndex m_iHltvReplayEntity; // offset 0x994, size 0x4, align 4 | MNotSaved
    CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // offset 0x998, size 0x18, align 8
};
