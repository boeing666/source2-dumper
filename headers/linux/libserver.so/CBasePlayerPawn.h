#pragma once

class CBasePlayerPawn : public CBaseCombatCharacter /*0x0*/  // sizeof 0xC88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB40]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xB40, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0xB48, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xB50, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xB58, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0xB60, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0xB68, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xB70, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0xB78, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0xB80, size 0x8, align 8
    char _pad_0B88[0x8]; // offset 0xB88
    QAngle v_angle; // offset 0xB90, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xB9C, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xBA8, size 0x4, align 4
    char _pad_0BAC[0x4]; // offset 0xBAC
    sky3dparams_t m_skybox3d; // offset 0xBB0, size 0x90, align 8
    GameTime_t m_fTimeLastHurt; // offset 0xC40, size 0x4, align 255
    GameTime_t m_flDeathTime; // offset 0xC44, size 0x4, align 255
    GameTime_t m_fNextSuicideTime; // offset 0xC48, size 0x4, align 255 | MNotSaved
    bool m_fInitHUD; // offset 0xC4C, size 0x1, align 1
    char _pad_0C4D[0x3]; // offset 0xC4D
    CAI_Expresser* m_pExpresser; // offset 0xC50, size 0x8, align 8
    CHandle< CBasePlayerController > m_hController; // offset 0xC58, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xC5C, size 0x4, align 4
    char _pad_0C60[0x4]; // offset 0xC60
    float32 m_fHltvReplayDelay; // offset 0xC64, size 0x4, align 4 | MNotSaved
    float32 m_fHltvReplayEnd; // offset 0xC68, size 0x4, align 4 | MNotSaved
    CEntityIndex m_iHltvReplayEntity; // offset 0xC6C, size 0x4, align 4 | MNotSaved
    CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // offset 0xC70, size 0x18, align 8
};
