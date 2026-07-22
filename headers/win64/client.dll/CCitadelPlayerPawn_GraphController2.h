#pragma once

class CCitadelPlayerPawn_GraphController2 : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x390, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraph2ParamRef< float32 > m_flTimeScale; // offset 0xC0, size 0x18, align 8
    CAnimGraph2ParamRef< float32 > m_flForwardSpeed; // offset 0xD8, size 0x18, align 8
    CAnimGraph2ParamRef< float32 > m_flLookHeading; // offset 0xF0, size 0x18, align 8
    CAnimGraph2ParamRef< float32 > m_flLookPitch; // offset 0x108, size 0x18, align 8
    CAnimGraph2ParamRef< float32 > m_flMoveSpeed; // offset 0x120, size 0x18, align 8
    CAnimGraph2ParamRef< float32 > m_flStrafeSpeed; // offset 0x138, size 0x18, align 8
    CAnimGraph2ParamRef< float32 > m_flVerticalSpeed; // offset 0x150, size 0x18, align 8
    CAnimGraph2ParamRef< float32 > m_flRandomSeed; // offset 0x168, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< Vector > m_vLocomotionFacing; // offset 0x180, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< Vector > m_vLookTarget; // offset 0x198, size 0x18, align 8
    CAnimGraph2ParamRef< CGlobalSymbol > m_HeroActionSource; // offset 0x1B0, size 0x18, align 8
    CAnimGraph2ParamRef< CGlobalSymbol > m_HeroAction; // offset 0x1C8, size 0x18, align 8
    CAnimGraph2ParamRef< CGlobalSymbol > m_HeroState; // offset 0x1E0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_InstantCast; // offset 0x1F8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_AltCast; // offset 0x210, size 0x18, align 8
    CAnimGraph2ParamRef< CGlobalSymbol > m_BaseAction; // offset 0x228, size 0x18, align 8
    CAnimGraph2ParamRef< CGlobalSymbol > m_BaseState; // offset 0x240, size 0x18, align 8
    CAnimGraph2ParamRef< CGlobalSymbol > m_FlinchType; // offset 0x258, size 0x18, align 8
    CAnimGraph2ParamRef< float32 > m_CrouchFraction; // offset 0x270, size 0x18, align 8
    CAnimGraph2ParamRef< CGlobalSymbol > m_MoveType; // offset 0x288, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_CornerLean; // offset 0x2A0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_Environment; // offset 0x2B8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flDirectionCommitment; // offset 0x2D0, size 0x18, align 8
    char _pad_02E8[0x28]; // offset 0x2E8
    bool m_bInGraphParamUpdateFlow; // offset 0x310, size 0x1, align 1
    char _pad_0311[0x7F]; // offset 0x311
};
