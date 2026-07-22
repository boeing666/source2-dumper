#pragma once

class CModifierGangActivityAbilitySwapVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CSubclassName< 4 > m_SummonGangster; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CSubclassName< 4 > m_TeleportToGangster; // offset 0x760, size 0x10, align 8
    CSubclassName< 4 > m_Cancel; // offset 0x770, size 0x10, align 8
    CSubclassName< 4 > m_ReplaceWithSummonGangster; // offset 0x780, size 0x10, align 8
    CSubclassName< 4 > m_ReplaceWithTeleportToGangster; // offset 0x790, size 0x10, align 8
    CSubclassName< 4 > m_ReplaceWithCancel; // offset 0x7A0, size 0x10, align 8
};
