#pragma once

class C_AI_BaseNPC : public C_BaseCombatCharacter /*0x0*/  // sizeof 0xF00, align 0x8 [vtable] (client) {MNetworkIncludeByName MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xEF0]; // offset 0x0
    NPC_STATE m_NPCState; // offset 0xEF0, size 0x4, align 4 | MNetworkEnable MNotSaved
    bool m_bFadeCorpse; // offset 0xEF4, size 0x1, align 1 | MNetworkEnable MNotSaved
    bool m_bImportantRagdoll; // offset 0xEF5, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_0EF6[0x2]; // offset 0xEF6
    C_AI_Motor* m_pMotor; // offset 0xEF8, size 0x8, align 8 | MNetworkEnable
};
