#pragma once

class CCS2PawnGraphController : public CCS2WeaponGraphController /*0x0*/  // sizeof 0x578, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x2D8]; // offset 0x0
    CAnimGraph2ParamOptionalRef< bool > m_bIsDefusing; // offset 0x2D8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_moveType; // offset 0x2F0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_moveDirectionID; // offset 0x308, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flMoveSpeedX; // offset 0x320, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flMoveSpeedY; // offset 0x338, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flMoveSpeedHorizontal; // offset 0x350, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flPreviousMoveSpeedHorizontal; // offset 0x368, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flCrouchAmount; // offset 0x380, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bIsWalking; // offset 0x398, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponDropAmount; // offset 0x3B0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_groundAction; // offset 0x3C8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_groundActionDirectionID; // offset 0x3E0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flGroundTurnAngleOrVelocity; // offset 0x3F8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLadderCycle; // offset 0x410, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLadderYaw; // offset 0x428, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLadderYawBackwards; // offset 0x440, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_airAction; // offset 0x458, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAirHeightAboveGround; // offset 0x470, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CNmTarget > m_leftFootTarget; // offset 0x488, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CNmTarget > m_rightFootTarget; // offset 0x4A0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flFlashedAmount; // offset 0x4B8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAimPitchAngle; // offset 0x4D0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAimYawAngle; // offset 0x4E8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_flinchHead; // offset 0x500, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_flinchHeadRestart; // offset 0x518, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_flinchBody; // offset 0x530, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_flinchBodyRestart; // offset 0x548, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_flinchIsOnFire; // offset 0x560, size 0x18, align 8
};
