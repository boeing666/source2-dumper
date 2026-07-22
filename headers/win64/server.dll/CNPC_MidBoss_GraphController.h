#pragma once

class CNPC_MidBoss_GraphController : public CAI_CitadelNPC_GraphController /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    CAnimGraphParamRef< char* > m_pszActivity; // offset 0x7F0, size 0x30, align 8
    CAnimGraphTagRef m_sAbilityDeployActive; // offset 0x820, size 0x20, align 8
};
