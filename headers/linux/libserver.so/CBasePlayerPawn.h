#pragma once

class CBasePlayerPawn : public CBaseCombatCharacter /*0x0*/  // sizeof 0xDD8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC88]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xC88, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0xC90, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xC98, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xCA0, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0xCA8, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0xCB0, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xCB8, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0xCC0, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0xCC8, size 0x8, align 8
    char _pad_0CD0[0x8]; // offset 0xCD0
    QAngle v_angle; // offset 0xCD8, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xCE4, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xCF0, size 0x4, align 4
    char _pad_0CF4[0x4]; // offset 0xCF4
    sky3dparams_t m_skybox3d; // offset 0xCF8, size 0x90, align 8
    GameTime_t m_fTimeLastHurt; // offset 0xD88, size 0x4, align 255
    GameTime_t m_flDeathTime; // offset 0xD8C, size 0x4, align 255
    GameTime_t m_fNextSuicideTime; // offset 0xD90, size 0x4, align 255 | MNotSaved
    char _pad_0D94[0x4]; // offset 0xD94
    bool m_fInitHUD; // offset 0xD98, size 0x1, align 1
    char _pad_0D99[0x7]; // offset 0xD99
    CAI_Expresser* m_pExpresser; // offset 0xDA0, size 0x8, align 8
    CHandle< CBasePlayerController > m_hController; // offset 0xDA8, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xDAC, size 0x4, align 4
    char _pad_0DB0[0x4]; // offset 0xDB0
    float32 m_fHltvReplayDelay; // offset 0xDB4, size 0x4, align 4 | MNotSaved
    float32 m_fHltvReplayEnd; // offset 0xDB8, size 0x4, align 4 | MNotSaved
    CEntityIndex m_iHltvReplayEntity; // offset 0xDBC, size 0x4, align 4 | MNotSaved
    CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // offset 0xDC0, size 0x18, align 8
};
