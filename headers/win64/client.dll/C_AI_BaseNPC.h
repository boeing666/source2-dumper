#pragma once

class C_AI_BaseNPC : public C_BaseCombatCharacter /*0x0*/  // sizeof 0xE40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE30]; // offset 0x0
    NPC_STATE m_NPCState; // offset 0xE30, size 0x4, align 4 | MNotSaved
    char _pad_0E34[0x4]; // offset 0xE34
    C_AI_MotorServices* m_pMotorServices; // offset 0xE38, size 0x8, align 8
};
