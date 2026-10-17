#pragma once

class CBasePlayerPawn : public CBaseCombatCharacter /*0x0*/  // sizeof 0xD70, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC20]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xC20, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0xC28, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xC30, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xC38, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0xC40, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0xC48, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xC50, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0xC58, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0xC60, size 0x8, align 8
    char _pad_0C68[0x8]; // offset 0xC68
    QAngle v_angle; // offset 0xC70, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xC7C, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xC88, size 0x4, align 4
    char _pad_0C8C[0x4]; // offset 0xC8C
    sky3dparams_t m_skybox3d; // offset 0xC90, size 0x90, align 8
    GameTime_t m_fTimeLastHurt; // offset 0xD20, size 0x4, align 255
    GameTime_t m_flDeathTime; // offset 0xD24, size 0x4, align 255
    GameTime_t m_fNextSuicideTime; // offset 0xD28, size 0x4, align 255 | MNotSaved
    char _pad_0D2C[0x4]; // offset 0xD2C
    bool m_fInitHUD; // offset 0xD30, size 0x1, align 1
    char _pad_0D31[0x7]; // offset 0xD31
    CAI_Expresser* m_pExpresser; // offset 0xD38, size 0x8, align 8
    CHandle< CBasePlayerController > m_hController; // offset 0xD40, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xD44, size 0x4, align 4
    char _pad_0D48[0x4]; // offset 0xD48
    float32 m_fHltvReplayDelay; // offset 0xD4C, size 0x4, align 4 | MNotSaved
    float32 m_fHltvReplayEnd; // offset 0xD50, size 0x4, align 4 | MNotSaved
    CEntityIndex m_iHltvReplayEntity; // offset 0xD54, size 0x4, align 4 | MNotSaved
    CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // offset 0xD58, size 0x18, align 8
};
