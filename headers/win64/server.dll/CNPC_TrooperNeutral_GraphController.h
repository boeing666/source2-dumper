#pragma once

class CNPC_TrooperNeutral_GraphController : public CAI_CitadelNPC_GraphController /*0x0*/  // sizeof 0x5B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x4F0]; // offset 0x0
    CAnimGraphParamRef< bool > m_bShielded; // offset 0x4F0, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bAlert; // offset 0x518, size 0x28, align 8
    CAnimGraphParamRef< char* > m_pszAttackLeanPosition; // offset 0x540, size 0x30, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eBaseAction; // offset 0x570, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_MoveType; // offset 0x588, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eNeutralTurn; // offset 0x5A0, size 0x18, align 8
};
