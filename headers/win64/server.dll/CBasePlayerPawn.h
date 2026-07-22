#pragma once

class CBasePlayerPawn : public CBaseCombatCharacter /*0x0*/  // sizeof 0xBE0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xA30, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0xA38, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xA40, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xA48, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0xA50, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0xA58, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xA60, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0xA68, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0xA70, size 0x8, align 8
    char _pad_0A78[0x8]; // offset 0xA78
    CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // offset 0xA80, size 0x68, align 8 | MNotSaved
    QAngle v_angle; // offset 0xAE8, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xAF4, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xB00, size 0x4, align 4
    char _pad_0B04[0x4]; // offset 0xB04
    sky3dparams_t m_skybox3d; // offset 0xB08, size 0x90, align 8
    GameTime_t m_fTimeLastHurt; // offset 0xB98, size 0x4, align 255
    GameTime_t m_flDeathTime; // offset 0xB9C, size 0x4, align 255
    GameTime_t m_fNextSuicideTime; // offset 0xBA0, size 0x4, align 255 | MNotSaved
    bool m_fInitHUD; // offset 0xBA4, size 0x1, align 1
    char _pad_0BA5[0x3]; // offset 0xBA5
    CAI_Expresser* m_pExpresser; // offset 0xBA8, size 0x8, align 8
    CHandle< CBasePlayerController > m_hController; // offset 0xBB0, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xBB4, size 0x4, align 4
    char _pad_0BB8[0x4]; // offset 0xBB8
    float32 m_fHltvReplayDelay; // offset 0xBBC, size 0x4, align 4 | MNotSaved
    float32 m_fHltvReplayEnd; // offset 0xBC0, size 0x4, align 4 | MNotSaved
    CEntityIndex m_iHltvReplayEntity; // offset 0xBC4, size 0x4, align 4 | MNotSaved
    CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // offset 0xBC8, size 0x18, align 8
};
