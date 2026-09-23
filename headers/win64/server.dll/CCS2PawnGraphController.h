#pragma once

class CCS2PawnGraphController : public CCS2WeaponGraphController /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x5C0]; // offset 0x0
    CAnimGraph2ParamOptionalRef< bool > m_bIsDefusing; // offset 0x5C0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_moveType; // offset 0x5D8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_moveDirectionID; // offset 0x5F0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flMoveSpeedX; // offset 0x608, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flMoveSpeedY; // offset 0x620, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flMoveSpeedHorizontal; // offset 0x638, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flPreviousMoveSpeedHorizontal; // offset 0x650, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flCrouchAmount; // offset 0x668, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bIsWalking; // offset 0x680, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponDropAmount; // offset 0x698, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_groundAction; // offset 0x6B0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_groundActionDirectionID; // offset 0x6C8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flGroundTurnAngleOrVelocity; // offset 0x6E0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLadderCycle; // offset 0x6F8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLadderYaw; // offset 0x710, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLadderYawBackwards; // offset 0x728, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_airAction; // offset 0x740, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAirHeightAboveGround; // offset 0x758, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CNmTarget > m_leftFootTarget; // offset 0x770, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CNmTarget > m_rightFootTarget; // offset 0x788, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flFlashedAmount; // offset 0x7A0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAimPitchAngle; // offset 0x7B8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAimYawAngle; // offset 0x7D0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_flinchHead; // offset 0x7E8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_flinchHeadRestart; // offset 0x800, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_flinchBody; // offset 0x818, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_flinchBodyRestart; // offset 0x830, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_flinchIsOnFire; // offset 0x848, size 0x18, align 8
};
