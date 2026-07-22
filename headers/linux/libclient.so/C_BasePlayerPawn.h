#pragma once

class C_BasePlayerPawn : public C_BaseCombatCharacter /*0x0*/  // sizeof 0x1368, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0x1190, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0x1198, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0x11A0, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0x11A8, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0x11B0, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0x11B8, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0x11C0, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0x11C8, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0x11D0, size 0x8, align 8
    char _pad_11D8[0x8]; // offset 0x11D8
    C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // offset 0x11E0, size 0x68, align 8 | MNotSaved
    QAngle v_angle; // offset 0x1248, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0x1254, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0x1260, size 0x4, align 4
    char _pad_1264[0x4]; // offset 0x1264
    sky3dparams_t m_skybox3d; // offset 0x1268, size 0x90, align 8
    GameTime_t m_flDeathTime; // offset 0x12F8, size 0x4, align 255
    Vector m_vecPredictionError; // offset 0x12FC, size 0xC, align 4 | MNotSaved
    GameTime_t m_flPredictionErrorTime; // offset 0x1308, size 0x4, align 255 | MNotSaved
    char _pad_130C[0x1C]; // offset 0x130C
    Vector m_vecLastCameraSetupLocalOrigin; // offset 0x1328, size 0xC, align 4 | MNotSaved
    GameTime_t m_flLastCameraSetupTime; // offset 0x1334, size 0x4, align 255 | MNotSaved
    float32 m_flFOVSensitivityAdjust; // offset 0x1338, size 0x4, align 4 | MNotSaved
    float32 m_flMouseSensitivity; // offset 0x133C, size 0x4, align 4 | MNotSaved
    Vector m_vOldOrigin; // offset 0x1340, size 0xC, align 4 | MNotSaved
    float32 m_flOldSimulationTime; // offset 0x134C, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandNumber; // offset 0x1350, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandTick; // offset 0x1354, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hController; // offset 0x1358, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0x135C, size 0x4, align 4
    bool m_bIsSwappingToPredictableController; // offset 0x1360, size 0x1, align 1 | MNotSaved
    char _pad_1361[0x7]; // offset 0x1361
};
