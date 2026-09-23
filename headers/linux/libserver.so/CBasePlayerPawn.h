#pragma once

class CBasePlayerPawn : public CBaseCombatCharacter /*0x0*/  // sizeof 0xFB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xDF0]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0xDF0, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0xDF8, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0xE00, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0xE08, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0xE10, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0xE18, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0xE20, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0xE28, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0xE30, size 0x8, align 8
    char _pad_0E38[0x8]; // offset 0xE38
    CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // offset 0xE40, size 0x68, align 8 | MNotSaved
    QAngle v_angle; // offset 0xEA8, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0xEB4, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0xEC0, size 0x4, align 4
    char _pad_0EC4[0x4]; // offset 0xEC4
    sky3dparams_t m_skybox3d; // offset 0xEC8, size 0x90, align 8
    GameTime_t m_fTimeLastHurt; // offset 0xF58, size 0x4, align 255
    GameTime_t m_flDeathTime; // offset 0xF5C, size 0x4, align 255
    GameTime_t m_fNextSuicideTime; // offset 0xF60, size 0x4, align 255 | MNotSaved
    char _pad_0F64[0x4]; // offset 0xF64
    bool m_fInitHUD; // offset 0xF68, size 0x1, align 1
    char _pad_0F69[0x7]; // offset 0xF69
    CAI_Expresser* m_pExpresser; // offset 0xF70, size 0x8, align 8
    CHandle< CBasePlayerController > m_hController; // offset 0xF78, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0xF7C, size 0x4, align 4
    char _pad_0F80[0x4]; // offset 0xF80
    float32 m_fHltvReplayDelay; // offset 0xF84, size 0x4, align 4 | MNotSaved
    float32 m_fHltvReplayEnd; // offset 0xF88, size 0x4, align 4 | MNotSaved
    CEntityIndex m_iHltvReplayEntity; // offset 0xF8C, size 0x4, align 4 | MNotSaved
    CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // offset 0xF90, size 0x18, align 8
    char _pad_0FA8[0x8]; // offset 0xFA8
};
