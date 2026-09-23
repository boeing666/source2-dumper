#pragma once

class CBasePlayerPawn : public CBaseCombatCharacter /*0x0*/  // sizeof 0xCD0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB10]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xB10, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0xB18, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xB20, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xB28, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0xB30, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0xB38, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xB40, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0xB48, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0xB50, size 0x8, align 8
    char _pad_0B58[0x8]; // offset 0xB58
    CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // offset 0xB60, size 0x68, align 8 | MNotSaved
    QAngle v_angle; // offset 0xBC8, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xBD4, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xBE0, size 0x4, align 4
    char _pad_0BE4[0x4]; // offset 0xBE4
    sky3dparams_t m_skybox3d; // offset 0xBE8, size 0x90, align 8
    GameTime_t m_fTimeLastHurt; // offset 0xC78, size 0x4, align 255
    GameTime_t m_flDeathTime; // offset 0xC7C, size 0x4, align 255
    GameTime_t m_fNextSuicideTime; // offset 0xC80, size 0x4, align 255 | MNotSaved
    char _pad_0C84[0x4]; // offset 0xC84
    bool m_fInitHUD; // offset 0xC88, size 0x1, align 1
    char _pad_0C89[0x7]; // offset 0xC89
    CAI_Expresser* m_pExpresser; // offset 0xC90, size 0x8, align 8
    CHandle< CBasePlayerController > m_hController; // offset 0xC98, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xC9C, size 0x4, align 4
    char _pad_0CA0[0x4]; // offset 0xCA0
    float32 m_fHltvReplayDelay; // offset 0xCA4, size 0x4, align 4 | MNotSaved
    float32 m_fHltvReplayEnd; // offset 0xCA8, size 0x4, align 4 | MNotSaved
    CEntityIndex m_iHltvReplayEntity; // offset 0xCAC, size 0x4, align 4 | MNotSaved
    CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // offset 0xCB0, size 0x18, align 8
    char _pad_0CC8[0x8]; // offset 0xCC8
};
