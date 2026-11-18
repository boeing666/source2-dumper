#pragma once

class CBasePlayerPawn : public CBaseCombatCharacter /*0x0*/  // sizeof 0xAF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0x9A8, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0x9B0, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0x9B8, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0x9C0, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0x9C8, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0x9D0, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0x9D8, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0x9E0, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0x9E8, size 0x8, align 8
    char _pad_09F0[0x8]; // offset 0x9F0
    QAngle v_angle; // offset 0x9F8, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xA04, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xA10, size 0x4, align 4
    char _pad_0A14[0x4]; // offset 0xA14
    sky3dparams_t m_skybox3d; // offset 0xA18, size 0x90, align 8
    GameTime_t m_fTimeLastHurt; // offset 0xAA8, size 0x4, align 255
    GameTime_t m_flDeathTime; // offset 0xAAC, size 0x4, align 255
    GameTime_t m_fNextSuicideTime; // offset 0xAB0, size 0x4, align 255 | MNotSaved
    char _pad_0AB4[0x4]; // offset 0xAB4
    bool m_fInitHUD; // offset 0xAB8, size 0x1, align 1
    char _pad_0AB9[0x7]; // offset 0xAB9
    CAI_Expresser* m_pExpresser; // offset 0xAC0, size 0x8, align 8
    CHandle< CBasePlayerController > m_hController; // offset 0xAC8, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xACC, size 0x4, align 4
    char _pad_0AD0[0x4]; // offset 0xAD0
    float32 m_fHltvReplayDelay; // offset 0xAD4, size 0x4, align 4 | MNotSaved
    float32 m_fHltvReplayEnd; // offset 0xAD8, size 0x4, align 4 | MNotSaved
    CEntityIndex m_iHltvReplayEntity; // offset 0xADC, size 0x4, align 4 | MNotSaved
    CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // offset 0xAE0, size 0x18, align 8
};
