#pragma once

class CCS2PawnGraphController : public CCS2WeaponGraphController /*0x0*/  // sizeof 0x540, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x2A0]; // offset 0x0
    CAnimGraph2ParamOptionalRef< bool > m_bIsDefusing; // offset 0x2A0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_moveType; // offset 0x2B8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_moveDirectionID; // offset 0x2D0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flMoveSpeedX; // offset 0x2E8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flMoveSpeedY; // offset 0x300, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flMoveSpeedHorizontal; // offset 0x318, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flPreviousMoveSpeedHorizontal; // offset 0x330, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flCrouchAmount; // offset 0x348, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bIsWalking; // offset 0x360, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponDropAmount; // offset 0x378, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_groundAction; // offset 0x390, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_groundActionDirectionID; // offset 0x3A8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flGroundTurnAngleOrVelocity; // offset 0x3C0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLadderCycle; // offset 0x3D8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLadderYaw; // offset 0x3F0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLadderYawBackwards; // offset 0x408, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_airAction; // offset 0x420, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAirHeightAboveGround; // offset 0x438, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CNmTarget > m_leftFootTarget; // offset 0x450, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CNmTarget > m_rightFootTarget; // offset 0x468, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flFlashedAmount; // offset 0x480, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAimPitchAngle; // offset 0x498, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAimYawAngle; // offset 0x4B0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_flinchHead; // offset 0x4C8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_flinchHeadRestart; // offset 0x4E0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_flinchBody; // offset 0x4F8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_flinchBodyRestart; // offset 0x510, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_flinchIsOnFire; // offset 0x528, size 0x18, align 8
};
