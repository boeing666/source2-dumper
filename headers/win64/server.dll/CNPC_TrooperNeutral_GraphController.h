#pragma once

class CNPC_TrooperNeutral_GraphController : public CAI_CitadelNPC_GraphController /*0x0*/  // sizeof 0x8C8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    CAnimGraphParamRef< bool > m_bShielded; // offset 0x7F0, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bAlert; // offset 0x818, size 0x28, align 8
    CAnimGraphParamRef< char* > m_pszAttackLeanPosition; // offset 0x840, size 0x30, align 8
    CAnimGraphParamRef< char* > m_pszOrbDrop; // offset 0x870, size 0x30, align 8
    CAnimGraphParamRef< bool > m_bHeavyMelee; // offset 0x8A0, size 0x28, align 8
};
