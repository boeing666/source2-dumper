#pragma once

class CNPC_NecroSkele_GraphController : public CAI_CitadelNPC_GraphController /*0x0*/  // sizeof 0x820, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eBaseAction; // offset 0x7F0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bNewTarget; // offset 0x808, size 0x18, align 8
};
