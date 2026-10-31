#pragma once

class CNPC_Boss_Tier2_GraphController : public CAI_CitadelNPC_GraphController /*0x0*/  // sizeof 0x770, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x4F0]; // offset 0x0
    CAnimGraphParamRef< char* > m_pszActivity; // offset 0x4F0, size 0x30, align 8
    CAnimGraphParamRef< char* > m_pszStompAttack; // offset 0x520, size 0x30, align 8
    CAnimGraphParamRef< char* > m_pszStaggerDirection; // offset 0x550, size 0x30, align 8
    CAnimGraphParamRef< char* > m_pszElectricBeamPosition; // offset 0x580, size 0x30, align 8
    CAnimGraphParamRef< bool > m_bStunEnding; // offset 0x5B0, size 0x28, align 8
    CAnimGraph2ParamOptionalRef< bool > b_Death; // offset 0x5D8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_InCombat; // offset 0x5F0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_lookHeading; // offset 0x608, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_LookPitch; // offset 0x620, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_AbilityLongRange; // offset 0x638, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_AbilitySpecial; // offset 0x650, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_Melee; // offset 0x668, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_Stagger; // offset 0x680, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_LeftHeadLookHeading; // offset 0x698, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_LeftHeadLookPitch; // offset 0x6B0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_MidHeadLookHeading; // offset 0x6C8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_MidHeadLookPitch; // offset 0x6E0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_RightHeadLookHeading; // offset 0x6F8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_RightHeadLookPitch; // offset 0x710, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_BossActionSource; // offset 0x728, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_BossAction; // offset 0x740, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_BossActivity; // offset 0x758, size 0x18, align 8
};
