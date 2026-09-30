#pragma once

class CCitadelPlayerPawn_GraphController2 : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x570, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC8]; // offset 0x0
    CAnimGraph2ParamOptionalRef< float32 > m_flTimeScale; // offset 0xC8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flForwardSpeed; // offset 0xE0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLookHeading; // offset 0xF8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLookPitch; // offset 0x110, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLookHeadingSpeed; // offset 0x128, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLookPitchSpeed; // offset 0x140, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flMoveSpeed; // offset 0x158, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flTurnSpeed; // offset 0x170, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flStrafeSpeed; // offset 0x188, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flVerticalSpeed; // offset 0x1A0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flRandomSeed; // offset 0x1B8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bHasLookTarget; // offset 0x1D0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< Vector > m_vLookTarget; // offset 0x1E8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_HeroActionSource; // offset 0x200, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_HeroAction; // offset 0x218, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_HeroState; // offset 0x230, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_InstantCast; // offset 0x248, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_AltCast; // offset 0x260, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_BaseAction; // offset 0x278, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_BaseState; // offset 0x290, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_FlinchType; // offset 0x2A8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_CrouchFraction; // offset 0x2C0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_MoveType; // offset 0x2D8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_CornerLean; // offset 0x2F0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_Environment; // offset 0x308, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_CameraMode; // offset 0x320, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_Emote; // offset 0x338, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flDirectionCommitment; // offset 0x350, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flFireRateScale; // offset 0x368, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_aim; // offset 0x380, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flZipLineAttachBlend; // offset 0x398, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flInputForward; // offset 0x3B0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flInputRight; // offset 0x3C8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flHeroFloat1; // offset 0x3E0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flHeroFloat2; // offset 0x3F8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flHeroFloat3; // offset 0x410, size 0x18, align 8
    CAnimGraphTagOptionalRef m_tagEmote; // offset 0x428, size 0x18, align 8
    char _pad_0440[0x130]; // offset 0x440
};
