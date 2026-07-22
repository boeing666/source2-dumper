#pragma once

class CNPC_Boss_Tier2_GraphController : public CAI_CitadelNPC_GraphController /*0x0*/  // sizeof 0xAD8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    CAnimGraphParamRef< char* > m_pszActivity; // offset 0x7F0, size 0x30, align 8
    CAnimGraphParamRef< char* > m_pszStompAttack; // offset 0x820, size 0x30, align 8
    CAnimGraphParamRef< char* > m_pszStaggerDirection; // offset 0x850, size 0x30, align 8
    CAnimGraphParamRef< char* > m_pszElectricBeamPosition; // offset 0x880, size 0x30, align 8
    CAnimGraphParamRef< bool > m_bStunEnding; // offset 0x8B0, size 0x28, align 8
    CAnimGraphTagRef m_sStaggered; // offset 0x8D8, size 0x20, align 8
    CAnimGraphTagRef m_sStomp; // offset 0x8F8, size 0x20, align 8
    char _pad_0918[0x8]; // offset 0x918
    CAnimGraphTagRef m_sApplyStompDamage; // offset 0x920, size 0x20, align 8
    CAnimGraph2ParamOptionalRef< bool > b_Death; // offset 0x940, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_InCombat; // offset 0x958, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_lookHeading; // offset 0x970, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_LookPitch; // offset 0x988, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_AbilityLongRange; // offset 0x9A0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_AbilitySpecial; // offset 0x9B8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_Melee; // offset 0x9D0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_Stagger; // offset 0x9E8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_LeftHeadLookHeading; // offset 0xA00, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_LeftHeadLookPitch; // offset 0xA18, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_MidHeadLookHeading; // offset 0xA30, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_MidHeadLookPitch; // offset 0xA48, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_RightHeadLookHeading; // offset 0xA60, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > fl_RightHeadLookPitch; // offset 0xA78, size 0x18, align 8
    CAnimGraph2ParamRef< CGlobalSymbol > m_BossActionSource; // offset 0xA90, size 0x18, align 8
    CAnimGraph2ParamRef< CGlobalSymbol > m_BossAction; // offset 0xAA8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eTurn; // offset 0xAC0, size 0x18, align 8
};
