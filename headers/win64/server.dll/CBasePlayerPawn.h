#pragma once

class CBasePlayerPawn : public CBaseCombatCharacter /*0x0*/  // sizeof 0xD20, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB60]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xB60, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0xB68, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xB70, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xB78, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0xB80, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0xB88, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xB90, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0xB98, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0xBA0, size 0x8, align 8
    char _pad_0BA8[0x8]; // offset 0xBA8
    CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // offset 0xBB0, size 0x68, align 8 | MNotSaved
    QAngle v_angle; // offset 0xC18, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xC24, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xC30, size 0x4, align 4
    char _pad_0C34[0x4]; // offset 0xC34
    sky3dparams_t m_skybox3d; // offset 0xC38, size 0x90, align 8
    GameTime_t m_fTimeLastHurt; // offset 0xCC8, size 0x4, align 255
    GameTime_t m_flDeathTime; // offset 0xCCC, size 0x4, align 255
    GameTime_t m_fNextSuicideTime; // offset 0xCD0, size 0x4, align 255 | MNotSaved
    char _pad_0CD4[0x4]; // offset 0xCD4
    bool m_fInitHUD; // offset 0xCD8, size 0x1, align 1
    char _pad_0CD9[0x7]; // offset 0xCD9
    CAI_Expresser* m_pExpresser; // offset 0xCE0, size 0x8, align 8
    CHandle< CBasePlayerController > m_hController; // offset 0xCE8, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xCEC, size 0x4, align 4
    char _pad_0CF0[0x4]; // offset 0xCF0
    float32 m_fHltvReplayDelay; // offset 0xCF4, size 0x4, align 4 | MNotSaved
    float32 m_fHltvReplayEnd; // offset 0xCF8, size 0x4, align 4 | MNotSaved
    CEntityIndex m_iHltvReplayEntity; // offset 0xCFC, size 0x4, align 4 | MNotSaved
    CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // offset 0xD00, size 0x18, align 8
    char _pad_0D18[0x8]; // offset 0xD18
};
