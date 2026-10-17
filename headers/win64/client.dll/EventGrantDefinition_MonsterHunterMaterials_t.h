#pragma once

struct EventGrantDefinition_MonsterHunterMaterials_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    EMonsterHunterMaterialsSource_t m_eMaterialSource; // offset 0x8, size 0x4, align 4
    item_definition_index_t m_unItemDef; // offset 0xC, size 0x4, align 255
    MonsterHunterCodexID_t m_unCodexID; // offset 0x10, size 0x4, align 255
    EventGrantDefinition_MonsterHunterMaterials_t::MaterialAmount_t[34] m_aMaterials; // offset 0x14, size 0x44, align 1
};
