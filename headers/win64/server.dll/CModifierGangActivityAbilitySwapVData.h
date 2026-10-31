#pragma once

class CModifierGangActivityAbilitySwapVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CSubclassName< 4 > m_SummonGangster; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    CSubclassName< 4 > m_TeleportToGangster; // offset 0x7A8, size 0x10, align 8
    CSubclassName< 4 > m_Cancel; // offset 0x7B8, size 0x10, align 8
    CSubclassName< 4 > m_ReplaceWithSummonGangster; // offset 0x7C8, size 0x10, align 8
    CSubclassName< 4 > m_ReplaceWithTeleportToGangster; // offset 0x7D8, size 0x10, align 8
    CSubclassName< 4 > m_ReplaceWithCancel; // offset 0x7E8, size 0x10, align 8
};
