#pragma once

class C_BasePlayerPawn : public C_BaseCombatCharacter /*0x0*/  // sizeof 0x1450, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1278]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0x1278, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0x1280, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0x1288, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0x1290, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0x1298, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0x12A0, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0x12A8, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0x12B0, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0x12B8, size 0x8, align 8
    char _pad_12C0[0x8]; // offset 0x12C0
    C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // offset 0x12C8, size 0x68, align 8 | MNotSaved
    QAngle v_angle; // offset 0x1330, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0x133C, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0x1348, size 0x4, align 4
    char _pad_134C[0x4]; // offset 0x134C
    sky3dparams_t m_skybox3d; // offset 0x1350, size 0x90, align 8
    GameTime_t m_flDeathTime; // offset 0x13E0, size 0x4, align 255
    char _pad_13E4[0x4]; // offset 0x13E4
    Vector m_vecPredictionError; // offset 0x13E8, size 0xC, align 4 | MNotSaved
    GameTime_t m_flPredictionErrorTime; // offset 0x13F4, size 0x4, align 255 | MNotSaved
    char _pad_13F8[0x1C]; // offset 0x13F8
    Vector m_vecLastCameraSetupLocalOrigin; // offset 0x1414, size 0xC, align 4 | MNotSaved
    GameTime_t m_flLastCameraSetupTime; // offset 0x1420, size 0x4, align 255 | MNotSaved
    float32 m_flFOVSensitivityAdjust; // offset 0x1424, size 0x4, align 4 | MNotSaved
    float32 m_flMouseSensitivity; // offset 0x1428, size 0x4, align 4 | MNotSaved
    Vector m_vOldOrigin; // offset 0x142C, size 0xC, align 4 | MNotSaved
    float32 m_flOldSimulationTime; // offset 0x1438, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandNumber; // offset 0x143C, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandTick; // offset 0x1440, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hController; // offset 0x1444, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0x1448, size 0x4, align 4
    bool m_bIsSwappingToPredictableController; // offset 0x144C, size 0x1, align 1 | MNotSaved
    char _pad_144D[0x3]; // offset 0x144D
};
