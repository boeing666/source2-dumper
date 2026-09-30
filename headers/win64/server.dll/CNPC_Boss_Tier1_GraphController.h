#pragma once

class CNPC_Boss_Tier1_GraphController : public CAI_CitadelNPC_GraphController /*0x0*/  // sizeof 0x440, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x388]; // offset 0x0
    CAnimGraphParamRef< char* > m_pszActivity; // offset 0x388, size 0x30, align 8
    CAnimGraphParamRef< char* > m_pszLaneSide; // offset 0x3B8, size 0x30, align 8
    CAnimGraphParamRef< bool > m_bShieldMode; // offset 0x3E8, size 0x28, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_Activity; // offset 0x410, size 0x30, align 8
};
