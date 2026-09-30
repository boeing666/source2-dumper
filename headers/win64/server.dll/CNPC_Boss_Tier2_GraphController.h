#pragma once

class CNPC_Boss_Tier2_GraphController : public CAI_CitadelNPC_GraphController /*0x0*/  // sizeof 0x608, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x388]; // offset 0x0
    CAnimGraphParamRef< char* > m_pszActivity; // offset 0x388, size 0x30, align 8
    CAnimGraphParamRef< char* > m_pszStompAttack; // offset 0x3B8, size 0x30, align 8
    CAnimGraphParamRef< char* > m_pszStaggerDirection; // offset 0x3E8, size 0x30, align 8
    CAnimGraphParamRef< char* > m_pszElectricBeamPosition; // offset 0x418, size 0x30, align 8
    CAnimGraphParamRef< bool > m_bStunEnding; // offset 0x448, size 0x28, align 8
    CAnimGraph2ParamOptionalRef< bool > b_Death; // offset 0x470, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_InCombat; // offset 0x488, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_lookHeading; // offset 0x4A0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_LookPitch; // offset 0x4B8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_AbilityLongRange; // offset 0x4D0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_AbilitySpecial; // offset 0x4E8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_Melee; // offset 0x500, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_Stagger; // offset 0x518, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_LeftHeadLookHeading; // offset 0x530, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_LeftHeadLookPitch; // offset 0x548, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_MidHeadLookHeading; // offset 0x560, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_MidHeadLookPitch; // offset 0x578, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_RightHeadLookHeading; // offset 0x590, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_RightHeadLookPitch; // offset 0x5A8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_BossActionSource; // offset 0x5C0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_BossAction; // offset 0x5D8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_BossActivity; // offset 0x5F0, size 0x18, align 8
};
