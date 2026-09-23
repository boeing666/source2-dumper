#pragma once

class C_BasePlayerPawn : public C_BaseCombatCharacter /*0x0*/  // sizeof 0x14C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x12F0]; // offset 0x0
    CPlayer_WeaponServices* m_pWeaponServices; // offset 0x12F0, size 0x8, align 8
    CPlayer_ItemServices* m_pItemServices; // offset 0x12F8, size 0x8, align 8
    CPlayer_AutoaimServices* m_pAutoaimServices; // offset 0x1300, size 0x8, align 8
    CPlayer_ObserverServices* m_pObserverServices; // offset 0x1308, size 0x8, align 8
    CPlayer_WaterServices* m_pWaterServices; // offset 0x1310, size 0x8, align 8
    CPlayer_UseServices* m_pUseServices; // offset 0x1318, size 0x8, align 8
    CPlayer_FlashlightServices* m_pFlashlightServices; // offset 0x1320, size 0x8, align 8
    CPlayer_CameraServices* m_pCameraServices; // offset 0x1328, size 0x8, align 8
    CPlayer_MovementServices* m_pMovementServices; // offset 0x1330, size 0x8, align 8
    char _pad_1338[0x8]; // offset 0x1338
    C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // offset 0x1340, size 0x68, align 8 | MNotSaved
    QAngle v_angle; // offset 0x13A8, size 0xC, align 4
    QAngle v_anglePrevious; // offset 0x13B4, size 0xC, align 4
    uint32 m_iHideHUD; // offset 0x13C0, size 0x4, align 4
    char _pad_13C4[0x4]; // offset 0x13C4
    sky3dparams_t m_skybox3d; // offset 0x13C8, size 0x90, align 8
    GameTime_t m_flDeathTime; // offset 0x1458, size 0x4, align 255
    char _pad_145C[0x4]; // offset 0x145C
    Vector m_vecPredictionError; // offset 0x1460, size 0xC, align 4 | MNotSaved
    GameTime_t m_flPredictionErrorTime; // offset 0x146C, size 0x4, align 255 | MNotSaved
    char _pad_1470[0x1C]; // offset 0x1470
    Vector m_vecLastCameraSetupLocalOrigin; // offset 0x148C, size 0xC, align 4 | MNotSaved
    GameTime_t m_flLastCameraSetupTime; // offset 0x1498, size 0x4, align 255 | MNotSaved
    float32 m_flFOVSensitivityAdjust; // offset 0x149C, size 0x4, align 4 | MNotSaved
    float32 m_flMouseSensitivity; // offset 0x14A0, size 0x4, align 4 | MNotSaved
    Vector m_vOldOrigin; // offset 0x14A4, size 0xC, align 4 | MNotSaved
    float32 m_flOldSimulationTime; // offset 0x14B0, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandNumber; // offset 0x14B4, size 0x4, align 4 | MNotSaved
    int32 m_nLastExecutedCommandTick; // offset 0x14B8, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hController; // offset 0x14BC, size 0x4, align 4
    CHandle< CBasePlayerController > m_hDefaultController; // offset 0x14C0, size 0x4, align 4
    bool m_bIsSwappingToPredictableController; // offset 0x14C4, size 0x1, align 1 | MNotSaved
    char _pad_14C5[0x3]; // offset 0x14C5
};
