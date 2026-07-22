#pragma once

class CNPC_Boss_Tier1_GraphController : public CAI_CitadelNPC_GraphController /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    CAnimGraphParamRef< char* > m_pszActivity; // offset 0x7F0, size 0x30, align 8
    CAnimGraphParamRef< char* > m_pszLaneSide; // offset 0x820, size 0x30, align 8
    CAnimGraphParamRef< bool > m_bShieldMode; // offset 0x850, size 0x28, align 8
};
