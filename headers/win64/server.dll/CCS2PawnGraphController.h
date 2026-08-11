#pragma once

class CCS2PawnGraphController : public CCS2WeaponGraphController /*0x0*/  // sizeof 0x828, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x588]; // offset 0x0
    CAnimGraph2ParamOptionalRef< bool > m_bIsDefusing; // offset 0x588, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_moveType; // offset 0x5A0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_moveDirectionID; // offset 0x5B8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flMoveSpeedX; // offset 0x5D0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flMoveSpeedY; // offset 0x5E8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flMoveSpeedHorizontal; // offset 0x600, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flPreviousMoveSpeedHorizontal; // offset 0x618, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flCrouchAmount; // offset 0x630, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bIsWalking; // offset 0x648, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponDropAmount; // offset 0x660, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_groundAction; // offset 0x678, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_groundActionDirectionID; // offset 0x690, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flGroundTurnAngleOrVelocity; // offset 0x6A8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLadderCycle; // offset 0x6C0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLadderYaw; // offset 0x6D8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLadderYawBackwards; // offset 0x6F0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_airAction; // offset 0x708, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAirHeightAboveGround; // offset 0x720, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CNmTarget > m_leftFootTarget; // offset 0x738, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CNmTarget > m_rightFootTarget; // offset 0x750, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flFlashedAmount; // offset 0x768, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAimPitchAngle; // offset 0x780, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAimYawAngle; // offset 0x798, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_flinchHead; // offset 0x7B0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_flinchHeadRestart; // offset 0x7C8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_flinchBody; // offset 0x7E0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_flinchBodyRestart; // offset 0x7F8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_flinchIsOnFire; // offset 0x810, size 0x18, align 8
};
