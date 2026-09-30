#pragma once

class CNPC_TrooperNeutral_GraphController : public CAI_CitadelNPC_GraphController /*0x0*/  // sizeof 0x450, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x388]; // offset 0x0
    CAnimGraphParamRef< bool > m_bShielded; // offset 0x388, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bAlert; // offset 0x3B0, size 0x28, align 8
    CAnimGraphParamRef< char* > m_pszAttackLeanPosition; // offset 0x3D8, size 0x30, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eBaseAction; // offset 0x408, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_MoveType; // offset 0x420, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eNeutralTurn; // offset 0x438, size 0x18, align 8
};
